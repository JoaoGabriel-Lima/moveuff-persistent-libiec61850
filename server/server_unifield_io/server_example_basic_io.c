#include "iec61850_server.h"
#include "hal_thread.h"
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h> 
#include <wiringSerial.h>
#include <string.h>
#include <wiringPi.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <time.h>

#define RELAY_MOT_PIN  24  // wPi 6 = Pino Físico 12 (Motor)
#define RELAY_ALM_PIN  9   // wPi 9 = Pino Físico 16 (Alarme)
#define RELAY_XSWI_PIN 10  // wPi 10 = Pino Físico 18 (Trava da Bateria)

#define RELAY_CEL_PIN  21  // wPi 21 = Pino Físico 31 (Célula)
#define RELAY_TNK_PIN  8   // wPi 8  = Pino Físico 15 (Tanque)
#define RELAY_LANT_PIN 23  // wPi 13 = Pino Físico 22 (Lanterna)

#include "static_model.h"

static int running = 0;
static IedServer iedServer = NULL;
static int activeConnections = 0;

void sigint_handler(int signalId) { running = 0; }

#define LOG_PRINT(...) fprintf(stderr, __VA_ARGS__)

void sinalizar_partida() {
    for(int i=0; i<2; i++) {
        digitalWrite(RELAY_LANT_PIN, HIGH); digitalWrite(RELAY_MOT_PIN, HIGH);
        digitalWrite(RELAY_ALM_PIN, HIGH); digitalWrite(RELAY_CEL_PIN, HIGH);
        digitalWrite(RELAY_TNK_PIN, HIGH); digitalWrite(RELAY_XSWI_PIN, HIGH);
        Thread_sleep(100);          
        digitalWrite(RELAY_LANT_PIN, LOW); digitalWrite(RELAY_MOT_PIN, LOW);
        digitalWrite(RELAY_ALM_PIN, LOW); digitalWrite(RELAY_CEL_PIN, LOW);
        digitalWrite(RELAY_TNK_PIN, LOW); digitalWrite(RELAY_XSWI_PIN, LOW);
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

        if (parameter == IEDMODEL_B1EBK_LANTXSWI1_Pos) digitalWrite(RELAY_LANT_PIN, state ? HIGH : LOW);
        else if (parameter == IEDMODEL_B1EBK_MOTXSWI1_Pos) digitalWrite(RELAY_MOT_PIN, state ? HIGH : LOW);
        else if (parameter == IEDMODEL_B1STG_XSWI1_Pos) digitalWrite(RELAY_XSWI_PIN, state ? HIGH : LOW);
        // Descomente e ajuste a constante se possuir o pino físico real da válvula
        // else if (parameter == IEDMODEL_B1HYD_KVLV1_Pos) digitalWrite(RELAY_VLV_PIN, state ? HIGH : LOW);

        IedServer_updateAttributeValue(iedServer, (DataAttribute*)parameter, value);
        IedServer_updateUTCTimeAttributeValue(iedServer, (DataAttribute*)parameter + 2, timestamp); 

        return CONTROL_RESULT_OK;
    }
    return CONTROL_RESULT_FAILED;
}

static MmsDataAccessError writeAccessHandler(DataAttribute* dataAttribute, MmsValue* value, ClientConnection connection, void* parameter) {
    ControlModel ctlModelVal = (ControlModel) MmsValue_toInt32(value);
    if ((ctlModelVal == CONTROL_MODEL_STATUS_ONLY) || (ctlModelVal == CONTROL_MODEL_DIRECT_NORMAL)) {
        IedServer_updateCtlModel(iedServer, (DataObject*)dataAttribute->parent, ctlModelVal);
        return DATA_ACCESS_ERROR_SUCCESS;
    }
    return DATA_ACCESS_ERROR_OBJECT_VALUE_INVALID;
}

/* =================================================================
 * THREAD DE GPS SIMULADO (FIXO)
 * ================================================================= */
