# MoveUFF Gateway

FastAPI service for registering bike MMS servers and exposing their latest telemetry.

## Run

```bash
uv sync --extra test
MOVEUFF_REGISTRATION_TOKEN=dev-token uv run uvicorn moveuff_gateway.app:app --reload
```

## Register a bike

```bash
curl -X POST http://127.0.0.1:8000/api/v1/bikes/register \
  -H 'Authorization: Bearer dev-token' \
  -H 'Content-Type: application/json' \
  -d '{"uuid":"11111111-1111-4111-8111-111111111111","host":"192.168.1.50","port":102,"metadata":{"name":"bike-1"}}'
```

The collector reads the same SQLite database and connects back to the MMS server exposed by the bike.

## Automatic registration from the MMS server

`server/server_unifield_io/server_example_basic_io.c` sends an IPv4 HTTP registration request when the MMS server starts. Configure:

```bash
export MOVEUFF_BIKE_UUID=11111111-1111-4111-8111-111111111111
export MOVEUFF_BIKE_HOST=127.0.0.1
export MOVEUFF_GATEWAY_HOST=127.0.0.1
export MOVEUFF_GATEWAY_PORT=8000
export MOVEUFF_REGISTRATION_TOKEN=dev-token
```

Use IPv4 literals for `MOVEUFF_BIKE_HOST` and `MOVEUFF_GATEWAY_HOST`.
