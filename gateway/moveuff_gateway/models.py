from __future__ import annotations

from typing import Any, Literal
from uuid import UUID

from pydantic import BaseModel, Field


class BikeRegisterRequest(BaseModel):
    uuid: UUID
    host: str = Field(min_length=1, max_length=255)
    port: int = Field(ge=1, le=65535)
    metadata: dict[str, Any] = Field(default_factory=dict)


class BikeResponse(BaseModel):
    uuid: UUID
    host: str
    port: int
    metadata: dict[str, Any]
    status: str
    registered_at: str
    updated_at: str
    last_seen_at: str | None = None


class BikeDetailResponse(BikeResponse):
    state: dict[str, Any] | None = None
    state_updated_at: str | None = None


class ReportResponse(BaseModel):
    id: int
    received_at: str
    report: dict[str, Any]


CommandTarget = Literal[
    "lantern",
    "motor",
    "alarm",
    "hydrogen_cell",
    "hydrogen_tank",
    "battery_lock",
]


class DbposCommandRequest(BaseModel):
    target: CommandTarget
    value: Literal[0, 40] = Field(description="Dbpos command value: 40 turns on, 0 turns off.")


class CommandResponse(BaseModel):
    id: int
    bike_uuid: UUID
    command: str
    target: str
    object_reference: str
    value: int
    status: str
    error: str | None = None
    created_at: str
    updated_at: str
    executed_at: str | None = None
