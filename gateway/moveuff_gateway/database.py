from __future__ import annotations

import json
import sqlite3
from contextlib import contextmanager
from datetime import datetime, timezone
from pathlib import Path
from typing import Any, Iterator


def utc_now() -> str:
    return datetime.now(timezone.utc).isoformat()


class GatewayDatabase:
    def __init__(self, path: str, report_retention: int = 100):
        self.path = path
        self.report_retention = report_retention

    @contextmanager
    def connect(self) -> Iterator[sqlite3.Connection]:
        if self.path != ":memory:":
            Path(self.path).parent.mkdir(parents=True, exist_ok=True)

        con = sqlite3.connect(self.path)
        con.row_factory = sqlite3.Row
        try:
            yield con
            con.commit()
        finally:
            con.close()

    def initialize(self) -> None:
        with self.connect() as con:
            con.execute("PRAGMA journal_mode=WAL")
            con.execute("PRAGMA foreign_keys=ON")
            con.executescript(
                """
                CREATE TABLE IF NOT EXISTS bikes (
                    uuid TEXT PRIMARY KEY,
                    host TEXT NOT NULL,
                    port INTEGER NOT NULL,
                    metadata_json TEXT NOT NULL DEFAULT '{}',
                    status TEXT NOT NULL DEFAULT 'registered',
                    registered_at TEXT NOT NULL,
                    updated_at TEXT NOT NULL,
                    last_seen_at TEXT
                );

                CREATE TABLE IF NOT EXISTS bike_state (
                    bike_uuid TEXT PRIMARY KEY REFERENCES bikes(uuid) ON DELETE CASCADE,
                    state_json TEXT NOT NULL,
                    updated_at TEXT NOT NULL
                );

                CREATE TABLE IF NOT EXISTS bike_reports (
                    id INTEGER PRIMARY KEY AUTOINCREMENT,
                    bike_uuid TEXT NOT NULL REFERENCES bikes(uuid) ON DELETE CASCADE,
                    received_at TEXT NOT NULL,
                    report_json TEXT NOT NULL
                );

                CREATE INDEX IF NOT EXISTS idx_bike_reports_bike_id
                    ON bike_reports (bike_uuid, id DESC);

                CREATE TABLE IF NOT EXISTS bike_commands (
                    id INTEGER PRIMARY KEY AUTOINCREMENT,
                    bike_uuid TEXT NOT NULL REFERENCES bikes(uuid) ON DELETE CASCADE,
                    command TEXT NOT NULL,
                    target TEXT NOT NULL,
                    object_reference TEXT NOT NULL,
                    value INTEGER NOT NULL,
                    status TEXT NOT NULL DEFAULT 'pending',
                    error TEXT,
                    created_at TEXT NOT NULL,
                    updated_at TEXT NOT NULL,
                    executed_at TEXT
                );

                CREATE INDEX IF NOT EXISTS idx_bike_commands_bike_status
                    ON bike_commands (bike_uuid, status, id);
                """
            )

    def register_bike(self, bike_uuid: str, host: str, port: int, metadata: dict[str, Any]) -> dict[str, Any]:
        now = utc_now()
        with self.connect() as con:
            con.execute(
                """
                INSERT INTO bikes (uuid, host, port, metadata_json, status, registered_at, updated_at, last_seen_at)
                VALUES (?, ?, ?, ?, 'registered', ?, ?, ?)
                ON CONFLICT(uuid) DO UPDATE SET
                    host = excluded.host,
                    port = excluded.port,
                    metadata_json = excluded.metadata_json,
                    status = CASE
                        WHEN bikes.status IN ('connected', 'reporting') THEN bikes.status
                        ELSE 'registered'
                    END,
                    updated_at = excluded.updated_at,
                    last_seen_at = excluded.last_seen_at
                """,
                (bike_uuid, host, port, json.dumps(metadata, sort_keys=True), now, now, now),
            )
            row = con.execute("SELECT * FROM bikes WHERE uuid = ?", (bike_uuid,)).fetchone()
            return self._bike_from_row(row)

    def list_bikes(self) -> list[dict[str, Any]]:
        with self.connect() as con:
            rows = con.execute("SELECT * FROM bikes ORDER BY updated_at DESC").fetchall()
            return [self._bike_from_row(row) for row in rows]

    def get_bike(self, bike_uuid: str) -> dict[str, Any] | None:
        with self.connect() as con:
            row = con.execute("SELECT * FROM bikes WHERE uuid = ?", (bike_uuid,)).fetchone()
            return self._bike_from_row(row) if row else None

    def update_bike_status(self, bike_uuid: str, status: str) -> None:
        now = utc_now()
        with self.connect() as con:
            con.execute(
                "UPDATE bikes SET status = ?, updated_at = ? WHERE uuid = ?",
                (status, now, bike_uuid),
            )

    def upsert_state(self, bike_uuid: str, state: dict[str, Any], updated_at: str | None = None) -> None:
        timestamp = updated_at or utc_now()
        with self.connect() as con:
            con.execute(
                """
                INSERT INTO bike_state (bike_uuid, state_json, updated_at)
                VALUES (?, ?, ?)
                ON CONFLICT(bike_uuid) DO UPDATE SET
                    state_json = excluded.state_json,
                    updated_at = excluded.updated_at
                """,
                (bike_uuid, json.dumps(state, sort_keys=True), timestamp),
            )

    def get_state(self, bike_uuid: str) -> dict[str, Any] | None:
        with self.connect() as con:
            row = con.execute(
                "SELECT state_json, updated_at FROM bike_state WHERE bike_uuid = ?",
                (bike_uuid,),
            ).fetchone()
            if row is None:
                return None
            return {"updated_at": row["updated_at"], "state": json.loads(row["state_json"])}

    def insert_report(self, bike_uuid: str, report: dict[str, Any], received_at: str | None = None) -> int:
        timestamp = received_at or utc_now()
        with self.connect() as con:
            cursor = con.execute(
                "INSERT INTO bike_reports (bike_uuid, received_at, report_json) VALUES (?, ?, ?)",
                (bike_uuid, timestamp, json.dumps(report, sort_keys=True)),
            )
            report_id = int(cursor.lastrowid)
            con.execute(
                """
                DELETE FROM bike_reports
                WHERE bike_uuid = ?
                  AND id NOT IN (
                      SELECT id FROM bike_reports
                      WHERE bike_uuid = ?
                      ORDER BY id DESC
                      LIMIT ?
                  )
                """,
                (bike_uuid, bike_uuid, self.report_retention),
            )
            return report_id

    def list_reports(self, bike_uuid: str, limit: int) -> list[dict[str, Any]]:
        with self.connect() as con:
            rows = con.execute(
                """
                SELECT id, received_at, report_json
                FROM bike_reports
                WHERE bike_uuid = ?
                ORDER BY id DESC
                LIMIT ?
                """,
                (bike_uuid, limit),
            ).fetchall()
            return [
                {
                    "id": row["id"],
                    "received_at": row["received_at"],
                    "report": json.loads(row["report_json"]),
                }
                for row in rows
            ]

    def create_command(
        self,
        bike_uuid: str,
        command: str,
        target: str,
        object_reference: str,
        value: int,
    ) -> dict[str, Any]:
        now = utc_now()
        with self.connect() as con:
            cursor = con.execute(
                """
                INSERT INTO bike_commands (
                    bike_uuid, command, target, object_reference, value,
                    status, created_at, updated_at
                )
                VALUES (?, ?, ?, ?, ?, 'pending', ?, ?)
                """,
                (bike_uuid, command, target, object_reference, value, now, now),
            )
            row = con.execute(
                "SELECT * FROM bike_commands WHERE id = ?",
                (int(cursor.lastrowid),),
            ).fetchone()
            return self._command_from_row(row)

    def get_command(self, command_id: int) -> dict[str, Any] | None:
        with self.connect() as con:
            row = con.execute("SELECT * FROM bike_commands WHERE id = ?", (command_id,)).fetchone()
            return self._command_from_row(row) if row else None

    @staticmethod
    def _bike_from_row(row: sqlite3.Row) -> dict[str, Any]:
        return {
            "uuid": row["uuid"],
            "host": row["host"],
            "port": row["port"],
            "metadata": json.loads(row["metadata_json"]),
            "status": row["status"],
            "registered_at": row["registered_at"],
            "updated_at": row["updated_at"],
            "last_seen_at": row["last_seen_at"],
        }

    @staticmethod
    def _command_from_row(row: sqlite3.Row) -> dict[str, Any]:
        return {
            "id": row["id"],
            "bike_uuid": row["bike_uuid"],
            "command": row["command"],
            "target": row["target"],
            "object_reference": row["object_reference"],
            "value": row["value"],
            "status": row["status"],
            "error": row["error"],
            "created_at": row["created_at"],
            "updated_at": row["updated_at"],
            "executed_at": row["executed_at"],
        }
