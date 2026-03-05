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
#include <unistd.h>

#define RELAY_MOT_PIN  3  // wPi 3 = Pino Físico (Motor) - 8
#define RELAY_ALM_PIN  4  // wPi 4 = Pino Físico (Alarme) - 10
#define RELAY_CEL_PIN  5  // wPi 5 = Pino Físico (Célula Hidro) - 11
#define RELAY_XSWI_PIN  7  // wPi 7 = Pino Físico (Trava da Bateria) - 13
#define RELAY_TNK_PIN  8  // wPi 8 = Pino Físico (Tanque) - 15
#define RELAY_LANT_PIN 13  // wPi 13 = Pino Físico (Lanterna) - 22

#include "static_model.h"

static int running = 0;
static IedServer iedServer = NULL;
static int activeConnections = 0;

void sigint_handler(int signalId) { running = 0; }

#define LOG_PRINT(...) fprintf(stderr, __VA_ARGS__)

void sinalizar_partida() {
    for(int i=0; i<2; i++) {
        digitalWrite(RELAY_LANT_PIN, HIGH);
        digitalWrite(RELAY_MOT_PIN, HIGH);
        digitalWrite(RELAY_ALM_PIN, HIGH);
        digitalWrite(RELAY_CEL_PIN, HIGH);
        digitalWrite(RELAY_TNK_PIN, HIGH);
        digitalWrite(RELAY_XSWI_PIN, HIGH);
        Thread_sleep(100);          
        digitalWrite(RELAY_LANT_PIN, LOW);
        digitalWrite(RELAY_MOT_PIN, LOW);
        digitalWrite(RELAY_ALM_PIN, LOW);
        digitalWrite(RELAY_CEL_PIN, LOW);
        digitalWrite(RELAY_TNK_PIN, LOW);
        digitalWrite(RELAY_XSWI_PIN, LOW);
        Thread_sleep(100);
    }
}

