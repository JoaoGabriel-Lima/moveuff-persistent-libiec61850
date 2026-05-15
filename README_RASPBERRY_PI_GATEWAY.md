# Gateway Setup on a Fresh Raspberry Pi OS

This guide is for a brand-new Raspberry Pi running Raspberry Pi OS (first boot), to run the MoveUFF gateway end-to-end.

## 1) Update the Raspberry Pi

```bash
sudo apt update
sudo apt upgrade -y
```

## 2) Install system dependencies

```bash
sudo apt install -y git build-essential cmake libsqlite3-dev pkg-config curl python3 python3-venv python3-pip
```

## 3) Clone the project

```bash
cd ~
git clone https://github.com/JoaoGabriel-Lima/moveuff-persistent-libiec61850.git
cd moveuff-persistent-libiec61850
```

## 4) Build `libiec61850` locally (required for the C collector)

```bash
mkdir -p build
cd build
cmake ..
make -j"$(nproc)"
sudo make install
sudo ldconfig
cd ..
```

## 5) Install `uv` (for FastAPI app environment)

```bash
curl -LsSf https://astral.sh/uv/install.sh | sh
export PATH="$HOME/.local/bin:$PATH"
uv --version
```

## 6) Start the FastAPI gateway

```bash
cd ~/moveuff-persistent-libiec61850/gateway
uv sync --extra test
export MOVEUFF_REGISTRATION_TOKEN=dev-token
uv run uvicorn moveuff_gateway.app:app --host 0.0.0.0 --port 8000
```

Keep this terminal open.

## 7) Start the MMS collector (second terminal)

```bash
cd ~/moveuff-persistent-libiec61850/gateway/collector
make
./moveuff_mms_collector ../gateway.db
```

## 8) Validate the gateway is alive (third terminal)

```bash
curl http://127.0.0.1:8000/health
```

Expected output:

```json
{"status":"ok"}
```

## 9) Register one bike manually (test)

```bash
curl -X POST http://127.0.0.1:8000/api/v1/bikes/register \
  -H 'Authorization: Bearer dev-token' \
  -H 'Content-Type: application/json' \
  -d '{"uuid":"11111111-1111-4111-8111-111111111111","host":"192.168.1.50","port":102,"metadata":{"name":"bike-1"}}'
```

Then list bikes:

```bash
curl http://127.0.0.1:8000/api/v1/bikes
```

## IPv4 note for local tests

This setup is IPv4-friendly. Use IPv4 literals like:

- `127.0.0.1` for local same-device tests
- `192.168.x.x` for LAN tests

Use these for gateway and bike host addresses.

## Optional next step

Create `systemd` services for FastAPI and the MMS collector so both start automatically on boot.
