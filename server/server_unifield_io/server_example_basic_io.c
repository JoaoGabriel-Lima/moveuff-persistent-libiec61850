#include "iec61850_server.h"
#include "hal_thread.h"
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h> 
#if defined(__has_include)
#if __has_include(<wiringSerial.h>)
#include <wiringSerial.h>
#else
extern int serialOpen(const char* device, const int baud);
extern void serialClose(const int fd);
extern int serialDataAvail(const int fd);
extern int serialGetchar(const int fd);
#endif
#else
#include <wiringSerial.h>
#endif
#include <string.h>
#if defined(__has_include)
#if __has_include(<wiringPi.h>)
#include <wiringPi.h>
#else
#define HIGH 1
#define LOW 0
#define OUTPUT 1
extern int wiringPiSetup(void);
extern void pinMode(int pin, int mode);
extern void digitalWrite(int pin, int value);
#endif
#else
#include <wiringPi.h>
#endif
#include <sys/socket.h>
#include <arpa/inet.h>
#include <time.h>

#define GATEWAY_RECONNECT_SECONDS 10
#define DEFAULT_GATEWAY_CONFIG "moveuff_gateway.conf"
#define DEFAULT_GATEWAY_HOST "127.0.0.1"
#define DEFAULT_GATEWAY_PORT 8000
#define DEFAULT_BIKE_HOST "127.0.0.1"
#define DEFAULT_REGISTRATION_TOKEN "moveuff-dev-token"

#define RELAY_MOT_PIN  23  // wPi 24 = Pino Físico 12 (Motor)
#define RELAY_ALM_PIN  9   // wPi 9 = Pino Físico 16 (Alarme)
#define RELAY_XSWI_PIN 10  // wPi 10 = Pino Físico 18 (Trava da Bateria)

#define RELAY_CEL_PIN  21  // wPi 21 = Pino Físico 31 (Célula)
#define RELAY_TNK_PIN  8   // wPi 8  = Pino Físico 15 (Tanque)
#define RELAY_LANT_PIN 24  // wPi 23 = Pino Físico 22 (Lanterna)

#include "static_model.h"

static int running = 0;
static IedServer iedServer = NULL;
static int activeConnections = 0;

typedef struct {
    char bike_uuid[40];
    char bike_host[256];
    char gateway_host[256];
    int gateway_port;
    char registration_token[256];
    char bike_label[128];
} GatewayRegistrationConfig;

typedef struct {
    GatewayRegistrationConfig config;
    int mms_port;
} GatewayRegistrationTask;

void sigint_handler(int signalId) { running = 0; }

#define LOG_PRINT(...) fprintf(stderr, __VA_ARGS__)

void sinalizar_partida() {
    for(int i=0; i<2; i++) {
        digitalWrite(RELAY_LANT_PIN, LOW); digitalWrite(RELAY_MOT_PIN, LOW);
        digitalWrite(RELAY_ALM_PIN, LOW); digitalWrite(RELAY_CEL_PIN, LOW);
        digitalWrite(RELAY_TNK_PIN, LOW); digitalWrite(RELAY_XSWI_PIN, LOW);
        Thread_sleep(100);
        digitalWrite(RELAY_LANT_PIN, HIGH); digitalWrite(RELAY_MOT_PIN, HIGH);
        digitalWrite(RELAY_ALM_PIN, HIGH); digitalWrite(RELAY_CEL_PIN, HIGH);
        digitalWrite(RELAY_TNK_PIN, HIGH); digitalWrite(RELAY_XSWI_PIN, HIGH);
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
        if (activeConnections == 0) LOG_PRINT("\n[SISTEMA] Cliente Desconectado (%s)\n\n", clientIP);
    }
}

