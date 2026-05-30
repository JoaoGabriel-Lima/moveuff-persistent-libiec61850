#include "iec61850_server.h"
#include "hal_thread.h"
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h> 
#include <wiringSerial.h>
#include <string.h>
#include <wiringPi.h>
#include <sys/socket.h>
#include <arpa/inet.h>

// ================= PINOS FÍSICOS ==============================

#define RELAY_MOT_PIN   24  // wPi 24 = Pino Físico 12 (Motor)
#define RELAY_ALM_PIN   9   // wPi 9 = Pino Físico 16 (Alarme)
#define RELAY_XSWI_PIN  10  // wPi 10 = Pino Físico 18 (Trava da Bateria)
#define RELAY_CEL_PIN   21  // wPi 21 = Pino Físico 31 (Célula)
#define RELAY_TNK_PIN   8   // wPi 8  = Pino Físico 15 (Tanque)
#define RELAY_LANT_PIN  23  // wPi 23 = Pino Físico 22 (Lanterna)
#define RELAY_VLV_PIN       // (a definir) wPi  = Pino Físico 10 (Válvula H2)

// ==============================================================

#include "static_model.h"

// Variáveis globals de controle de estado do servidor e conexões
static int running = 0;
static IedServer iedServer = NULL;
static int activeConnections = 0;

void sigint_handler(int signalId) { running = 0; }

#define LOG_PRINT(...) fprintf(stderr, __VA_ARGS__)

//Caso inicie a conexão com um cliente externo, este void de conexão roda.
static void connectionHandler(IedServer self, ClientConnection connection, bool connected, void* parameter) {
    const char* clientIP = ClientConnection_getPeerAddress(connection);
    if (connected) {
        activeConnections++;
        if (activeConnections == 1) {
            LOG_PRINT("\n==================================================\n");
            LOG_PRINT("[SISTEMA] >>> CLIENTE CONECTADO <<<\n");
            LOG_PRINT("   >> IP: %s\n", clientIP);
            LOG_PRINT("==================================================\n");
        }
    } else {
        if (activeConnections > 0) activeConnections--;
        if (activeConnections == 0) {
            LOG_PRINT("\n[SISTEMA] Cliente Desconectado (%s)\n\n", clientIP);
        }
    }
}

//Varre os parâmetros para saber quais foram ativados.
static CheckHandlerResult checkHandler(ControlAction action, void* parameter, MmsValue* ctlVal, bool test, bool interlockCheck) { 
    if (parameter == IEDMODEL_B1EBK_LANTXSWI1_Pos || 
        parameter == IEDMODEL_B1EBK_MOTXSWI1_Pos || 
        parameter == IEDMODEL_B1EBK_ALMXSWI1_Pos || 
        parameter == IEDMODEL_B1HYD_CELXSWI1_Pos ||
        parameter == IEDMODEL_B1HYD_TNKXSWI1_Pos ||
        parameter == IEDMODEL_B1STG_XSWI1_Pos)
        return CONTROL_ACCEPTED;
    return CONTROL_OBJECT_UNDEFINED;
}