void* gps_thread(void* arg) {
    LOG_PRINT("[GPS] Iniciando Simulacao de GPS (Fixo: UFF Niteroi)\n");
    while (running) {
        uint64_t ts = Hal_getTimeInMs();
        IedServer_lockDataModel(iedServer);
        
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1EBK_TLOC1_GeoLoc_latitude, -22.906800f);
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1EBK_TLOC1_GeoLoc_longitude, -43.133200f);
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_TLOC1_GeoLoc_t, ts);
        
        IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_B1EBK_TLOC1_NavFai_stVal, false);
        IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_B1EBK_TLOC1_SatAvl_stVal, true);
        
        IedServer_unlockDataModel(iedServer);
        Thread_sleep(5000);
    }
    return NULL;
}

/* =================================================================
 * THREAD DE SIMULACAO GLOBAL (MEDIÇÕES E STATUS ABRUPTOS)
 * ================================================================= */
void* sensor_thread(void* arg) {
    LOG_PRINT("[STATUS] Simulacao Global de Sensores (MX/ST) Iniciada...\n");
    srand(time(NULL));

    // Variáveis persistentes com controle de direção (1 para subir, -1 para descer)
    float rpm_mag    = 150.0f; int rpm_dir = 1;
    float t_bat_inst = 32.0f;  int t_bat_dir = 1;
    float v_bat_mag  = 0.0f;   int v_bat_dir = 1; // Vai de 0 a 24
    float i_bat_mag  = 0.0f;   int i_bat_dir = 1; // Vai de 0 a 5
    float soc        = 0.0f;   int soc_dir = 1;   // Vai de 0 a 100
    float t_h2_mag   = 45.0f;  int t_h2_dir = 1;
    float v_rte_mag  = 0.0f;
    float t_rte_mag  = 0.0f;

    while (running) {
        uint64_t ts = Hal_getTimeInMs();
        float step;
        
        // --- LÓGICA DE VARIAÇÃO ABRUPTA TIPO "SENOIDE" (PULOS DE 3 A 5) ---
        
        // Tensão da Bateria (0 a 24V)
        step = (float)((rand() % 3) + 3); 
        v_bat_mag += step * v_bat_dir;
        if (v_bat_mag >= 24.0f) { v_bat_mag = 24.0f; v_bat_dir = -1; } // Bateu no teto, desce
        if (v_bat_mag <= 0.0f)  { v_bat_mag = 0.0f;  v_bat_dir = 1; }  // Bateu no chão, sobe

        // Corrente da Bateria (0 a 5A)
        step = (float)((rand() % 3) + 3); 
        i_bat_mag += step * i_bat_dir;
        if (i_bat_mag >= 5.0f) { i_bat_mag = 5.0f; i_bat_dir = -1; }
        if (i_bat_mag <= 0.0f) { i_bat_mag = 0.0f; i_bat_dir = 1; }

        // SOC (0 a 100%)
        step = (float)((rand() % 3) + 3);
        soc += step * soc_dir;
        if (soc >= 100.0f) { soc = 100.0f; soc_dir = -1; }
        if (soc <= 0.0f)   { soc = 0.0f;   soc_dir = 1; }

        // RPM (0 a 300)
        step = (float)((rand() % 3) + 3);
        rpm_mag += step * rpm_dir;
        if (rpm_mag >= 300.0f) { rpm_mag = 300.0f; rpm_dir = -1; }
        if (rpm_mag <= 0.0f)   { rpm_mag = 0.0f;   rpm_dir = 1; }

        // Temperaturas
        step = (float)((rand() % 3) + 3);
        t_bat_inst += step * t_bat_dir;
        if (t_bat_inst >= 60.0f) { t_bat_inst = 60.0f; t_bat_dir = -1; }
        if (t_bat_inst <= 10.0f) { t_bat_inst = 10.0f; t_bat_dir = 1; }
        float t_bat_mag = t_bat_inst - 0.5f;

        step = (float)((rand() % 3) + 3);
        t_h2_mag += step * t_h2_dir;
        if (t_h2_mag >= 80.0f) { t_h2_mag = 80.0f; t_h2_dir = -1; }
        if (t_h2_mag <= 20.0f) { t_h2_mag = 20.0f; t_h2_dir = 1; }

        // Rates
        v_rte_mag = (float)((rand() % 3) + 3) * ((rand() % 2 == 0) ? 1.0f : -1.0f);
        t_rte_mag = (float)((rand() % 3) + 3) * ((rand() % 2 == 0) ? 1.0f : -1.0f);
        
        // Cálculos Secundários
        float watt_mag   = v_bat_mag * i_bat_mag;
        float ah_cha_mag = 100.0f; 
        float ah_dis_mag = 15.4f;
        int cha_st       = (v_bat_dir == 1) ? 2 : 3; // 2=Charging se a tensão sobe, 3=Discharging se desce

        // Simulações Hidrogênio (Célula e Tanque)
        float h2_out_dcv = v_bat_mag + 5.0f; // Célula entrega um pouco mais de tensão
        float h2_out_dca = i_bat_mag + 2.0f;
        float h2_in_cl_t = t_h2_mag - 10.0f;
        float h2_in_pres = 2.0f + ((float)rand()/(float)RAND_MAX) * 1.5f;
        float tank_vol   = soc * 0.2f; // Volume proporcional ao SOC para simular

        IedServer_lockDataModel(iedServer);
        
        // --- Atualizando TMVM1 ---
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1EBK_TMVM1_MvmRteSv_mag_f, rpm_mag);

        // --- Atualizando TTMP1 (Bateria) ---
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1STG_TTMP1_TmpSv_instMag_f, t_bat_inst);
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1STG_TTMP1_TmpSv_mag_f, t_bat_mag);

        // --- Atualizando ZBAT1 ---
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1STG_ZBAT1_Vol_mag_f, v_bat_mag);
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1STG_ZBAT1_Amp_mag_f, i_bat_mag);
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1STG_ZBAT1_VolChgRte_mag_f, v_rte_mag);

        // --- Atualizando DBAT1 ---
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1STG_DBAT1_Amp_mag_f, i_bat_mag);
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1STG_DBAT1_Watt_mag_f, watt_mag);
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1STG_DBAT1_AvlChaAhr_mag_f, ah_cha_mag);
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1STG_DBAT1_AvlDschAhr_mag_f, ah_dis_mag);
        IedServer_updateInt32AttributeValue(iedServer, IEDMODEL_B1STG_DBAT1_ChaSt_stVal, cha_st);
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1STG_DBAT1_SocPro_stVal, soc);

        // --- Atualizando STMP1 ---
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1HYD_STMP1_Tmp_mag_f, t_h2_mag);
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1HYD_STMP1_TmpRte_mag_f, t_rte_mag);

        // --- Atualizando MMXU1 ---
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1EBK_MMXU1_TotW_mag_f, watt_mag);

        // --- Atualizando DSTK1 (Célula de Hidrogênio) ---
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1HYD_DSTK1_OutDCV_mag_f, h2_out_dcv);
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1HYD_DSTK1_OutDCA_mag_f, h2_out_dca);
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1HYD_DSTK1_InClTmp_mag_f, h2_in_cl_t);
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1HYD_DSTK1_InH2Pres_mag_f, h2_in_pres);

        // --- Atualizando KTNK1 (Tanque de Hidrogênio) ---
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1HYD_KTNK1_LevPct_mag_f, soc);
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1HYD_KTNK1_LevPct_subMag_f, soc);
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1HYD_KTNK1_Vlm_mag_f, tank_vol);
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1HYD_KTNK1_Vlm_subMag_f, tank_vol);


        // --- Timestamps Globais ---
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1STG_ZBAT1_Vol_t, ts);
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1HYD_STMP1_Tmp_t, ts);
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_TMVM1_MvmRteSv_t, ts);

        IedServer_unlockDataModel(iedServer);


        // --- REPORTS SIMPLIFICADOS PELO TERMINAL ---
        LOG_PRINT("\n[DADOS SIMULADOS]\n");
        LOG_PRINT(" > TMVM1 (Motor):  Mag:%.1f RPM\n", rpm_mag);
        LOG_PRINT(" > TTMP1 (BatTmp): Mag:%.1f C\n", t_bat_mag);
        LOG_PRINT(" > ZBAT1 (BatFis): Mag Vol:%.2f V | Mag Amp:%.2f A\n", v_bat_mag, i_bat_mag);
        LOG_PRINT(" > DBAT1 (BatPrc): Amp:%.2f A | Watt:%.1f W | AvlCha:%.1f Ah | AvlDsch:%.1f Ah | ChaSt:%d | SOC:%.1f%%\n", i_bat_mag, watt_mag, ah_cha_mag, ah_dis_mag, cha_st, soc);
        LOG_PRINT(" > STMP1 (H2Tmp):  Mag Temp:%.1f C\n", t_h2_mag);
        LOG_PRINT(" > MMXU1 (Med):    TotW Mag:%.1f W\n", watt_mag);
        LOG_PRINT(" > DSTK1 (Celula): OutDCV:%.1f V | OutDCA:%.1f A | InClTmp:%.1f C | InH2Pres:%.2f bar\n", h2_out_dcv, h2_out_dca, h2_in_cl_t, h2_in_pres);
        LOG_PRINT(" > KTNK1 (Tanque): LevPct:%.1f %% | Vlm:%.1f L\n", soc, tank_vol);
        
        Thread_sleep(2000); 
    }
    return NULL;
}

