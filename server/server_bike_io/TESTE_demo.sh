#!/bin/bash

# Exemplo de uso do sistema de logging IEC 61850

echo "=== Demonstração do Sistema de Logging IEC 61850 ==="
echo

# Executar servidor por 30 segundos para gerar dados
echo "1. Executando servidor por 30 segundos para gerar dados..."
timeout 30 ./server_example_basic_io > server_output.log 2>&1 &
SERVER_PID=$!

# Aguardar o servidor inicializar
sleep 2
echo "   Servidor iniciado (PID: $SERVER_PID)"

# Aguardar coletar dados
echo "   Coletando dados por 30 segundos..."
sleep 28

# Parar servidor
kill $SERVER_PID 2>/dev/null
wait $SERVER_PID 2>/dev/null
echo "   Servidor parado"

echo
echo "2. Analisando dados coletados:"
echo

# Estatísticas para todos os canais analógicos
echo "=== Estatísticas dos Canais Analógicos ==="
for channel in AnIn1 AnIn2 AnIn3 AnIn4; do
    echo "--- Canal $channel ---"
    ./data_query_tool stats $channel 1
    echo
done

# Verificar se há dados digitais (caso alguém tenha enviado comandos)
echo "=== Verificando Comandos Digitais ==="
for channel in SPCSO1 SPCSO2 SPCSO3 SPCSO4; do
    echo "--- Canal $channel ---"
    ./data_query_tool stats $channel 1
    echo
done

echo "3. Exemplo de consulta detalhada:"
echo "=== Últimos 10 registros do AnIn1 ==="
./data_query_tool query AnIn1 1 | tail -15

echo
echo "4. Informações do banco de dados:"
echo "Tamanho do banco: $(ls -lh bike_data.db | awk '{print $5}')"

# Mostrar contagem de registros usando SQLite diretamente
if command -v sqlite3 >/dev/null 2>&1; then
    echo "Registros analógicos: $(sqlite3 bike_data.db "SELECT COUNT(*) FROM analog_data;")"
    echo "Registros digitais: $(sqlite3 bike_data.db "SELECT COUNT(*) FROM digital_data;")"
fi

echo
echo "=== Demonstração concluída! ==="
echo "Para testar comandos digitais, conecte um cliente MMS e envie comandos para os SPCSOs."