static void connectionHandler(IedServer self, ClientConnection connection, bool connected, void* parameter) {
    const char* clientIP = ClientConnection_getPeerAddress(connection);
    if (connected) {
        activeConnections++;
        if (activeConnections == 1) {
            LOG_PRINT("\n==================================================\n");
            LOG_PRINT("[SISTEMA] >>> ELIPSE/CLIENTE CONECTADO <<<\n");
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

/* Handler para o Select (SBO) - Validando NOS LOGICOS*/
static CheckHandlerResult 
checkHandler(ControlAction action, void* parameter, MmsValue* ctlVal, bool test, bool interlockCheck) 
{ 
    if (parameter == IEDMODEL_B1EBK_LANTXSWI1_Pos || 
        parameter == IEDMODEL_B1EBK_MOTXSWI1_Pos || 
        parameter == IEDMODEL_B1EBK_ALMXSWI1_Pos || 
        parameter == IEDMODEL_B1HYD_CELXSWI1_Pos ||
        parameter == IEDMODEL_B1HYD_TNKXSWI1_Pos ||
        parameter == IEDMODEL_B1STG_XSWI1_Pos)
        return CONTROL_ACCEPTED;
    return CONTROL_OBJECT_UNDEFINED;
}

/* Handler para o Operate*/
static ControlHandlerResult controlHandlerForBinaryOutput(ControlAction action, void* parameter, MmsValue* value, bool test) {
    uint64_t timestamp = Hal_getTimeInMs();
    int ctlNum = ControlAction_getCtlNum(action);
    ClientConnection clientCon = ControlAction_getClientConnection(action);
    const char* clientIP = (clientCon) ? ClientConnection_getPeerAddress(clientCon) : "Desconhecido";

    if (parameter == IEDMODEL_B1EBK_LANTXSWI1_Pos || 
        parameter == IEDMODEL_B1EBK_MOTXSWI1_Pos || 
        parameter == IEDMODEL_B1EBK_ALMXSWI1_Pos || 
        parameter == IEDMODEL_B1HYD_CELXSWI1_Pos ||
        parameter == IEDMODEL_B1HYD_TNKXSWI1_Pos ||
        parameter == IEDMODEL_B1STG_XSWI1_Pos)
         {
        
bool state = false;

        
        /* Extrair o ctlVal de dentro da estrutura Oper */
       
        MmsValue* ctlVal = value;
        if (MmsValue_getType(value) == MMS_STRUCTURE) {
            // O ctlVal é sempre o primeiro elemento (índice 0) da struct Oper
            ctlVal = MmsValue_getElement(value, 0); 
        }

       if (ctlVal != NULL) {
            if (MmsValue_getType(ctlVal) == MMS_BIT_STRING) {
                int val = MmsValue_getBitStringAsInteger(ctlVal);
                
                // --- LINHA PARA AJUDAR NO DEBUG ---
                LOG_PRINT("   >> [DEBUG] Elipse mandou o Dbpos: %d\n", val);
                
                state = (val == 2); // 2 = Fechado/ON, 1 = Aberto/OFF
            } else if (MmsValue_getType(ctlVal) == MMS_BOOLEAN) {
                state = MmsValue_getBoolean(ctlVal);
                LOG_PRINT("   >> [DEBUG] Elipse mandou um Boolean: %d\n", state);
            } else if (MmsValue_getType(ctlVal) == MMS_INTEGER) {
                state = (MmsValue_toInt32(ctlVal) > 0);
                LOG_PRINT("   >> [DEBUG] Elipse mandou um Inteiro: %d\n", state);
            }
        }
        // =================================================================

        LOG_PRINT("--------------------------------------------------\n");
        LOG_PRINT("[COMANDO] Recebido de: %s\n", clientIP);
        
        if (parameter == IEDMODEL_B1EBK_LANTXSWI1_Pos) {
            digitalWrite(RELAY_LANT_PIN, state ? HIGH : LOW); 
            LOG_PRINT("   >> Acao:     LANTXSWI1 (Lanterna) %s\n", state ? "LIGADO/FECHADO" : "DESLIGADO/ABERTO");
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos_t, timestamp);
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos_stVal, value);
        } 
        else if (parameter == IEDMODEL_B1EBK_MOTXSWI1_Pos) {
            digitalWrite(RELAY_MOT_PIN, state ? HIGH : LOW); 
            LOG_PRINT("   >> Acao:     MOTXSWI1 (Motor) %s\n", state ? "LIGADO/FECHADO" : "DESLIGADO/ABERTO");
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos_t, timestamp);
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos_stVal, value);
        }
        else if (parameter == IEDMODEL_B1EBK_ALMXSWI1_Pos) {
            digitalWrite(RELAY_ALM_PIN, state ? HIGH : LOW); 
            LOG_PRINT("   >> Acao:     ALMXSWI1 (Alarme) %s\n", state ? "LIGADO/FECHADO" : "DESLIGADO/ABERTO");
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos_t, timestamp);
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos_stVal, value);
        }
        else if (parameter == IEDMODEL_B1HYD_CELXSWI1_Pos) {
            digitalWrite(RELAY_CEL_PIN, state ? HIGH : LOW); 
            LOG_PRINT("   >> Acao:     CELXSWI1 (Célebre) %s\n", state ? "LIGADO/FECHADO" : "DESLIGADO/ABERTO");
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1HYD_CELXSWI1_Pos_t, timestamp);
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1HYD_CELXSWI1_Pos_stVal, value);
        }
        else if (parameter == IEDMODEL_B1HYD_TNKXSWI1_Pos) {
            digitalWrite(RELAY_TNK_PIN, state ? HIGH : LOW); 
            LOG_PRINT("   >> Acao:     TNKXSWI1 (Tanque) %s\n", state ? "LIGADO/FECHADO" : "DESLIGADO/ABERTO");
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1HYD_TNKXSWI1_Pos_t, timestamp);
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1HYD_TNKXSWI1_Pos_stVal, value);
        }
        else if (parameter == IEDMODEL_B1STG_XSWI1_Pos) {
            digitalWrite(RELAY_XSWI_PIN, state ? HIGH : LOW); 
            LOG_PRINT("   >> Acao:     XSWI1 (Controle) %s\n", state ? "LIGADO/FECHADO" : "DESLIGADO/ABERTO");
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1STG_XSWI1_Pos_t, timestamp);
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1STG_XSWI1_Pos_stVal, value);
        }

        LOG_PRINT("   >> CtlNum:   %d\n", ctlNum);
        LOG_PRINT("--------------------------------------------------\n");
    } else {
        return CONTROL_RESULT_FAILED;
    }
    return CONTROL_RESULT_OK;
}