static CheckHandlerResult 
checkHandler(ControlAction action, void* parameter, MmsValue* ctlVal, bool test, bool interlockCheck) 
{ 
    if (parameter == IEDMODEL_B1EBK_LANTXSWI1_Pos || parameter == IEDMODEL_B1EBK_MOTXSWI1_Pos || 
        parameter == IEDMODEL_B1EBK_ALMXSWI1_Pos || parameter == IEDMODEL_B1HYD_CELXSWI1_Pos ||
        parameter == IEDMODEL_B1HYD_TNKXSWI1_Pos || parameter == IEDMODEL_B1STG_XSWI1_Pos ||
        parameter == IEDMODEL_B1HYD_KVLV1_Pos) 
        return CONTROL_ACCEPTED;
    return CONTROL_OBJECT_UNDEFINED;
}

static ControlHandlerResult controlHandlerForBinaryOutput(ControlAction action, void* parameter, MmsValue* value, bool test) {
    uint64_t timestamp = Hal_getTimeInMs();
    int ctlNum = ControlAction_getCtlNum(action);
    ClientConnection clientCon = ControlAction_getClientConnection(action);
    const char* clientIP = (clientCon) ? ClientConnection_getPeerAddress(clientCon) : "Desconhecido";

    if (parameter == IEDMODEL_B1EBK_LANTXSWI1_Pos || parameter == IEDMODEL_B1EBK_MOTXSWI1_Pos ||
        parameter == IEDMODEL_B1EBK_ALMXSWI1_Pos || parameter == IEDMODEL_B1HYD_CELXSWI1_Pos ||
        parameter == IEDMODEL_B1HYD_TNKXSWI1_Pos || parameter == IEDMODEL_B1STG_XSWI1_Pos ||
        parameter == IEDMODEL_B1HYD_KVLV1_Pos)
    {
        bool state = false;
        MmsValue* ctlVal = value;
        if (MmsValue_getType(value) == MMS_STRUCTURE) ctlVal = MmsValue_getElement(value, 0);

        if (ctlVal != NULL) {
            if (MmsValue_getType(ctlVal) == MMS_BIT_STRING) state = (MmsValue_getBitStringAsInteger(ctlVal) == 2);
            else if (MmsValue_getType(ctlVal) == MMS_BOOLEAN) state = MmsValue_getBoolean(ctlVal);
            else if (MmsValue_getType(ctlVal) == MMS_INTEGER) state = (MmsValue_toInt32(ctlVal) > 0);
        }

        LOG_PRINT("--------------------------------------------------\n");
        LOG_PRINT("[COMANDO] Recebido de: %s | ctlNum: %d\n", clientIP, ctlNum);

        if (parameter == IEDMODEL_B1EBK_LANTXSWI1_Pos) {
            digitalWrite(RELAY_LANT_PIN, state ? LOW : HIGH);
            LOG_PRINT("   >> Acao:     LANTXSWI1 (Lanterna) %s\n", state ? "LIGADA" : "DESLIGADA");
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos_stVal, value);
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos_t, timestamp);
        }
        else if (parameter == IEDMODEL_B1EBK_MOTXSWI1_Pos) {
            digitalWrite(RELAY_MOT_PIN, state ? LOW : HIGH);
            LOG_PRINT("   >> Acao:     MOTXSWI1 (Motor) %s\n", state ? "LIGADO" : "DESLIGADO");
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos_stVal, value);
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos_t, timestamp);
        }
        else if (parameter == IEDMODEL_B1EBK_ALMXSWI1_Pos) {
            digitalWrite(RELAY_ALM_PIN, state ? LOW : HIGH);
            LOG_PRINT("   >> Acao:     ALMXSWI1 (Alarme) %s\n", state ? "LIGADO" : "DESLIGADO");
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos_stVal, value);
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos_t, timestamp);
        }
        else if (parameter == IEDMODEL_B1HYD_CELXSWI1_Pos) {
            digitalWrite(RELAY_CEL_PIN, state ? LOW : HIGH);
            LOG_PRINT("   >> Acao:     CELXSWI1 (Celula) %s\n", state ? "LIGADA" : "DESLIGADA");
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1HYD_CELXSWI1_Pos_stVal, value);
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1HYD_CELXSWI1_Pos_t, timestamp);
        }
        else if (parameter == IEDMODEL_B1HYD_TNKXSWI1_Pos) {
            digitalWrite(RELAY_TNK_PIN, state ? LOW : HIGH);
            LOG_PRINT("   >> Acao:     TNKXSWI1 (Tanque) %s\n", state ? "LIGADO" : "DESLIGADO");
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1HYD_TNKXSWI1_Pos_stVal, value);
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1HYD_TNKXSWI1_Pos_t, timestamp);
        }
        else if (parameter == IEDMODEL_B1STG_XSWI1_Pos) {
            digitalWrite(RELAY_XSWI_PIN, state ? LOW : HIGH);
            LOG_PRINT("   >> Acao:     XSWI1 (Trava) %s\n", state ? "LIGADA" : "DESLIGADA");
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1STG_XSWI1_Pos_stVal, value);
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1STG_XSWI1_Pos_t, timestamp);
        }
        else if (parameter == IEDMODEL_B1HYD_KVLV1_Pos) {
            LOG_PRINT("   >> Acao:     KVLV1 (Valvula H2) %s\n", state ? "ABERTA" : "FECHADA");
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1HYD_KVLV1_Pos_stVal, value);
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1HYD_KVLV1_Pos_t, timestamp);
        }

        LOG_PRINT("--------------------------------------------------\n");
        return CONTROL_RESULT_OK;
    }

    return CONTROL_RESULT_FAILED;
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
        else if (dataAttribute == IEDMODEL_B1HYD_KVLV1_Pos_ctlModel) IedServer_updateCtlModel(iedServer, IEDMODEL_B1HYD_KVLV1_Pos, ctlModelVal);
        return DATA_ACCESS_ERROR_SUCCESS;
    }

    return DATA_ACCESS_ERROR_OBJECT_VALUE_INVALID;
}

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
    char lat_str[20] = {0};
    char lon_str[20] = {0};
    char ns = 0;
    char ew = 0;

    while (token != NULL) {
        switch (field) {
            case 2: status = token[0]; break;
            case 3: strncpy(lat_str, token, sizeof(lat_str) - 1); break;
            case 4: ns = token[0]; break;
            case 5: strncpy(lon_str, token, sizeof(lon_str) - 1); break;
            case 6: ew = token[0]; break;
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
                            uint16_t goodQuality = 0x0000; // 0x0000 = Qualidade BOA/VALIDA no padrão IEC 61850

                            IedServer_lockDataModel(iedServer);
                            IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1EBK_TLOC1_GeoLoc_latitude, lat);
                            IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1EBK_TLOC1_GeoLoc_longitude, lon);
                            
                            // CORREÇÃO: Atualiza os atributos de qualidade para o SCADA validar os dados
                            IedServer_updateQuality(iedServer, IEDMODEL_B1EBK_TLOC1_GeoLoc_q, goodQuality);
                            IedServer_updateQuality(iedServer, IEDMODEL_B1EBK_TLOC1_NavFai_q, goodQuality);
                            IedServer_updateQuality(iedServer, IEDMODEL_B1EBK_TLOC1_SatAvl_q, goodQuality);
                            
                            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_TLOC1_GeoLoc_t, ts);
                            IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_B1EBK_TLOC1_NavFai_stVal, false);
                            IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_B1EBK_TLOC1_SatAvl_stVal, true);
                            IedServer_unlockDataModel(iedServer);
                            
                            LOG_PRINT("[TLOC1] #%04d | Lat: %+.6f | Lon: %+.6f\n", ++fix_count, lat, lon);
                        } else {
                            uint16_t goodQuality = 0x0000;
                            IedServer_lockDataModel(iedServer);
                            IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_B1EBK_TLOC1_NavFai_stVal, true);
                            IedServer_updateQuality(iedServer, IEDMODEL_B1EBK_TLOC1_NavFai_q, goodQuality);
                            IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_B1EBK_TLOC1_SatAvl_stVal, false);
                            IedServer_updateQuality(iedServer, IEDMODEL_B1EBK_TLOC1_SatAvl_q, goodQuality);
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

