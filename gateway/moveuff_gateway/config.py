from __future__ import annotations

import os
from dataclasses import dataclass


@dataclass(frozen=True)
class Settings:
    database_path: str = "gateway.db"
    registration_token: str = "moveuff-dev-token"
    report_retention: int = 100
    cors_origins: tuple[str, ...] = (
        "*",
    )

    @classmethod
    def from_env(cls) -> "Settings":
        cors_origins = tuple(
            origin.strip()
            for origin in os.getenv(
                "MOVEUFF_CORS_ORIGINS",
                "*",
            ).split(",")
            if origin.strip()
        )

        return cls(
            database_path=os.getenv("MOVEUFF_GATEWAY_DB", "gateway.db"),
            registration_token=os.getenv(
                "MOVEUFF_REGISTRATION_TOKEN", "moveuff-dev-token"),
            report_retention=int(os.getenv("MOVEUFF_REPORT_RETENTION", "100")),
            cors_origins=cors_origins,
        )