static ControlHandlerResult controlHandlerForBinaryOutput(ControlAction action, void* parameter, MmsValue* value, bool test) {
    uint64_t timestamp = Hal_getTimeInMs(); //Marca o tempo exato.
    int ctlNum = ControlAction_getCtlNum(action); // Recupera o número de sequência do comando MMS
    ClientConnection clientCon = ControlAction_getClientConnection(action); //Audita a rede e registra o IP do operador.
    const char* clientIP = (clientCon) ? ClientConnection_getPeerAddress(clientCon) : "Desconhecido";// Caso contrário, desconhecido.

    // Verifica qual Nó Lógico do modelo foi o alvo do acionamento
    if (parameter == IEDMODEL_B1EBK_LANTXSWI1_Pos || 
        parameter == IEDMODEL_B1EBK_MOTXSWI1_Pos || 
        parameter == IEDMODEL_B1EBK_ALMXSWI1_Pos || 
        parameter == IEDMODEL_B1HYD_CELXSWI1_Pos ||
        parameter == IEDMODEL_B1HYD_TNKXSWI1_Pos ||
        parameter == IEDMODEL_B1STG_XSWI1_Pos)
    {
        bool state = false;
        
        // Desencapsulamento (Unpacking) do valor de controle contido no pacote MMS
        MmsValue* ctlVal = value;
        if (MmsValue_getType(value) == MMS_STRUCTURE) { //Verifica se o dado recebido está envelopado como uma Estrutura MMS (definida pela Norma)
            ctlVal = MmsValue_getElement(value, 0); // Abre o pacote e pega o primeiro item (zero)
        }

    // Garante a interoperabilidade (''O CONVERSOR''): permite que o controlador receba comandos de diferentes fabricantes (Elipse, Siemens, ABB, etc.)
    if (ctlVal != NULL) { // Validação de segurança: impede um Segmentation Fault caso o pacote de rede venha nulo
        
        if (MmsValue_getType(ctlVal) == MMS_BIT_STRING) { // Verifica se o comando veio no padrão estrito da norma (Cadeia de bits)
            int val = MmsValue_getBitStringAsInteger(ctlVal); // Converte a cadeia de bits MMS em um número inteiro nativo do C
            state = (val == 2); // Decodifica o padrão Dbpos (Dupla Posição): Valor 2 significa LIGAR (true), outro valor desliga (false)
            
        } else if (MmsValue_getType(ctlVal) == MMS_BOOLEAN) { // Plano de contingência: caso o SCADA envie um booleano simples
            state = MmsValue_getBoolean(ctlVal); // Extrai o valor lógico direto (true/false) do booleano MMS
            
        } else if (MmsValue_getType(ctlVal) == MMS_INTEGER) { // Plano de contingência: caso o SCADA envie um número inteiro comum
            state = (MmsValue_toInt32(ctlVal) > 0); // Converte para booleano: qualquer valor maior que 0 liga (true), 0 desliga (false)
        }
    }

        LOG_PRINT("--------------------------------------------------\n");
        LOG_PRINT("[COMANDO] Recebido de: %s\n", clientIP);
        
        // MUDANÇA: Inversão de estado (Active-LOW: Ligar = LOW, Desligar = HIGH)
        if (parameter == IEDMODEL_B1EBK_LANTXSWI1_Pos) { //O Ponteiro "Parameter" indica qual nó lógico foi acionado
            digitalWrite(RELAY_LANT_PIN, state ? LOW : HIGH); //Envia o sinal de 0V ou 3.3V p/ pin físico da Orange
            LOG_PRINT("   >> Acao:     LANTXSWI1 (Lanterna) %s\n", state ? "LIGADA" : "DESLIGADA"); //Report Terminal
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos_t, timestamp); //Atualiza o atributo "tempo"
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos_stVal, value);//Atualiza atributo "valor"
        } 
        else if (parameter == IEDMODEL_B1EBK_MOTXSWI1_Pos) {
            digitalWrite(RELAY_MOT_PIN, state ? LOW : HIGH); 
            LOG_PRINT("   >> Acao:     MOTXSWI1 (Motor) %s\n", state ? "LIGADO" : "DESLIGADO");
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos_t, timestamp);
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos_stVal, value);
        }
        else if (parameter == IEDMODEL_B1EBK_ALMXSWI1_Pos) {
            digitalWrite(RELAY_ALM_PIN, state ? LOW : HIGH); 
            LOG_PRINT("   >> Acao:     ALMXSWI1 (Alarme) %s\n", state ? "LIGADO" : "DESLIGADO");
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos_t, timestamp);
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos_stVal, value);
        }
        else if (parameter == IEDMODEL_B1HYD_CELXSWI1_Pos) {
            digitalWrite(RELAY_CEL_PIN, state ? LOW : HIGH); 
            LOG_PRINT("   >> Acao:     CELXSWI1 (Celula) %s\n", state ? "LIGADA" : "DESLIGADA");
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1HYD_CELXSWI1_Pos_t, timestamp);
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1HYD_CELXSWI1_Pos_stVal, value);
        }
        else if (parameter == IEDMODEL_B1HYD_TNKXSWI1_Pos) {
            digitalWrite(RELAY_TNK_PIN, state ? LOW : HIGH); 
            LOG_PRINT("   >> Acao:     TNKXSWI1 (Tanque) %s\n", state ? "LIGADO" : "DESLIGADO");
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1HYD_TNKXSWI1_Pos_t, timestamp);
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1HYD_TNKXSWI1_Pos_stVal, value);
        }
        else if (parameter == IEDMODEL_B1STG_XSWI1_Pos) {
            digitalWrite(RELAY_XSWI_PIN, state ? LOW : HIGH); 
            LOG_PRINT("   >> Acao:     XSWI1 (Trava) %s\n", state ? "LIGADA" : "DESLIGADA");
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1STG_XSWI1_Pos_t, timestamp);
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1STG_XSWI1_Pos_stVal, value);
        }
        LOG_PRINT("--------------------------------------------------\n");
    } else {
        return CONTROL_RESULT_FAILED;
    }
    return CONTROL_RESULT_OK;
}

