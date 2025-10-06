#!/bin/bash

# Script de demonstração do cliente IEC 61850 com reporting persistente

echo "=== Demonstração Cliente IEC 61850 Persistente ==="
echo ""

# Verificar se o servidor está rodando
echo "1. Verificando se o servidor está disponível..."
if ! pgrep -f "server_example_basic_io" > /dev/null; then
    echo "   ⚠️  Servidor não está rodando!"
    echo "   Por favor, inicie o servidor em outro terminal:"
    echo "   cd ../server_example_basic_io && ./server_example_basic_io"
    echo ""
    read -p "Pressione ENTER quando o servidor estiver rodando..."
fi

echo "   ✓ Servidor detectado ou pronto"
echo ""

# Limpar banco de dados anterior (opcional)
echo "2. Preparando ambiente..."
if [ -f "client_data.db" ]; then
    echo "   Encontrado banco de dados anterior. Deseja manter?"
    read -p "   (s)im ou (n)ão [n]: " keep_db
    if [ "$keep_db" != "s" ]; then
        rm -f client_data.db*
        echo "   ✓ Banco de dados limpo"
    else
        echo "   ✓ Mantendo banco de dados existente"
    fi
else
    echo "   ✓ Ambiente limpo"
fi
echo ""

# Executar cliente
echo "3. Iniciando cliente..."
echo "   O cliente irá:"
echo "   - Conectar ao servidor localhost:102"
echo "   - Configurar reporting automático"
echo "   - Receber dados em tempo real (push)"
echo "   - Salvar tudo em client_data.db"
echo ""
echo "   Pressione Ctrl+C para encerrar"
echo ""
sleep 2

./client_persistent_reporting

echo ""
echo "=== Cliente encerrado ==="
echo ""

# Mostrar estatísticas
if [ -f "client_data.db" ]; then
    echo "4. Estatísticas dos dados recebidos:"
    echo ""
    
    analog_count=$(sqlite3 client_data.db "SELECT COUNT(*) FROM analog_data;" 2>/dev/null || echo "0")
    digital_count=$(sqlite3 client_data.db "SELECT COUNT(*) FROM digital_data;" 2>/dev/null || echo "0")
    
    echo "   📊 Registros analógicos: $analog_count"
    echo "   📊 Registros digitais: $digital_count"
    echo ""
    
    if [ "$analog_count" -gt "0" ]; then
        echo "   Últimos 5 registros analógicos:"
        sqlite3 client_data.db "SELECT datetime(timestamp/1000, 'unixepoch', 'localtime') as time, channel, printf('%.3f', value) as value FROM analog_data ORDER BY timestamp DESC LIMIT 5;" -header -column 2>/dev/null
    fi
    
    echo ""
    echo "   💾 Banco de dados salvo em: client_data.db"
    echo ""
fi

echo "Demonstração concluída!"