static MmsDataAccessError writeAccessHandler(DataAttribute* dataAttribute, MmsValue* value, ClientConnection connection, void* parameter) {
    ControlModel ctlModelVal = (ControlModel) MmsValue_toInt32(value);
    if ((ctlModelVal == CONTROL_MODEL_STATUS_ONLY) || (ctlModelVal == CONTROL_MODEL_DIRECT_NORMAL)) {
        if (dataAttribute == IEDMODEL_B1EBK_LANTXSWI1_Pos_ctlModel) IedServer_updateCtlModel(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos, ctlModelVal);
        else if (dataAttribute == IEDMODEL_B1EBK_MOTXSWI1_Pos_ctlModel) IedServer_updateCtlModel(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos, ctlModelVal);
        else if (dataAttribute == IEDMODEL_B1EBK_ALMXSWI1_Pos_ctlModel) IedServer_updateCtlModel(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos, ctlModelVal);
        else if (dataAttribute == IEDMODEL_B1HYD_CELXSWI1_Pos_ctlModel) IedServer_updateCtlModel(iedServer, IEDMODEL_B1HYD_CELXSWI1_Pos, ctlModelVal);
        else if (dataAttribute == IEDMODEL_B1HYD_TNKXSWI1_Pos_ctlModel) IedServer_updateCtlModel(iedServer, IEDMODEL_B1HYD_TNKXSWI1_Pos, ctlModelVal);
        else if (dataAttribute == IEDMODEL_B1STG_XSWI1_Pos_ctlModel) IedServer_updateCtlModel(iedServer, IEDMODEL_B1STG_XSWI1_Pos, ctlModelVal);
        return DATA_ACCESS_ERROR_SUCCESS;
    }
    return DATA_ACCESS_ERROR_OBJECT_VALUE_INVALID;
}

/* =================================================================
 * TRADUTOR NMEA E THREAD DO GPS PARA TLOC1
 * ================================================================= */

// Função que converte as coordenadas cruas do GPS (Graus/Minutos) para Decimal (para o Elipse/Google Maps)
float nmea_to_decimal(char* nmea_coord, char direction) {
    if (strlen(nmea_coord) < 4) return 0.0;
    
    char* dot = strchr(nmea_coord, '.');
    if (!dot) return 0.0;
    
    int deg_len = (dot - nmea_coord) - 2; 
    char deg_str[4] = {0};
    strncpy(deg_str, nmea_coord, deg_len);
    float degrees = atof(deg_str);
    float minutes = atof(nmea_coord + deg_len);
    
    float decimal = degrees + (minutes / 60.0);
    if (direction == 'S' || direction == 'W') decimal = -decimal; // Sul e Oeste são negativos
    
    return decimal;
}

// Thread que fica rodando em paralelo sem travar o Servidor
void* gps_thread(void* arg) {
    int fd;
    // ATENÇÃO: Mude para "/dev/ttyS1" ou outro se você ativou outra UART no orangepi-config
    if ((fd = serialOpen("/dev/ttyS5", 9600)) < 0) {
        LOG_PRINT("[AVISO] Falha ao abrir porta serial do GPS. GPS inativo.\n");
        return NULL;
    }

    LOG_PRINT("[STATUS] GPS Conectado na Serial. Aguardando satelites...\n");
    char buffer[256];
    int pos = 0;

    while (running) {
        while (serialDataAvail(fd)) {
            char c = serialGetchar(fd);
            if (c == '\n' || c == '\r') {
                if (pos > 0) {
                    buffer[pos] = '\0';
                    
                    // Lemos a linha que contem as Coordenadas (GPRMC)
                    if (strncmp(buffer, "$GPRMC", 6) == 0) {
                        char* token = strtok(buffer, ",");
                        int field = 0;
                        char status = 'V';
                        char lat_str[20] = {0}, ns = 0, lon_str[20] = {0}, ew = 0;

                        while (token != NULL) {
                            if (field == 2) status = token[0]; // A = Conectado, V = Sem Sinal
                            else if (field == 3) strcpy(lat_str, token);
                            else if (field == 4) ns = token[0];
                            else if (field == 5) strcpy(lon_str, token);
                            else if (field == 6) ew = token[0];
                            token = strtok(NULL, ",");
                            field++;
                        }

                        // Só atualiza o IEC 61850 se o GPS estiver fixado num satélite (Status 'A')
                        if (status == 'A') { 
                            float latitude = nmea_to_decimal(lat_str, ns);
                            float longitude = nmea_to_decimal(lon_str, ew);
                            uint64_t timestamp = Hal_getTimeInMs();
                            
                            // =========================================================
                            // Atualizando o nó TLOC1 em tempo real!
                            // =========================================================
                            IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1EBK_TLOC1_GeoLoc_latitude, latitude);
                            IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1EBK_TLOC1_GeoLoc_longitude, longitude);
                            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_TLOC1_GeoLoc_t, timestamp);
                            
                            // Imprime a cada atualização para você ver no terminal
                            LOG_PRINT(" 📡 [TLOC1] GPS Atualizado -> Lat: %.6f | Lon: %.6f\n", latitude, longitude);
                        }
                    }
                    pos = 0;
                }
            } else {
                if (pos < 255) buffer[pos++] = c;
            }
        }
        Thread_sleep(500); // Dorme meio segundo para não fritar a CPU da Orange Pi
    }
    serialClose(fd);
    return NULL;
}