static MmsDataAccessError writeAccessHandler(DataAttribute* dataAttribute, MmsValue* value, ClientConnection connection, void* parameter) {
    // Converte o valor de configuração MMS recebido para o tipo enumerado ControlModel do C
    ControlModel ctlModelVal = (ControlModel) MmsValue_toInt32(value);
    // Firewall normativo: o firmware da e-bike só homologa os modos Comando Direto ou Apenas Status (Bloqueio)
    if ((ctlModelVal == CONTROL_MODEL_STATUS_ONLY) || (ctlModelVal == CONTROL_MODEL_DIRECT_NORMAL)) {

        // Roteamento: Identifica qual atributo de ctlModel foi alvo e atualiza dinamicamente na memória RAM
        if (dataAttribute == IEDMODEL_B1EBK_LANTXSWI1_Pos_ctlModel) IedServer_updateCtlModel(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos, ctlModelVal); //Verifica se o alvo da alteração é o atributo de controle da Lanterna (nesse caso), se for, atualiza na RAM.
        else if (dataAttribute == IEDMODEL_B1EBK_MOTXSWI1_Pos_ctlModel) IedServer_updateCtlModel(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos, ctlModelVal);
        else if (dataAttribute == IEDMODEL_B1EBK_ALMXSWI1_Pos_ctlModel) IedServer_updateCtlModel(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos, ctlModelVal);
        else if (dataAttribute == IEDMODEL_B1HYD_CELXSWI1_Pos_ctlModel) IedServer_updateCtlModel(iedServer, IEDMODEL_B1HYD_CELXSWI1_Pos, ctlModelVal);
        else if (dataAttribute == IEDMODEL_B1HYD_TNKXSWI1_Pos_ctlModel) IedServer_updateCtlModel(iedServer, IEDMODEL_B1HYD_TNKXSWI1_Pos, ctlModelVal);
        else if (dataAttribute == IEDMODEL_B1STG_XSWI1_Pos_ctlModel) IedServer_updateCtlModel(iedServer, IEDMODEL_B1STG_XSWI1_Pos, ctlModelVal);
        return DATA_ACCESS_ERROR_SUCCESS; //Finaliza o bloco de sucesso e responde positivamente ao cliente na rede.
    }

    // Saída de erro: executada caso o SCADA tente injetar um modelo de controle inválido ou não suportado
    return DATA_ACCESS_ERROR_OBJECT_VALUE_INVALID; 
}