static const char* getenv_or_default(const char* name, const char* defaultValue) {
    const char* value = getenv(name);
    if (value == NULL || value[0] == '\0') return defaultValue;
    return value;
}

static int register_with_gateway(int mmsPort) {
    const char* bikeUuid = getenv("MOVEUFF_BIKE_UUID");
    const char* gatewayHost = getenv_or_default("MOVEUFF_GATEWAY_HOST", "127.0.0.1");
    const char* gatewayPortText = getenv_or_default("MOVEUFF_GATEWAY_PORT", "8000");
    const char* bikeHost = getenv_or_default("MOVEUFF_BIKE_HOST", "127.0.0.1");
    const char* token = getenv_or_default("MOVEUFF_REGISTRATION_TOKEN", "moveuff-dev-token");
    int gatewayPort = atoi(gatewayPortText);

    if (bikeUuid == NULL || bikeUuid[0] == '\0') {
        LOG_PRINT("[REGISTRO] MOVEUFF_BIKE_UUID nao definido. Registro automatico ignorado.\n");
        return -1;
    }

    if (gatewayPort <= 0 || gatewayPort > 65535) {
        LOG_PRINT("[REGISTRO] MOVEUFF_GATEWAY_PORT invalido: %s\n", gatewayPortText);
        return -1;
    }

    int sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock < 0) {
        LOG_PRINT("[REGISTRO] Falha ao criar socket HTTP.\n");
        return -1;
    }

    struct sockaddr_in gatewayAddr;
    memset(&gatewayAddr, 0, sizeof(gatewayAddr));
    gatewayAddr.sin_family = AF_INET;
    gatewayAddr.sin_port = htons((uint16_t) gatewayPort);

    if (inet_pton(AF_INET, gatewayHost, &gatewayAddr.sin_addr) <= 0) {
        LOG_PRINT("[REGISTRO] MOVEUFF_GATEWAY_HOST precisa ser IPv4 valido: %s\n", gatewayHost);
        close(sock);
        return -1;
    }

    if (connect(sock, (struct sockaddr*) &gatewayAddr, sizeof(gatewayAddr)) < 0) {
        LOG_PRINT("[REGISTRO] Gateway indisponivel em %s:%d. Registro sera tentado no proximo start.\n", gatewayHost, gatewayPort);
        close(sock);
        return -1;
    }

    char body[768];
    int bodyLen = snprintf(body, sizeof(body),
        "{\"uuid\":\"%s\",\"host\":\"%s\",\"port\":%d,\"metadata\":{\"source\":\"server_unifield_io\"}}",
        bikeUuid, bikeHost, mmsPort);

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
        gatewayHost, gatewayPort, token, bodyLen, body);

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
        LOG_PRINT("[REGISTRO] Bike %s registrada no gateway %s:%d como %s:%d.\n", bikeUuid, gatewayHost, gatewayPort, bikeHost, mmsPort);
        return 0;
    }

    LOG_PRINT("[REGISTRO] Gateway recusou registro. Resposta: %.80s\n", response);
    return -1;
}

