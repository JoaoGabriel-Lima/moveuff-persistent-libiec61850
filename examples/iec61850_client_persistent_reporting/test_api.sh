#!/bin/bash

echo "=== Testing HTTP API ==="
echo ""
echo "Waiting 3 seconds for the server to start..."
sleep 3
echo ""
echo "Making request to http://localhost:8080/api/bikes"
echo ""
curl -X GET http://localhost:8080/api/bikes
echo ""
echo ""
echo "=== Test completed ==="