void* sensor_thread(void* arg) {
    struct sockaddr_in server_address;
    char buffer[2048] = {0};

    LOG_PRINT("[STATUS] Thread de Sensores iniciada (Modo CLIENTE TCP - Consumindo Instrumentacao)...\n");

    while (running) {
        int sock_fd = socket(AF_INET, SOCK_STREAM, 0);
        if (sock_fd < 0) {
            LOG_PRINT("[ERRO] Falha ao criar socket cliente!\n");
            Thread_sleep(2000);
            continue;
        }

        memset(&server_address, 0, sizeof(server_address));
        server_address.sin_family = AF_INET;
        server_address.sin_port = htons(2026);
        server_address.sin_addr.s_addr = inet_addr("127.0.0.1");

        LOG_PRINT("[SOCKET] Tentando conectar ao fluxo da instrumentacao (127.0.0.1:2026)...\n");

        if (connect(sock_fd, (struct sockaddr *)&server_address, sizeof(server_address)) < 0) {
            LOG_PRINT("[SOCKET] Servidor de instrumentacao offline. Retentando em 2 segundos...\n");
            close(sock_fd);
            Thread_sleep(2000);
            continue;
        }

        LOG_PRINT("[SOCKET] Conectado com sucesso! Consumindo telemetria da e-Bike...\n");

        while (running) {
            memset(buffer, 0, sizeof(buffer));
            int valread = read(sock_fd, buffer, sizeof(buffer) - 1);

            if (valread <= 0) {
                LOG_PRINT("[SOCKET] Conexao encerrada pelo servidor de instrumentacao. Reiniciando busca...\n");
                break;
            }

            buffer[valread] = '\0';

            if (strstr(buffer, "Bateria_Principal") == NULL && strstr(buffer, "Hidrogenio") == NULL) {
                continue;
            }

            float tensao = 0.0f;
            float corrente = 0.0f;
            float soc = 0.0f;
            float tensaohyd = 0.0f;
            float pressao = 0.0f;
            float correntehyd = 0.0f;
            float nvl_hyd = 0.0f;
            float tensao_aux = 0.0f;
            char* ptr;

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

            uint64_t ts = Hal_getTimeInMs();
            uint16_t goodQuality = 0x0000;

            IedServer_lockDataModel(iedServer);

            IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1STG_ZBAT1_Vol_instMag_f, tensao);
            IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1STG_ZBAT1_Vol_mag_f, tensao);
            IedServer_updateQuality(iedServer, IEDMODEL_B1STG_ZBAT1_Vol_q, goodQuality);
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1STG_ZBAT1_Vol_t, ts);

            IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1STG_ZBAT1_Amp_instMag_f, corrente);
            IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1STG_ZBAT1_Amp_mag_f, corrente);
            IedServer_updateQuality(iedServer, IEDMODEL_B1STG_ZBAT1_Amp_q, goodQuality);
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1STG_ZBAT1_Amp_t, ts);

            IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1STG_DBAT1_SocPro_instMag_f, soc);
            IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1STG_DBAT1_SocPro_mag_f, soc);
            IedServer_updateQuality(iedServer, IEDMODEL_B1STG_DBAT1_SocPro_q, goodQuality);
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1STG_DBAT1_SocPro_t, ts);

            IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1HYD_DSTK1_InH2Pres_mag_f, pressao);
            IedServer_updateQuality(iedServer, IEDMODEL_B1HYD_DSTK1_InH2Pres_q, goodQuality);
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1HYD_DSTK1_InH2Pres_t, ts);

            IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1HYD_DSTK1_OutDCA_mag_f, correntehyd);
            IedServer_updateQuality(iedServer, IEDMODEL_B1HYD_DSTK1_OutDCA_q, goodQuality);
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1HYD_DSTK1_OutDCA_t, ts);

            IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1HYD_DSTK1_OutDCV_mag_f, tensaohyd);
            IedServer_updateQuality(iedServer, IEDMODEL_B1HYD_DSTK1_OutDCV_q, goodQuality);
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1HYD_DSTK1_OutDCV_t, ts);

            IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1HYD_KTNK1_LevPct_mag_f, nvl_hyd);
            IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1HYD_KTNK1_LevPct_subMag_f, nvl_hyd);
            IedServer_updateQuality(iedServer, IEDMODEL_B1HYD_KTNK1_LevPct_q, goodQuality);
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1HYD_KTNK1_LevPct_t, ts);

            IedServer_unlockDataModel(iedServer);

            LOG_PRINT("[DATA_CLIENT] Bat: (%.2fV | %.2fA | SoC: %.2f%%) || H2_Cel: %.2fV | %.2fA || H2_Pres: %.2f bar | H2_Nivel: %.2f%% || T_Aux: %.2fV\n",
                      tensao, corrente, soc, tensaohyd, correntehyd, pressao, nvl_hyd, tensao_aux);
        }

        close(sock_fd);
        Thread_sleep(1000);
    }

    return NULL;
}

