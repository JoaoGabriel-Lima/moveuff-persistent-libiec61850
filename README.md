# README moveuff-persistent-libiec61850
Pasta de origem: cd/moveuff-persistent-libiec61850
Pasta do usuário: cd ~

1- 
Atualiza o sistema
```sudo apt update -y```

1.1- 
Instala ferramentas essenciais (gcc, make, git) e o SQLite ```sudo apt install build-essential git cmake libsqlite3-dev -y```


2- 
cd ~

Clona o WiringOP (Orange PI) ```git clone https://github.com/orangepi-xunlong/wiringOP.git```
cd /WiringOP
Compila e instala ```./build```


3- 
cd ~ 

Baixa o repositório
```git clone https://github.com/JoaoGabriel-Lima/moveuff-persistent-libiec61850.git```

Entra na pasta (Origem)
```cd moveuff-persistent-libiec61850```

Limpa e Compila
```make clean && make```

Instala a biblioteca
```sudo make install```

Atualiza o cache para o Linux encontrar a biblioteca nova
```sudo ldconfig```


4- 
Vai para a pasta do exemplo
```cd server/server_bike_original_io```

Compila o seu servidor
```make clean && make```

Roda com permissão de administrador

```sudo ./server_example_basic_io```

## Gateway MMS/FastAPI das bicicletas

A branch agora inclui um gateway em `gateway/` para registrar bicicletas, coletar reports MMS e expor o estado por HTTP.

### Conceitos IEC 61850 usados

- `DataSet`: lista nomeada de atributos IEC 61850 que devem ser enviados juntos. No servidor unificado foi criado o `B1EBK/LLN0.BikeTelemetry`, com telemetria essencial da bicicleta: bateria, hidrogenio, GPS e estados dos atuadores.
- `ReportControl`: configuracao do servidor que diz como um `DataSet` vira report. No servidor unificado foi criado o `BikeTelemetryRCB`, unbuffered, com gatilhos `dchg`, `qchg` e `period`.
- `RCB` (`Report Control Block`): e o objeto MMS/IEC 61850 que o cliente escreve para habilitar reports. Sem um RCB valido, o cliente nao recebe report MMS; ele teria que fazer polling, o que nao e a proposta deste gateway.

### Rodar a API

```bash
cd gateway
uv sync --extra test
MOVEUFF_REGISTRATION_TOKEN=dev-token uv run uvicorn moveuff_gateway.app:app --reload
```

### Registro automatico de uma bicicleta

O servidor unificado tenta se registrar automaticamente no gateway quando a porta MMS abre. Configure as variaveis antes de iniciar o servidor:

```bash
export MOVEUFF_BIKE_UUID=11111111-1111-4111-8111-111111111111
export MOVEUFF_BIKE_HOST=127.0.0.1
export MOVEUFF_GATEWAY_HOST=127.0.0.1
export MOVEUFF_GATEWAY_PORT=8000
export MOVEUFF_REGISTRATION_TOKEN=dev-token

cd server/server_unifield_io
sudo -E ./server_example_basic_io 102
```

Todos os enderecos usados pelo registro automatico sao IPv4. Para teste local, `127.0.0.1` funciona quando API, coletor e servidor estao na mesma maquina. Em rede, use o IPv4 alcancavel da bike em `MOVEUFF_BIKE_HOST` e o IPv4 do gateway em `MOVEUFF_GATEWAY_HOST`.

Tambem e possivel registrar manualmente:

```bash
curl -X POST http://127.0.0.1:8000/api/v1/bikes/register \
  -H 'Authorization: Bearer dev-token' \
  -H 'Content-Type: application/json' \
  -d '{"uuid":"11111111-1111-4111-8111-111111111111","host":"192.168.1.50","port":102,"metadata":{"name":"bike-1"}}'
```

### Rodar o coletor MMS

O coletor C usa a mesma base SQLite da FastAPI, abre uma conexao MMS para cada bicicleta registrada e habilita `MoveUFF_GeralB1EBK/LLN0.RP.BikeTelemetryRCB01`.

```bash
cd gateway/collector
make
./moveuff_mms_collector ../gateway.db
```

Limite inicial: ate 20 bicicletas registradas, com uma thread por bicicleta.
