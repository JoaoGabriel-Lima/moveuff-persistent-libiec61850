from __future__ import annotations

from contextlib import asynccontextmanager
from typing import Annotated
from uuid import UUID

from fastapi import Depends, FastAPI, Header, HTTPException, Query
from fastapi.middleware.cors import CORSMiddleware

from .config import Settings
from .database import GatewayDatabase
from .models import BikeDetailResponse, BikeRegisterRequest, BikeResponse, CommandResponse, DbposCommandRequest, ReportResponse
from .security import require_bearer_token


DBPOS_COMMAND_TARGETS = {
    "lantern": "MoveUFF_GeralB1EBK/LANTXSWI1.Pos",
    "motor": "MoveUFF_GeralB1EBK/MOTXSWI1.Pos",
    "alarm": "MoveUFF_GeralB1EBK/ALMXSWI1.Pos",
    "hydrogen_cell": "MoveUFF_GeralB1HYD/CELXSWI1.Pos",
    "hydrogen_tank": "MoveUFF_GeralB1HYD/TNKXSWI1.Pos",
    "battery_lock": "MoveUFF_GeralB1STG/XSWI1.Pos",
}


def create_app(settings: Settings | None = None) -> FastAPI:
    active_settings = settings or Settings.from_env()
    database = GatewayDatabase(active_settings.database_path, active_settings.report_retention)

    @asynccontextmanager
    async def lifespan(app: FastAPI):
        database.initialize()
        yield

    app = FastAPI(
        title="MoveUFF Bike Gateway",
        version="0.1.0",
        lifespan=lifespan,
        openapi_url="/docs/json",
    )
    app.add_middleware(
        CORSMiddleware,
        allow_origins=list(active_settings.cors_origins),
        allow_credentials=True,
        allow_methods=["*"],
        allow_headers=["*"],
    )
    app.state.database = database
    app.state.settings = active_settings

    def require_registration_token(authorization: Annotated[str | None, Header()] = None) -> None:
        return require_bearer_token(active_settings.registration_token, authorization)

    @app.get("/health")
    def health() -> dict[str, str]:
        return {"status": "ok"}

    @app.post("/api/v1/bikes/register", response_model=BikeResponse)
    def register_bike(
        request: BikeRegisterRequest,
        _: None = Depends(require_registration_token),
    ) -> dict:
        return database.register_bike(str(request.uuid), request.host, request.port, request.metadata)

    @app.get("/api/v1/bikes", response_model=list[BikeResponse])
    def list_bikes() -> list[dict]:
        return database.list_bikes()

    @app.get("/api/v1/bikes/{bike_uuid}", response_model=BikeDetailResponse)
    def get_bike(bike_uuid: UUID) -> dict:
        bike = database.get_bike(str(bike_uuid))
        if bike is None:
            raise HTTPException(status_code=404, detail="Bike not found")

        state = database.get_state(str(bike_uuid))
        if state is not None:
            bike["state"] = state["state"]
            bike["state_updated_at"] = state["updated_at"]
        else:
            bike["state"] = None
            bike["state_updated_at"] = None

        return bike

    @app.get("/api/v1/bikes/{bike_uuid}/reports", response_model=list[ReportResponse])
    def list_reports(bike_uuid: UUID, limit: int = Query(default=100, ge=1, le=500)) -> list[dict]:
        if database.get_bike(str(bike_uuid)) is None:
            raise HTTPException(status_code=404, detail="Bike not found")
        return database.list_reports(str(bike_uuid), limit)

    @app.post("/api/v1/bikes/{bike_uuid}/commands/dbpos", response_model=CommandResponse, status_code=202)
    def enqueue_dbpos_command(
        bike_uuid: UUID,
        request: DbposCommandRequest,
        _: None = Depends(require_registration_token),
    ) -> dict:
        if database.get_bike(str(bike_uuid)) is None:
            raise HTTPException(status_code=404, detail="Bike not found")

        return database.create_command(
            str(bike_uuid),
            "dbpos",
            request.target,
            DBPOS_COMMAND_TARGETS[request.target],
            request.value,
        )

    @app.get("/api/v1/commands/{command_id}", response_model=CommandResponse)
    def get_command(command_id: int) -> dict:
        command = database.get_command(command_id)
        if command is None:
            raise HTTPException(status_code=404, detail="Command not found")
        return command

    return app


app = create_app()