static void copy_string(char* destination, size_t size, const char* value) {
    if (size == 0) return;
    if (value == NULL) value = "";

    strncpy(destination, value, size - 1);
    destination[size - 1] = '\0';
}

static char* trim_whitespace(char* value) {
    while (*value == ' ' || *value == '\t' || *value == '\r' || *value == '\n') value++;

    char* end = value + strlen(value);
    while (end > value && (end[-1] == ' ' || end[-1] == '\t' || end[-1] == '\r' || end[-1] == '\n')) {
        end--;
        *end = '\0';
    }

    return value;
}

static void init_gateway_config(GatewayRegistrationConfig* config) {
    memset(config, 0, sizeof(*config));
    copy_string(config->bike_host, sizeof(config->bike_host), DEFAULT_BIKE_HOST);
    copy_string(config->gateway_host, sizeof(config->gateway_host), DEFAULT_GATEWAY_HOST);
    config->gateway_port = DEFAULT_GATEWAY_PORT;
    copy_string(config->registration_token, sizeof(config->registration_token), DEFAULT_REGISTRATION_TOKEN);
}

static void apply_gateway_config_value(GatewayRegistrationConfig* config, const char* key, const char* value) {
    if (strcmp(key, "BIKE_UUID") == 0) copy_string(config->bike_uuid, sizeof(config->bike_uuid), value);
    else if (strcmp(key, "BIKE_HOST") == 0) copy_string(config->bike_host, sizeof(config->bike_host), value);
    else if (strcmp(key, "GATEWAY_HOST") == 0) copy_string(config->gateway_host, sizeof(config->gateway_host), value);
    else if (strcmp(key, "GATEWAY_PORT") == 0) config->gateway_port = atoi(value);
    else if (strcmp(key, "REGISTRATION_TOKEN") == 0) copy_string(config->registration_token, sizeof(config->registration_token), value);
    else if (strcmp(key, "BIKE_LABEL") == 0) copy_string(config->bike_label, sizeof(config->bike_label), value);
}