//GPS
static float nmea_to_decimal(const char* nmea_coord, char direction) {
    if (!nmea_coord || strlen(nmea_coord) < 4) return 0.0f;
    const char* dot = strchr(nmea_coord, '.');
    if (!dot) return 0.0f;
    int deg_len = (int)(dot - nmea_coord) - 2;
    if (deg_len <= 0 || deg_len > 3) return 0.0f;
    char deg_str[4] = {0};
    strncpy(deg_str, nmea_coord, deg_len);
    float degrees = (float)atoi(deg_str);
    float minutes = atof(nmea_coord + deg_len);
    float decimal = degrees + (minutes / 60.0f);
    if (direction == 'S' || direction == 'W') decimal = -decimal;
    return decimal;
}

static int parse_gprmc(char* sentence, float* lat_out, float* lon_out) {
    char* asterisk = strrchr(sentence, '*');
    if (asterisk) {
        uint8_t checksum = 0;
        for (char* p = sentence + 1; p < asterisk; p++) checksum ^= (uint8_t)(*p);
        uint8_t received = (uint8_t)strtol(asterisk + 1, NULL, 16);
        if (checksum != received) return 0;
        *asterisk = '\0';
    }
    char* token = strtok(sentence, ",");
    int field = 0;
    char status = 'V';
    char lat_str[20] = {0}, lon_str[20] = {0}, ns = 0, ew = 0;
    while (token != NULL) {
        switch (field) {
            case 2: status = token[0];             break;
            case 3: strncpy(lat_str, token, 19);   break;
            case 4: ns = token[0];                 break;
            case 5: strncpy(lon_str, token, 19);   break;
            case 6: ew = token[0];                 break;
        }
        token = strtok(NULL, ",");
        field++;
    }
    if (status != 'A') return 0;
    *lat_out = nmea_to_decimal(lat_str, ns);
    *lon_out = nmea_to_decimal(lon_str, ew);
    return 1;
}

void* gps_thread(void* arg) {
    int fd = serialOpen("/dev/ttyS5", 9600);
    if (fd < 0) {
        LOG_PRINT("[GPS] Falha ao abrir /dev/ttyS5\n");
        return NULL;
    }
    LOG_PRINT("[GPS] Serial aberta. Aguardando fix de satelites...\n");
    char buffer[256];
    int pos = 0, fix_count = 0;

    while (running) {
        while (serialDataAvail(fd) > 0) {
            char c = (char)serialGetchar(fd);
            if (c == '\n' || c == '\r') {
                if (pos > 0) {
                    buffer[pos] = '\0';
                    if (strncmp(buffer, "$GPRMC", 6) == 0 ||
                        strncmp(buffer, "$GNRMC", 6) == 0) {
                        float lat = 0.0f, lon = 0.0f;
                        if (parse_gprmc(buffer, &lat, &lon)) {
                            uint64_t ts = Hal_getTimeInMs();
                            IedServer_lockDataModel(iedServer);
                            IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1EBK_TLOC1_GeoLoc_latitude, lat);
                            IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1EBK_TLOC1_GeoLoc_longitude, lon);
                            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_TLOC1_GeoLoc_t, ts);
                            IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_B1EBK_TLOC1_NavFai_stVal, false);
                            IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_B1EBK_TLOC1_SatAvl_stVal, true);
                            IedServer_unlockDataModel(iedServer);
                            LOG_PRINT("[TLOC1] #%04d | Lat: %+.6f | Lon: %+.6f\n", ++fix_count, lat, lon);
                        } else {
                            IedServer_lockDataModel(iedServer);
                            IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_B1EBK_TLOC1_NavFai_stVal, true);
                            IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_B1EBK_TLOC1_SatAvl_stVal, false);
                            IedServer_unlockDataModel(iedServer);
                        }
                    }
                    pos = 0;
                }
            } else {
                if (c == '$') pos = 0;
                if (pos < 255) buffer[pos++] = c;
            }
        }
        Thread_sleep(100);
    }
    serialClose(fd);
    LOG_PRINT("[GPS] Thread encerrada.\n");
    return NULL;
}

