# MoveUFF Gateway

FastAPI service for registering bike MMS servers and exposing their latest telemetry.

## Run

```bash
uv sync --extra test
MOVEUFF_REGISTRATION_TOKEN=dev-token uv run uvicorn moveuff_gateway.app:app --reload
```

OpenAPI JSON is available at `http://127.0.0.1:8000/docs/json`, and the interactive docs remain available at `/docs`.

## Register a bike

```bash
curl -X POST http://127.0.0.1:8000/api/v1/bikes/register \
  -H 'Authorization: Bearer dev-token' \
  -H 'Content-Type: application/json' \
  -d '{"uuid":"11111111-1111-4111-8111-111111111111","host":"192.168.1.50","port":102,"metadata":{"name":"bike-1"}}'
```

The collector reads the same SQLite database and connects back to the MMS server exposed by the bike.
It retries MMS connections every 10 seconds forever. When a bike disconnects, the API keeps the last known state and exposes the bike status as `disconnected`; after reconnect, the collector reads a fresh dataset snapshot and requests a GI report so responses update again.

## Send a Dbpos command

The API can queue a Dbpos command for the collector to execute through its active MMS client connection. Use `value: 40` to turn a DPC target on and `value: 0` to turn it off.

```bash
curl -X POST http://127.0.0.1:8000/api/v1/bikes/11111111-1111-4111-8111-111111111111/commands/dbpos \
  -H 'Authorization: Bearer dev-token' \
  -H 'Content-Type: application/json' \
  -d '{"target":"battery_lock","value":40}'
```

Targets are `lantern`, `motor`, `alarm`, `hydrogen_cell`, `hydrogen_tank`, and `battery_lock`.
The response includes a command `id`; check it with `GET /api/v1/commands/{id}`. Status values are `pending`, `running`, `succeeded`, or `failed`.

## Automatic registration from the MMS server

`server/server_unifield_io/server_example_basic_io.c` sends an IPv4 HTTP registration request when the MMS server starts and retries every 10 seconds until the gateway accepts it. Configure `server/server_unifield_io/moveuff_gateway.conf`:

```ini
BIKE_UUID=11111111-1111-4111-8111-111111111111
BIKE_HOST=127.0.0.1
GATEWAY_HOST=127.0.0.1
GATEWAY_PORT=8000
REGISTRATION_TOKEN=dev-token
BIKE_LABEL=bike-1
```

You can also pass a custom config path as the second argument: `sudo ./server_example_basic_io 102 /path/to/moveuff_gateway.conf`.
The existing `MOVEUFF_BIKE_UUID`, `MOVEUFF_BIKE_HOST`, `MOVEUFF_GATEWAY_HOST`, `MOVEUFF_GATEWAY_PORT`, `MOVEUFF_REGISTRATION_TOKEN`, and `MOVEUFF_BIKE_LABEL` environment variables still override the config file.

Use IPv4 literals for `BIKE_HOST` and `GATEWAY_HOST`.