static void load_gateway_config_file(GatewayRegistrationConfig* config, const char* path) {
    FILE* file = fopen(path, "r");
    if (file == NULL) {
        LOG_PRINT("[REGISTRO] Arquivo de configuracao %s nao encontrado; usando defaults/env.\n", path);
        return;
    }

    char line[512];
    while (fgets(line, sizeof(line), file) != NULL) {
        char* parsed = trim_whitespace(line);

        if (parsed[0] == '\0' || parsed[0] == '#') continue;

        char* separator = strchr(parsed, '=');
        if (separator == NULL) continue;

        *separator = '\0';
        char* key = trim_whitespace(parsed);
        char* value = trim_whitespace(separator + 1);
        apply_gateway_config_value(config, key, value);
    }

    fclose(file);
}

static void apply_env_override_string(char* destination, size_t size, const char* env_name) {
    const char* value = getenv(env_name);
    if (value != NULL && value[0] != '\0') copy_string(destination, size, value);
}

static void apply_gateway_env_overrides(GatewayRegistrationConfig* config) {
    apply_env_override_string(config->bike_uuid, sizeof(config->bike_uuid), "MOVEUFF_BIKE_UUID");
    apply_env_override_string(config->bike_host, sizeof(config->bike_host), "MOVEUFF_BIKE_HOST");
    apply_env_override_string(config->gateway_host, sizeof(config->gateway_host), "MOVEUFF_GATEWAY_HOST");
    apply_env_override_string(config->registration_token, sizeof(config->registration_token), "MOVEUFF_REGISTRATION_TOKEN");
    apply_env_override_string(config->bike_label, sizeof(config->bike_label), "MOVEUFF_BIKE_LABEL");

    const char* gateway_port = getenv("MOVEUFF_GATEWAY_PORT");
    if (gateway_port != NULL && gateway_port[0] != '\0') config->gateway_port = atoi(gateway_port);
}