/* =================================================================
 * LEITOR SOCKET TCP E THREAD DE SENSORES (BATERIA)
 * ================================================================= 

void* sensor_thread(void* arg) {
    LOG_PRINT("[STATUS] Thread de Sensores iniciada (Socket 2025)...\n");

    while (running) { // Loop principal para persistência
        int sock = 0;
        struct sockaddr_in serv_addr;
        char buffer[2048] = {0};

        // 1. Criar o Socket
        if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
            LOG_PRINT("[ERRO] Falha ao criar socket. Tentando em 5s...\n");
            Thread_sleep(5000);
            continue;
        }

        serv_addr.sin_family = AF_INET;
        serv_addr.sin_port = htons(2025);

        // 2. Definir o IP do Host (Troque pelo IP do seu PC simulador)
        if (inet_pton(AF_INET, "192.168.2.120", &serv_addr.sin_addr) <= 0) {
            LOG_PRINT("[ERRO] Endereço IP inválido. Verifique o código!\n");
            close(sock);
            Thread_sleep(5000);
            continue;
        }

        // 3. Tentar conectar (Loop de tentativa de conexão)
        LOG_PRINT("[CONEXÃO] Tentando conectar ao simulador no IP 192.168.2.120\n");
        if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
            close(sock);
            Thread_sleep(3000); // Espera 3 segundos antes de tentar de novo
            continue;
        }

        LOG_PRINT("✅ [SOCKET] Conectado! Recebendo dados em tempo real...\n");

         //4. Loop de Leitura (Enquanto houver dados vindo do simulador)
         while (running) {
            int valread = read(sock, buffer, sizeof(buffer) - 1);
            
           if (valread <= 0) {
               LOG_PRINT("⚠️ [SOCKET] Conexão perdida com o simulador. Reiniciando busca...\n");
                break; // Sai do loop de leitura para reconectar no loop principal 
        {
            
    
            buffer[valread] = '\0'; // Garante que a string termine corretamente

            float tensao = 0.0, corrente = 0.0, soc = 0.0;
            char *ptr;

            // Extração dos dados do JSON (Pesque os valores brutos)
            ptr = strstr(buffer, "\"id\":\"Corrente_Bateria_Principal\"");
            if (ptr && (ptr = strstr(ptr, "\"value\":"))) sscanf(ptr, "\"value\":%f", &corrente);

            ptr = strstr(buffer, "\"id\":\"Tensao_Bateria_Principal\"");
            if (ptr && (ptr = strstr(ptr, "\"value\":"))) sscanf(ptr, "\"value\":%f", &tensao);

            ptr = strstr(buffer, "\"soc_percent\":");
            if (ptr) sscanf(ptr, "\"soc_percent\":%f", &soc);

            // Injeção nas variáveis do modelo IEC 61850 (ZBAT1 e DBAT1)
            uint64_t ts = Hal_getTimeInMs();
            IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1STG_ZBAT1_Vol_mag_f, tensao);
            IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1STG_ZBAT1_Amp_mag_f, corrente);
            IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1STG_DBAT1_SocPro_stVal, soc);

            LOG_PRINT(" 🔋 [DATA] V: %.2fV | I: %.2fA | SOC: %.2f%%\n", tensao, corrente, soc);
            
            memset(buffer, 0, sizeof(buffer)); // Limpa para a próxima mensagem
        }

        close(sock); // Fecha o socket antes de tentar a reconexão
    }
    return NULL;
}*/

