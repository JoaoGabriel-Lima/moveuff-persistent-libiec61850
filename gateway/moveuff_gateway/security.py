from __future__ import annotations

from fastapi import Header, HTTPException, status


def require_bearer_token(expected_token: str, authorization: str | None = Header(default=None)) -> None:
    if authorization is None:
        raise HTTPException(status_code=status.HTTP_401_UNAUTHORIZED, detail="Missing bearer token")

    scheme, _, token = authorization.partition(" ")
    if scheme.lower() != "bearer" or token != expected_token:
        raise HTTPException(status_code=status.HTTP_403_FORBIDDEN, detail="Invalid bearer token")