static GatewayRegistrationConfig load_gateway_config(const char* path) {
    GatewayRegistrationConfig config;
    init_gateway_config(&config);
    load_gateway_config_file(&config, path);
    apply_gateway_env_overrides(&config);
    return config;
}

static void json_escape_string(const char* input, char* output, size_t size) {
    size_t written = 0;

    if (size == 0) return;

    for (size_t i = 0; input[i] != '\0' && written + 1 < size; i++) {
        char c = input[i];

        if (c == '"' || c == '\\') {
            if (written + 2 >= size) break;
            output[written++] = '\\';
            output[written++] = c;
        }
        else if (c == '\n') {
            if (written + 2 >= size) break;
            output[written++] = '\\';
            output[written++] = 'n';
        }
        else if (c == '\r') {
            if (written + 2 >= size) break;
            output[written++] = '\\';
            output[written++] = 'r';
        }
        else if (c == '\t') {
            if (written + 2 >= size) break;
            output[written++] = '\\';
            output[written++] = 't';
        }
        else {
            output[written++] = c;
        }
    }

    output[written] = '\0';
}

static int register_with_gateway(const GatewayRegistrationConfig* config, int mmsPort) {
    if (config->bike_uuid[0] == '\0') {
        LOG_PRINT("[REGISTRO] BIKE_UUID nao definido. Configure %s ou MOVEUFF_BIKE_UUID.\n", DEFAULT_GATEWAY_CONFIG);
        return -1;
    }

    if (config->gateway_port <= 0 || config->gateway_port > 65535) {
        LOG_PRINT("[REGISTRO] GATEWAY_PORT invalido: %d\n", config->gateway_port);
        return -1;
    }

    LOG_PRINT("[REGISTRO] Tentando POST /api/v1/bikes/register em %s:%d (uuid=%s, mms=%s:%d).\n",
              config->gateway_host, config->gateway_port, config->bike_uuid, config->bike_host, mmsPort);

    int sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock < 0) {
        LOG_PRINT("[REGISTRO] Falha ao criar socket HTTP.\n");
        return -1;
    }

    struct sockaddr_in gatewayAddr;
    memset(&gatewayAddr, 0, sizeof(gatewayAddr));
    gatewayAddr.sin_family = AF_INET;
    gatewayAddr.sin_port = htons((uint16_t) config->gateway_port);

    if (inet_pton(AF_INET, config->gateway_host, &gatewayAddr.sin_addr) <= 0) {
        LOG_PRINT("[REGISTRO] GATEWAY_HOST precisa ser IPv4 valido: %s\n", config->gateway_host);
        close(sock);
        return -1;
    }

    if (connect(sock, (struct sockaddr*) &gatewayAddr, sizeof(gatewayAddr)) < 0) {
        LOG_PRINT("[REGISTRO] Gateway indisponivel em %s:%d. Nova tentativa em %ds.\n",
                  config->gateway_host, config->gateway_port, GATEWAY_RECONNECT_SECONDS);
        close(sock);
        return -1;
    }

    char escaped_label[256] = {0};
    json_escape_string(config->bike_label, escaped_label, sizeof(escaped_label));

    char body[768];
    int bodyLen;
    if (config->bike_label[0] != '\0') {
        bodyLen = snprintf(body, sizeof(body),
            "{\"uuid\":\"%s\",\"host\":\"%s\",\"port\":%d,\"metadata\":{\"source\":\"server_unifield_io\",\"label\":\"%s\"}}",
            config->bike_uuid, config->bike_host, mmsPort, escaped_label);
    }
    else {
        bodyLen = snprintf(body, sizeof(body),
            "{\"uuid\":\"%s\",\"host\":\"%s\",\"port\":%d,\"metadata\":{\"source\":\"server_unifield_io\"}}",
            config->bike_uuid, config->bike_host, mmsPort);
    }

    if (bodyLen <= 0 || bodyLen >= (int) sizeof(body)) {
        LOG_PRINT("[REGISTRO] Payload de registro excedeu o limite.\n");
        close(sock);
        return -1;
    }

    char request[1400];
    int requestLen = snprintf(request, sizeof(request),
        "POST /api/v1/bikes/register HTTP/1.1\r\n"
        "Host: %s:%d\r\n"
        "Authorization: Bearer %s\r\n"
        "Content-Type: application/json\r\n"
        "Content-Length: %d\r\n"
        "Connection: close\r\n"
        "\r\n"
        "%s",
        config->gateway_host, config->gateway_port, config->registration_token, bodyLen, body);

    if (requestLen <= 0 || requestLen >= (int) sizeof(request)) {
        LOG_PRINT("[REGISTRO] Requisicao HTTP excedeu o limite.\n");
        close(sock);
        return -1;
    }

    int sent = 0;
    while (sent < requestLen) {
        int written = (int) write(sock, request + sent, (size_t) (requestLen - sent));
        if (written <= 0) {
            LOG_PRINT("[REGISTRO] Falha ao enviar registro HTTP.\n");
            close(sock);
            return -1;
        }
        sent += written;
    }

    char response[256] = {0};
    int received = (int) read(sock, response, sizeof(response) - 1);
    close(sock);

    if (received <= 0) {
        LOG_PRINT("[REGISTRO] Gateway nao respondeu ao registro.\n");
        return -1;
    }

    if (strstr(response, " 200 ") != NULL) {
        LOG_PRINT("[REGISTRO] Bike %s registrada no gateway %s:%d como %s:%d.\n",
                  config->bike_uuid, config->gateway_host, config->gateway_port, config->bike_host, mmsPort);
        return 0;
    }

    LOG_PRINT("[REGISTRO] Gateway recusou registro. Resposta: %.80s\n", response);
    return -1;
}