int main(int argc, char** argv) {
    if (wiringPiSetup() == -1) { 
        fprintf(stderr, "ERRO: Falha ao inicializar o wiringPi! Tente executar como root\n");
        exit(1);
    }
    pinMode(RELAY_LANT_PIN, OUTPUT); digitalWrite(RELAY_LANT_PIN, LOW); 
    pinMode(RELAY_MOT_PIN, OUTPUT);  digitalWrite(RELAY_MOT_PIN, LOW); 
    pinMode(RELAY_ALM_PIN, OUTPUT);  digitalWrite(RELAY_ALM_PIN, LOW); 
    pinMode(RELAY_CEL_PIN, OUTPUT);  digitalWrite(RELAY_CEL_PIN, LOW); 
    pinMode(RELAY_TNK_PIN, OUTPUT);  digitalWrite(RELAY_TNK_PIN, LOW);
    pinMode(RELAY_XSWI_PIN, OUTPUT);  digitalWrite(RELAY_XSWI_PIN, LOW); 

    int dev_null = open("/dev/null", O_WRONLY);
    if (dev_null != -1) dup2(dev_null, STDOUT_FILENO); 

    sinalizar_partida();
    
    iedServer = IedServer_create(&iedModel);
    int tcpPort = 102;
    if (argc > 1) tcpPort = atoi(argv[1]);

    // ==============================================================
    // Forçando o ctlModel nativamente pelo C
    // ============================================================== 
    IedServer_updateCtlModel(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos, CONTROL_MODEL_DIRECT_NORMAL);
    IedServer_updateCtlModel(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos, CONTROL_MODEL_DIRECT_NORMAL);
    IedServer_updateCtlModel(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos, CONTROL_MODEL_DIRECT_NORMAL);
    IedServer_updateCtlModel(iedServer, IEDMODEL_B1HYD_CELXSWI1_Pos, CONTROL_MODEL_DIRECT_NORMAL); 
    IedServer_updateCtlModel(iedServer, IEDMODEL_B1HYD_TNKXSWI1_Pos, CONTROL_MODEL_DIRECT_NORMAL); 
    IedServer_updateCtlModel(iedServer, IEDMODEL_B1STG_XSWI1_Pos, CONTROL_MODEL_DIRECT_NORMAL);

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

    IedServer_start(iedServer, tcpPort);

    if (!IedServer_isRunning(iedServer)) {
        LOG_PRINT("Falha ao iniciar servidor!\n");
        IedServer_destroy(iedServer);
        exit(-1);
    }

    LOG_PRINT("\n--- SERVIDOR IEC 61850 ---\n");
    LOG_PRINT("[STATUS] Hardware OK (Lanterna: P%d | Motor: P%d | Alarme: P%d | Celula: P%d | Tanque: P%d | Trava: P%d)\n", RELAY_LANT_PIN, RELAY_MOT_PIN, RELAY_ALM_PIN, RELAY_CEL_PIN, RELAY_TNK_PIN, RELAY_XSWI_PIN);    LOG_PRINT("[STATUS] Rodando na porta %d.\n", tcpPort);
    LOG_PRINT("[STATUS] Aguardando conexao do Elipse...\n");

    running = 1;
    signal(SIGINT, sigint_handler);

    // ==============================================================
    // ADICIONE ESTAS DUAS LINHAS AQUI PARA LIGAR OS SENSORES!
    // ==============================================================
    //Thread sensorThread = Thread_create((ThreadExecutionFunction)sensor_thread, NULL, true);
    //Thread_start(sensorThread);

    // --- Ligar o GPS em Paralelo ---
    Thread gpsThread = Thread_create((ThreadExecutionFunction)gps_thread, NULL, true);
    Thread_start(gpsThread);

    while (running) {
        Thread_sleep(100);
    }

    LOG_PRINT("\n[SISTEMA] Encerrando servidor...\n");
    digitalWrite(RELAY_LANT_PIN, LOW);
    digitalWrite(RELAY_MOT_PIN, LOW);
    digitalWrite(RELAY_ALM_PIN, LOW);
    digitalWrite(RELAY_CEL_PIN, LOW);
    digitalWrite(RELAY_TNK_PIN, LOW);
    digitalWrite(RELAY_XSWI_PIN, LOW);
    IedServer_stop(iedServer);
    IedServer_destroy(iedServer);
    close(dev_null);
    return 0;
}