int main(int argc, char** argv) {
    if (wiringPiSetup() == -1) exit(1);
    pinMode(RELAY_LANT_PIN, OUTPUT); pinMode(RELAY_MOT_PIN, OUTPUT); 
    pinMode(RELAY_ALM_PIN, OUTPUT); pinMode(RELAY_CEL_PIN, OUTPUT); 
    pinMode(RELAY_TNK_PIN, OUTPUT); pinMode(RELAY_XSWI_PIN, OUTPUT); 

    int dev_null = open("/dev/null", O_WRONLY);
    if (dev_null != -1) dup2(dev_null, STDOUT_FILENO); 

    sinalizar_partida();
    iedServer = IedServer_create(&iedModel);
    int tcpPort = (argc > 1) ? atoi(argv[1]) : 102;

    // LPHD1 Namespace Configuration
    IedServer_updateVisibleStringAttributeValue(iedServer, IEDMODEL_B1CTR_LPHD1_NamPlt_lnNs, "IEC 61850-7-4:2007");

    // Configurando modelos de controle
    IedServer_updateCtlModel(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos, CONTROL_MODEL_DIRECT_NORMAL);
    IedServer_updateCtlModel(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos, CONTROL_MODEL_DIRECT_NORMAL);
    IedServer_updateCtlModel(iedServer, IEDMODEL_B1HYD_KVLV1_Pos, CONTROL_MODEL_DIRECT_NORMAL);
    IedServer_updateCtlModel(iedServer, IEDMODEL_B1STG_XSWI1_Pos, CONTROL_MODEL_DIRECT_NORMAL);

    // Registrando Handlers
    IedServer_setControlHandler(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos, (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1EBK_LANTXSWI1_Pos);
    IedServer_setControlHandler(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos, (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1EBK_MOTXSWI1_Pos);
    IedServer_setControlHandler(iedServer, IEDMODEL_B1HYD_KVLV1_Pos, (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1HYD_KVLV1_Pos);
    IedServer_setControlHandler(iedServer, IEDMODEL_B1STG_XSWI1_Pos, (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1STG_XSWI1_Pos);

    IedServer_start(iedServer, tcpPort);
    if (!IedServer_isRunning(iedServer)) { IedServer_destroy(iedServer); exit(-1); }

    LOG_PRINT("\n--- SERVIDOR MoveUFF ATIVO (Bancada Virtual Completa) ---\n");
    running = 1;

    Thread simThread = Thread_create((ThreadExecutionFunction)sensor_thread, NULL, true);
    Thread_start(simThread);

    Thread gpsSimThread = Thread_create((ThreadExecutionFunction)gps_thread, NULL, true);
    Thread_start(gpsSimThread);

    while (running) Thread_sleep(100);

    IedServer_stop(iedServer);
    IedServer_destroy(iedServer);
    return 0;
}