static void* gateway_registration_thread(void* arg) {
    GatewayRegistrationTask* task = (GatewayRegistrationTask*) arg;

    while (running) {
        if (register_with_gateway(&task->config, task->mms_port) == 0) return NULL;

        for (int i = 0; i < GATEWAY_RECONNECT_SECONDS && running; i++) Thread_sleep(1000);
    }

    return NULL;
}

int main(int argc, char** argv) {
    signal(SIGINT, sigint_handler);
    signal(SIGTERM, sigint_handler);

    if (wiringPiSetup() == -1) {
        fprintf(stderr, "ERRO: Falha ao inicializar o wiringPi! Tente executar como root\n");
        exit(1);
    }

    pinMode(RELAY_LANT_PIN, OUTPUT); digitalWrite(RELAY_LANT_PIN, HIGH);
    pinMode(RELAY_MOT_PIN, OUTPUT);  digitalWrite(RELAY_MOT_PIN, HIGH);
    pinMode(RELAY_ALM_PIN, OUTPUT);  digitalWrite(RELAY_ALM_PIN, HIGH);
    pinMode(RELAY_CEL_PIN, OUTPUT);  digitalWrite(RELAY_CEL_PIN, HIGH);
    pinMode(RELAY_TNK_PIN, OUTPUT);  digitalWrite(RELAY_TNK_PIN, HIGH);
    pinMode(RELAY_XSWI_PIN, OUTPUT); digitalWrite(RELAY_XSWI_PIN, HIGH);

    int dev_null = open("/dev/null", O_WRONLY);
    if (dev_null != -1) dup2(dev_null, STDOUT_FILENO); 

    // sinalizar_partida();
    iedServer = IedServer_create(&iedModel);
    int tcpPort = (argc > 1) ? atoi(argv[1]) : 102;

    const char* gatewayConfigPath = (argc > 2) ? argv[2] : DEFAULT_GATEWAY_CONFIG;
    GatewayRegistrationTask registrationTask;
    registrationTask.config = load_gateway_config(gatewayConfigPath);
    registrationTask.mms_port = tcpPort;

    // LPHD1 Namespace Configuration
    IedServer_updateVisibleStringAttributeValue(iedServer, IEDMODEL_B1CTR_LPHD1_NamPlt_lnNs, "IEC 61850-7-4:2007");

    // Configurando modelos de controle
    IedServer_updateCtlModel(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos, CONTROL_MODEL_DIRECT_NORMAL);
    IedServer_updateCtlModel(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos, CONTROL_MODEL_DIRECT_NORMAL);
    IedServer_updateCtlModel(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos, CONTROL_MODEL_DIRECT_NORMAL);
    IedServer_updateCtlModel(iedServer, IEDMODEL_B1HYD_CELXSWI1_Pos, CONTROL_MODEL_DIRECT_NORMAL);
    IedServer_updateCtlModel(iedServer, IEDMODEL_B1HYD_TNKXSWI1_Pos, CONTROL_MODEL_DIRECT_NORMAL);
    IedServer_updateCtlModel(iedServer, IEDMODEL_B1HYD_KVLV1_Pos, CONTROL_MODEL_DIRECT_NORMAL);
    IedServer_updateCtlModel(iedServer, IEDMODEL_B1STG_XSWI1_Pos, CONTROL_MODEL_DIRECT_NORMAL);

    // Registrando Handlers
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

    IedServer_setControlHandler(iedServer, IEDMODEL_B1HYD_KVLV1_Pos, (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1HYD_KVLV1_Pos);
    IedServer_setPerformCheckHandler(iedServer, IEDMODEL_B1HYD_KVLV1_Pos, checkHandler, IEDMODEL_B1HYD_KVLV1_Pos);
    IedServer_handleWriteAccess(iedServer, IEDMODEL_B1HYD_KVLV1_Pos_ctlModel, writeAccessHandler, NULL);

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

    LOG_PRINT("\n--- SERVIDOR IEC 61850 MoveUFF ---\n");
    LOG_PRINT("[STATUS] Hardware OK (Lanterna: P%d | Motor: P%d | Alarme: P%d | Celula: P%d | Tanque: P%d | Trava: P%d)\n",
              RELAY_LANT_PIN, RELAY_MOT_PIN, RELAY_ALM_PIN, RELAY_CEL_PIN, RELAY_TNK_PIN, RELAY_XSWI_PIN);
    LOG_PRINT("[STATUS] Rodando na porta %d.\n", tcpPort);
    LOG_PRINT("[STATUS] Aguardando conexao do Elipse...\n");
    running = 1;

    Thread registrationThread = Thread_create((ThreadExecutionFunction)gateway_registration_thread, &registrationTask, true);
    Thread_start(registrationThread);

    Thread sensorThread = Thread_create((ThreadExecutionFunction)sensor_thread, NULL, true);
    Thread_start(sensorThread);

    Thread gpsThread = Thread_create((ThreadExecutionFunction)gps_thread, NULL, true);
    Thread_start(gpsThread);

    while (running) Thread_sleep(100);

    LOG_PRINT("\n[SISTEMA] Encerrando servidor e desarmando reles...\n");

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