//Thread para ler os sensores, padrão da porta 2026
void* sensor_thread(void* arg) {
    struct sockaddr_in server_address;
    char buffer[2048] = {0};

    LOG_PRINT("[STATUS] Thread de Sensores iniciada (Modo CLIENTE TCP — Consumindo Instrumentação)...\n");

    while (running) {
        // 1. Cria o socket em modo cliente
        int sock_fd = socket(AF_INET, SOCK_STREAM, 0);
        if (sock_fd < 0) {
            LOG_PRINT("[ERRO] Falha ao criar socket cliente!\n");
            Thread_sleep(2000);
            continue;
        }

        // 2. Configura o destino para apontar para a instrumentação local
        server_address.sin_family = AF_INET;
        server_address.sin_port = htons(2026); 
        server_address.sin_addr.s_addr = inet_addr("127.0.0.1"); // Loopback interno seguro da placa

        LOG_PRINT("[SOCKET] Tentando conectar ao fluxo da instrumentação (127.0.0.1)...\n");
        
        // 3. Tenta realizar o aperto de mão (connect) no servidor da instrumentação
        if (connect(sock_fd, (struct sockaddr *)&server_address, sizeof(server_address)) < 0) {
            LOG_PRINT("[SOCKET] Servidor de instrumentação offline. Retentando em 2 segundos...\n");
            close(sock_fd);
            Thread_sleep(2000);
            continue;
        }

        LOG_PRINT("[SOCKET] Conectado com sucesso! Sugando telemetria da e-Bike...\n");

        // 4. Laço de captura contínua enquanto o cano de dados estiver aberto
        while (running) {
            memset(buffer, 0, sizeof(buffer));
            int valread = read(sock_fd, buffer, sizeof(buffer) - 1);

            // Se o servidor fechar ou der erro de leitura, quebra o laço para reconectar
            if (valread <= 0) {
                LOG_PRINT("[SOCKET] Conexão encerrada pelo servidor de instrumentação. Reiniciando busca...\n");
                break;
            }
            
            buffer[valread] = '\0'; 

            // FILTRO ESTRUTURAL: Valida se o texto contém as chaves do MoveUFF
            if (strstr(buffer, "Bateria_Principal") == NULL && strstr(buffer, "Hidrogenio") == NULL) {
                continue; 
            }

            float tensao = 0.0, corrente = 0.0, soc = 0.0, tensaohyd = 0.0, pressao = 0.0, correntehyd = 0.0, nvl_hyd = 0.0, tensao_aux = 0.0; 
            char *ptr; 

            ptr = strstr(buffer, "\"id\":\"Corrente_Bateria_Principal\""); 
            if (ptr && (ptr = strstr(ptr, "\"value\":"))) sscanf(ptr, "\"value\":%f", &corrente); 

            ptr = strstr(buffer, "\"id\":\"Corrente_Celula_Hidrogenio\"");
            if (ptr && (ptr = strstr(ptr, "\"value\":"))) sscanf(ptr, "\"value\":%f", &correntehyd);

            ptr = strstr(buffer, "\"id\":\"Tensao_Bateria_Principal\"");
            if (ptr && (ptr = strstr(ptr, "\"value\":"))) sscanf(ptr, "\"value\":%f", &tensao);

            ptr = strstr(buffer, "\"id\":\"Tensao_Celula_Hidrogenio\"");
            if (ptr && (ptr = strstr(ptr, "\"value\":"))) sscanf(ptr, "\"value\":%f", &tensaohyd);

            ptr = strstr(buffer, "\"id\":\"Pressao_Cilindro_Hidrogenio\"");
            if (ptr && (ptr = strstr(ptr, "\"value\":"))) sscanf(ptr, "\"value\":%f", &pressao);

            ptr = strstr(buffer, "\"id\":\"Nivel_Cilindro_Hidrogenio\"");
            if (ptr && (ptr = strstr(ptr, "\"value\":"))) sscanf(ptr, "\"value\":%f", &nvl_hyd);

            ptr = strstr(buffer, "\"id\":\"Tensao_Barramento_Auxiliar\"");
            if (ptr && (ptr = strstr(ptr, "\"value\":"))) sscanf(ptr, "\"value\":%f", &tensao_aux);

            ptr = strstr(buffer, "\"id\":\"SoC_percent\""); 
            if (ptr && (ptr = strstr(ptr, "\"value\":"))) sscanf(ptr, "\"value\":%f", &soc);

            // Atualização atômica no modelo RAM da IEC 61850
            uint64_t ts = Hal_getTimeInMs(); 
            uint16_t goodQuality = 0x0000; 

            IedServer_lockDataModel(iedServer);
            
            // --- Bateria (instMag e Qualidade) ---
            IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1STG_ZBAT1_Vol_instMag_f, tensao);
            IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1STG_ZBAT1_Vol_mag_f, tensao);
            IedServer_updateQuality(iedServer, IEDMODEL_B1STG_ZBAT1_Vol_q, goodQuality);
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1STG_ZBAT1_Vol_t, ts);
            
            IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1STG_ZBAT1_Amp_instMag_f, corrente);
            IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1STG_ZBAT1_Amp_mag_f, corrente);
            IedServer_updateQuality(iedServer, IEDMODEL_B1STG_ZBAT1_Amp_q, goodQuality);
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1STG_ZBAT1_Amp_t, ts);
            
            IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1STG_DBAT1_SocPro_stVal, soc); 

            // --- Hidrogênio (Ponteiros diretos com Qualidade) ---
            IedServer_updateFloatAttributeValue(iedServer, &iedModel_B1HYD_DSTK1_InH2Pres_mag_f, pressao);
            IedServer_updateQuality(iedServer, &iedModel_B1HYD_DSTK1_InH2Pres_q, goodQuality);
            IedServer_updateUTCTimeAttributeValue(iedServer, &iedModel_B1HYD_DSTK1_InH2Pres_t, ts);

            IedServer_updateFloatAttributeValue(iedServer, &iedModel_B1HYD_DSTK1_OutDCA_mag_f, correntehyd);
            IedServer_updateQuality(iedServer, &iedModel_B1HYD_DSTK1_OutDCA_q, goodQuality);
            IedServer_updateUTCTimeAttributeValue(iedServer, &iedModel_B1HYD_DSTK1_OutDCA_t, ts);

            IedServer_updateFloatAttributeValue(iedServer, &iedModel_B1HYD_DSTK1_OutDCV_mag_f, tensaohyd);
            IedServer_updateQuality(iedServer, &iedModel_B1HYD_DSTK1_OutDCV_q, goodQuality);
            IedServer_updateUTCTimeAttributeValue(iedServer, &iedModel_B1HYD_DSTK1_OutDCV_t, ts);

            IedServer_updateFloatAttributeValue(iedServer, &iedModel_B1HYD_KTNK1_LevPct_mag_f, nvl_hyd);
            IedServer_updateQuality(iedServer, &iedModel_B1HYD_KTNK1_LevPct_q, goodQuality);
            IedServer_updateUTCTimeAttributeValue(iedServer, &iedModel_B1HYD_KTNK1_LevPct_t, ts);

            IedServer_unlockDataModel(iedServer);

            // CORREÇÃO MÁXIMA: Agora exibe os 8 valores unificados solicitados no log do terminal
            LOG_PRINT("[DATA_CLIENT] Bat: (%.2fV | %.2fA | SoC: %.2f%%) || H2_Cel: %.2fV | %.2fA || H2_Pres: %.2f bar | H2_Nivel: %.2f%% || T_Aux: %.2fV\n", 
                       tensao, corrente, soc, tensaohyd, correntehyd, pressao, nvl_hyd, tensao_aux);
        }
        
        close(sock_fd);
        Thread_sleep(1000);
    }
    return NULL;
}

