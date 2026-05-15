from __future__ import annotations

from contextlib import asynccontextmanager
from typing import Annotated
from uuid import UUID

from fastapi import Depends, FastAPI, Header, HTTPException, Query

from .config import Settings
from .database import GatewayDatabase
from .models import BikeDetailResponse, BikeRegisterRequest, BikeResponse, ReportResponse
from .security import require_bearer_token


def create_app(settings: Settings | None = None) -> FastAPI:
    active_settings = settings or Settings.from_env()
    database = GatewayDatabase(active_settings.database_path, active_settings.report_retention)

    @asynccontextmanager
    async def lifespan(app: FastAPI):
        database.initialize()
        yield

    app = FastAPI(title="MoveUFF Bike Gateway", version="0.1.0", lifespan=lifespan)
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

    return app


app = create_app()
