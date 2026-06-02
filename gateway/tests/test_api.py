from __future__ import annotations

from pathlib import Path

from fastapi.testclient import TestClient

from moveuff_gateway.app import create_app
from moveuff_gateway.config import Settings


BIKE_UUID = "11111111-1111-4111-8111-111111111111"


def make_client(tmp_path: Path, retention: int = 100) -> TestClient:
    app = create_app(
        Settings(
            database_path=str(tmp_path / "gateway.db"),
            registration_token="test-token",
            report_retention=retention,
        )
    )
    app.state.database.initialize()
    return TestClient(app)


def register(client: TestClient, bike_uuid: str = BIKE_UUID) -> None:
    response = client.post(
        "/api/v1/bikes/register",
        headers={"Authorization": "Bearer test-token"},
        json={"uuid": bike_uuid, "host": "10.0.0.5", "port": 102, "metadata": {"label": "lab"}},
    )
    assert response.status_code == 200


def test_register_requires_token(tmp_path: Path) -> None:
    client = make_client(tmp_path)
    response = client.post(
        "/api/v1/bikes/register",
        json={"uuid": BIKE_UUID, "host": "10.0.0.5", "port": 102},
    )
    assert response.status_code == 401


def test_register_rejects_invalid_uuid(tmp_path: Path) -> None:
    client = make_client(tmp_path)
    response = client.post(
        "/api/v1/bikes/register",
        headers={"Authorization": "Bearer test-token"},
        json={"uuid": "not-a-uuid", "host": "10.0.0.5", "port": 102},
    )
    assert response.status_code == 422


def test_register_and_get_bike(tmp_path: Path) -> None:
    client = make_client(tmp_path)
    register(client)

    list_response = client.get("/api/v1/bikes")
    assert list_response.status_code == 200
    assert list_response.json()[0]["uuid"] == BIKE_UUID

    detail_response = client.get(f"/api/v1/bikes/{BIKE_UUID}")
    assert detail_response.status_code == 200
    body = detail_response.json()
    assert body["host"] == "10.0.0.5"
    assert body["port"] == 102
    assert body["status"] == "registered"
    assert body["state"] is None


def test_state_and_reports_are_returned(tmp_path: Path) -> None:
    client = make_client(tmp_path)
    register(client)

    db = client.app.state.database
    db.upsert_state(BIKE_UUID, {"battery": {"voltage": 48.4}})
    db.insert_report(BIKE_UUID, {"battery_voltage": 48.4})

    detail_response = client.get(f"/api/v1/bikes/{BIKE_UUID}")
    assert detail_response.status_code == 200
    assert detail_response.json()["state"]["battery"]["voltage"] == 48.4

    reports_response = client.get(f"/api/v1/bikes/{BIKE_UUID}/reports")
    assert reports_response.status_code == 200
    assert reports_response.json()[0]["report"]["battery_voltage"] == 48.4


def test_report_retention(tmp_path: Path) -> None:
    client = make_client(tmp_path, retention=3)
    register(client)

    db = client.app.state.database
    for index in range(5):
        db.insert_report(BIKE_UUID, {"seq": index})

    reports_response = client.get(f"/api/v1/bikes/{BIKE_UUID}/reports?limit=10")
    assert reports_response.status_code == 200
    assert [row["report"]["seq"] for row in reports_response.json()] == [4, 3, 2]


def test_openapi_json_is_exposed_for_frontend_integration(tmp_path: Path) -> None:
    client = make_client(tmp_path)

    response = client.get("/docs/json")

    assert response.status_code == 200
    body = response.json()
    assert body["openapi"].startswith("3.")
    assert "/api/v1/bikes/register" in body["paths"]
    assert "/api/v1/bikes" in body["paths"]
    assert "/api/v1/bikes/{bike_uuid}" in body["paths"]
    assert "/api/v1/bikes/{bike_uuid}/reports" in body["paths"]
    assert "/api/v1/bikes/{bike_uuid}/commands/dbpos" in body["paths"]
    assert "BikeRegisterRequest" in body["components"]["schemas"]
    assert "BikeDetailResponse" in body["components"]["schemas"]
    assert "DbposCommandRequest" in body["components"]["schemas"]


def test_dbpos_command_requires_token(tmp_path: Path) -> None:
    client = make_client(tmp_path)
    register(client)

    response = client.post(
        f"/api/v1/bikes/{BIKE_UUID}/commands/dbpos",
        json={"target": "battery_lock", "value": 40},
    )

    assert response.status_code == 401


def test_dbpos_command_is_queued(tmp_path: Path) -> None:
    client = make_client(tmp_path)
    register(client)

    response = client.post(
        f"/api/v1/bikes/{BIKE_UUID}/commands/dbpos",
        headers={"Authorization": "Bearer test-token"},
        json={"target": "battery_lock", "value": 40},
    )

    assert response.status_code == 202
    body = response.json()
    assert body["bike_uuid"] == BIKE_UUID
    assert body["command"] == "dbpos"
    assert body["target"] == "battery_lock"
    assert body["object_reference"] == "MoveUFF_GeralB1STG/XSWI1.Pos"
    assert body["value"] == 40
    assert body["status"] == "pending"

    command_response = client.get(f"/api/v1/commands/{body['id']}")
    assert command_response.status_code == 200
    assert command_response.json()["id"] == body["id"]


def test_dbpos_command_rejects_unsupported_value(tmp_path: Path) -> None:
    client = make_client(tmp_path)
    register(client)

    response = client.post(
        f"/api/v1/bikes/{BIKE_UUID}/commands/dbpos",
        headers={"Authorization": "Bearer test-token"},
        json={"target": "battery_lock", "value": 2},
    )

    assert response.status_code == 422
