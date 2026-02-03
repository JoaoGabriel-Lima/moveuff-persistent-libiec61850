/*
 * server_example_basic_io.c
 * Com CheckHandler para permitir SBO (Select-Before-Operate)
 */

#include "iec61850_server.h"
#include "hal_thread.h"
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include "static_model.h"

/* --- HARDWARE --- */
#define PIN_MOTOR "1" 
#define CMD_MOTOR_LIGAR    "gpio write " PIN_MOTOR " 0" 
#define CMD_MOTOR_DESLIGAR "gpio write " PIN_MOTOR " 1" 

static int running = 0;
static IedServer iedServer = NULL;
static int ultimo_estado_motor = -1; 

void sigint_handler(int signalId) { running = 0; }

void hardware_atuar_motor(bool ligar) {
    if (ligar) system(CMD_MOTOR_LIGAR);
    else system(CMD_MOTOR_DESLIGAR);
}

/* --- VIGIA (Loop que atua no Hardware) --- */
void verificar_comando_motor() {
    IedServer_lockDataModel(iedServer);
    MmsValue* mmsVal = IedServer_getAttributeValue(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos_stVal);
    int valor_atual = -1;
    if (mmsVal != NULL) valor_atual = MmsValue_toInt32(mmsVal);
    IedServer_unlockDataModel(iedServer);

    if (valor_atual != -1 && valor_atual != ultimo_estado_motor) {
        printf("\n===========================================\n");
        printf(">>> [VIGIA] MUDANÇA DE ESTADO DETECTADA: %d\n", valor_atual);
        
        if (valor_atual == 2) { // 2 = FECHADO = ON
            printf("    AÇÃO: LIGAR MOTOR (ON) \n");
            hardware_atuar_motor(true);
        } 
        else if (valor_atual == 1) { // 1 = ABERTO = OFF
            printf("    AÇÃO: DESLIGAR MOTOR (OFF) \n");
            hardware_atuar_motor(false);
        }
        else {
            printf("    AÇÃO: Estado Inválido (%d) - Nenhuma ação.\n", valor_atual);
        }
        printf("===========================================\n");
        
        ultimo_estado_motor = valor_atual;
    }
}

static bool controlBlockAccessHandler(void* parameter, ClientConnection connection, ACSIClass acsiClass, LogicalDevice* ld, LogicalNode* ln, const char* objectName, const char* subObjectName, IedServer_ControlBlockAccessType accessType) {
    return true; 
}

/* * --- O PORTEIRO (CheckHandler) ---
 * Necessário para o protocolo SBO. Ele autoriza o comando.
 */
static CheckHandlerResult checkHandler(ControlAction action, void* parameter, MmsValue* ctlVal, bool test, bool interlockCheck) {
    printf("[CHECK] Recebido pedido de acesso (Select/Operate)... AUTORIZADO.\n");
    return CONTROL_ACCEPTED; // Autoriza o cliente a prosseguir
}

/* * --- SECRETÁRIO (O TRADUTOR) ---
 * Recebe o comando do Elipse e converte para o formato certo.
 */
static ControlHandlerResult controlHandlerForDbpos(ControlAction action, void* parameter, MmsValue* value, bool test) {
    if (test) return CONTROL_RESULT_FAILED;

    printf("\n[REDE] Pacote OPERATE recebido. Analisando...\n");

    int novo_status = 0;

    // 1. Verifica se o Elipse mandou Booleano (TRUE/FALSE)
    if (MmsValue_getType(value) == MMS_BOOLEAN) {
        bool comando = MmsValue_getBoolean(value);
        printf("   > Tipo: BOOLEAN | Valor: %s\n", comando ? "TRUE" : "FALSE");
        
        // TRADUÇÃO: TRUE -> 2 (Ligar), FALSE -> 1 (Desligar)
        if (comando == true) novo_status = 2;
        else novo_status = 1;
    }
    // 2. Verifica se o Elipse mandou Inteiro Direto (1 ou 2)
    else if (MmsValue_getType(value) == MMS_INTEGER) {
        novo_status = MmsValue_toInt32(value);
        printf("   > Tipo: INTEGER | Valor: %d\n", novo_status);
    }
    else {
        printf("   > Tipo Desconhecido! Ignorando.\n");
        return CONTROL_RESULT_FAILED;
    }

    // 3. Atualiza a memória com o valor TRADUZIDO (Inteiro)
    uint64_t t = Hal_getTimeInMs();
    IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos_t, t);
    
    // Cria um objeto inteiro temporário para salvar no Status
    MmsValue* status_final = MmsValue_newIntegerFromInt32(novo_status);
    IedServer_updateAttributeValue(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos_stVal, status_final);
    MmsValue_delete(status_final); // Limpa a memória temporária

    printf("   > Memória Atualizada para: %d\n", novo_status);
    return CONTROL_RESULT_OK;
}

static void connectionHandler(IedServer self, ClientConnection connection, bool connected, void* parameter) {
    if (connected) printf(">> [REDE] Cliente Conectado\n");
    else printf("<< [REDE] Cliente Desconectado\n");
}

int main(int argc, char** argv) {
    printf("--- SERVIDOR BIKE H2 (Versão Corrigida FINAL) ---\n");
    char cmd[50]; sprintf(cmd, "gpio mode %s out", PIN_MOTOR); system(cmd);
    
    IedServerConfig config = IedServerConfig_create();
    IedServerConfig_setFileServiceBasePath(config, "./vmd-filestore/");
    IedServerConfig_enableDynamicDataSetService(config, true);
    IedServerConfig_setReportBufferSize(config, 200000);

    iedServer = IedServer_createWithConfig(&iedModel, NULL, config);
    IedServerConfig_destroy(config);
    IedServer_setServerIdentity(iedServer, "MoveUFF", "BikeH2", "1.0");

    /* REGISTRO DOS HANDLERS */
    
    // 1. Handler de Operação (Executa a ação)
    IedServer_setControlHandler(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos, (ControlHandler) controlHandlerForDbpos, IEDMODEL_B1EBK_MOTXSWI1_Pos_stVal);
    
    // 2. Handler de Checagem (Autoriza a Seleção/Select)
    IedServer_setPerformCheckHandler(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos, checkHandler, IEDMODEL_B1EBK_MOTXSWI1_Pos_stVal);

    IedServer_setConnectionIndicationHandler(iedServer, (IedConnectionIndicationHandler) connectionHandler, NULL);
    IedServer_setControlBlockAccessHandler(iedServer, controlBlockAccessHandler, NULL);
    IedServer_setWriteAccessPolicy(iedServer, IEC61850_FC_ALL, ACCESS_POLICY_ALLOW);

    IedServer_start(iedServer, 102);
    if (!IedServer_isRunning(iedServer)) { printf("Erro Porta 102 (Use sudo)\n"); exit(-1); }

    running = 1; signal(SIGINT, sigint_handler);
    
    // Força atualização inicial para sincronização do estado do motor
    IedServer_lockDataModel(iedServer);
    MmsValue* initVal = IedServer_getAttributeValue(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos_stVal);
    if (initVal) ultimo_estado_motor = MmsValue_toInt32(initVal);
    else ultimo_estado_motor = 0;
    IedServer_unlockDataModel(iedServer);

    printf("Servidor pronto. Aguardando comando...\n");
    
    while (running) {
        verificar_comando_motor();
        Thread_sleep(100);
    }
    
    hardware_atuar_motor(false);
    IedServer_stop(iedServer);
    IedServer_destroy(iedServer);
    return 0;
}