int main(int argc, char** argv) {
    // Registro de tratamento de sinais do Linux para garantir o Graceful Shutdown
    signal(SIGINT, sigint_handler); 
    signal(SIGTERM, sigint_handler); 
    if (wiringPiSetup() == -1) { 
        fprintf(stderr, "ERRO: Falha ao inicializar o wiringPi! Tente executar como root\n");
        exit(1);
    }
    
    //Faz com que se inicie todos os pinos explicitamente em HIGH (Desligado em lógica Active-LOW)
    pinMode(RELAY_LANT_PIN, OUTPUT); digitalWrite(RELAY_LANT_PIN, HIGH); 
    pinMode(RELAY_MOT_PIN, OUTPUT);  digitalWrite(RELAY_MOT_PIN, HIGH); 
    pinMode(RELAY_ALM_PIN, OUTPUT);  digitalWrite(RELAY_ALM_PIN, HIGH); 
    pinMode(RELAY_CEL_PIN, OUTPUT);  digitalWrite(RELAY_CEL_PIN, HIGH); 
    pinMode(RELAY_TNK_PIN, OUTPUT);  digitalWrite(RELAY_TNK_PIN, HIGH);
    pinMode(RELAY_XSWI_PIN, OUTPUT); digitalWrite(RELAY_XSWI_PIN, HIGH); 

    //Retira os printf's que o terminal reporta por padrão da biblioteca. 
    int dev_null = open("/dev/null", O_WRONLY);
    if (dev_null != -1) dup2(dev_null, STDOUT_FILENO); 
    
    iedServer = IedServer_create(&iedModel); //Aloca o modelo na memoria RAM. 
    int tcpPort = 102;
    if (argc > 1) tcpPort = atoi(argv[1]); //Mantem a possibilidade de usar mais de uma porta p/ iniciar o servidor.

    //updateCtlModel: Tranca a regra de operação nativa em Comando Direto Normal
    IedServer_updateCtlModel(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos, CONTROL_MODEL_DIRECT_NORMAL);
    IedServer_updateCtlModel(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos, CONTROL_MODEL_DIRECT_NORMAL);
    IedServer_updateCtlModel(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos, CONTROL_MODEL_DIRECT_NORMAL);
    IedServer_updateCtlModel(iedServer, IEDMODEL_B1HYD_CELXSWI1_Pos, CONTROL_MODEL_DIRECT_NORMAL); 
    IedServer_updateCtlModel(iedServer, IEDMODEL_B1HYD_TNKXSWI1_Pos, CONTROL_MODEL_DIRECT_NORMAL); 
    IedServer_updateCtlModel(iedServer, IEDMODEL_B1STG_XSWI1_Pos, CONTROL_MODEL_DIRECT_NORMAL);

    //Vincula o nó de dados da norma com a função C que atua fisicamente nos relés através da GPIO
    IedServer_setControlHandler(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos, (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1EBK_LANTXSWI1_Pos);
    IedServer_setPerformCheckHandler(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos, checkHandler, IEDMODEL_B1EBK_LANTXSWI1_Pos);
    IedServer_handleWriteAccess(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos_ctlModel, writeAccessHandler, NULL);

    IedServer_setControlHandler(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos, (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1EBK_MOTXSWI1_Pos);
    IedServer_setPerformCheckHandler(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos, checkHandler, IEDMODEL_B1EBK_MOTXSWI1_Pos);
    IedServer_handleWriteAccess(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos_ctlModel, writeAccessHandler, NULL);

    IedServer_setControlHandler(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos, (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1EBK_ALMXSWI1_Pos);
    IedServer_setPerformCheckHandler(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos, checkHandler, IEDMODEL_B1EBK_ALMXSWI1_Pos);
    IedServer_handleWriteAccess(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos_ctlModel, writeAccessHandler, NULL);

    IedServer_setControlHandler(iedServer, IEDMODEL_B1HYD_CELXSWI1_Pos, (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1HYD_CELXSWI1_Pos);
    IedServer_setPerformCheckHandler(iedServer, IEDMODEL_B1HYD_CELXSWI1_Pos, checkHandler, IEDMODEL_B1HYD_CELXSWI1_Pos);
    IedServer_handleWriteAccess(iedServer, IEDMODEL_B1HYD_CELXSWI1_Pos_ctlModel, writeAccessHandler, NULL);

    IedServer_setControlHandler(iedServer, IEDMODEL_B1HYD_TNKXSWI1_Pos, (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1HYD_TNKXSWI1_Pos);
    IedServer_setPerformCheckHandler(iedServer, IEDMODEL_B1HYD_TNKXSWI1_Pos, checkHandler, IEDMODEL_B1HYD_TNKXSWI1_Pos);
    IedServer_handleWriteAccess(iedServer, IEDMODEL_B1HYD_TNKXSWI1_Pos_ctlModel, writeAccessHandler, NULL);

    IedServer_setControlHandler(iedServer, IEDMODEL_B1STG_XSWI1_Pos, (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1STG_XSWI1_Pos);
    IedServer_setPerformCheckHandler(iedServer, IEDMODEL_B1STG_XSWI1_Pos, checkHandler, IEDMODEL_B1STG_XSWI1_Pos);
    IedServer_handleWriteAccess(iedServer, IEDMODEL_B1STG_XSWI1_Pos_ctlModel, writeAccessHandler, NULL);

    IedServer_setConnectionIndicationHandler(iedServer, (IedConnectionIndicationHandler) connectionHandler, NULL);

    IedServer_setGooseInterfaceId(iedServer, "lo");

    IedServer_start(iedServer, tcpPort);

    if (!IedServer_isRunning(iedServer)) {
        LOG_PRINT("Falha ao iniciar servidor!\n");
        IedServer_destroy(iedServer);
        exit(-1);
    }

    LOG_PRINT("\n--- SERVIDOR IEC 61850 ---\n");
    LOG_PRINT("[STATUS] Hardware OK (Lanterna: P%d | Motor: P%d | Alarme: P%d | Celula: P%d | Tanque: P%d | Trava: P%d)\n", RELAY_LANT_PIN, RELAY_MOT_PIN, RELAY_ALM_PIN, RELAY_CEL_PIN, RELAY_TNK_PIN, RELAY_XSWI_PIN);
    LOG_PRINT("[STATUS] Rodando na porta %d.\n", tcpPort);
    LOG_PRINT("[STATUS] Aguardando conexao do Elipse...\n");

    running = 1;
    //Coleta de fato o JSON
    Thread sensorThread = Thread_create((ThreadExecutionFunction)sensor_thread, NULL, true);
    Thread_start(sensorThread);
    //Coleta de fato os valores do GPS
    Thread gpsThread = Thread_create((ThreadExecutionFunction)gps_thread, NULL, true);
    Thread_start(gpsThread);

    while (running) {
        Thread_sleep(100);
    }

    LOG_PRINT("\n[SISTEMA] Encerrando servidor e desarmando relés...\n");
    
    digitalWrite(RELAY_LANT_PIN, HIGH);
    digitalWrite(RELAY_MOT_PIN, HIGH);
    digitalWrite(RELAY_ALM_PIN, HIGH);
    digitalWrite(RELAY_CEL_PIN, HIGH);
    digitalWrite(RELAY_TNK_PIN, HIGH);
    digitalWrite(RELAY_XSWI_PIN, HIGH);
    
    Thread_sleep(500); 

    IedServer_stop(iedServer);
    IedServer_destroy(iedServer);
    close(dev_null);
    return 0;
}