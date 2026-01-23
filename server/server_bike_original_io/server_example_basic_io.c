/*
 * server_example_basic_io.c
 * PROJETO BIKE H2 - MoveUFF
 * 1. CONTROLE: Atua no Relé do Motor (MOTXSWI1) via GPIO.
 * - Comando 'motor1' (Ligar) via GPIO HIGH
 * - Comando 'motor0' (Desligar/Corte) via GPIO LOW
 */

#include "iec61850_server.h"
#include "hal_thread.h"
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#include "static_model.h"

/* --- CONFIGURAÇÃO DE HARDWARE --- */
/* Defina aqui o comando real do sistema. 
 * O system() não enxerga 'alias' do .bashrc, então usamos o comando completo.
 */
#define PIN_MOTOR "1" 
#define CMD_MOTOR_LIGAR    "gpio write " PIN_MOTOR " 0"  // Equivalente ao 'motor0' (Corte)
#define CMD_MOTOR_DESLIGAR "gpio write " PIN_MOTOR " 1"  // Equivalente ao 'motor1' (Habilitar)

static int running = 0;
static IedServer iedServer = NULL;
static int ultimo_estado_motor = -1; 

void sigint_handler(int signalId) {
    running = 0;
}

/* --- FUNÇÃO 1: ATUADOR (O "motor0" e "motor1") --- */
void hardware_atuar_motor(bool ligar) {
    if (ligar) {
        printf(">>> [HARDWARE] Executando: %s (Habilitar Motor) <<<\n", CMD_MOTOR_LIGAR);
        system(CMD_MOTOR_LIGAR);
    } else {
        printf(">>> [HARDWARE] Executando: %s (CORTAR Motor) <<<\n", CMD_MOTOR_DESLIGAR);
        system(CMD_MOTOR_DESLIGAR);
    }
}

/* --- FUNÇÃO 2: LEITURA DE SENSORES --- */
void atualizar_medicoes(IedServer server) {
    uint64_t timestamp = Hal_getTimeInMs();

   //AQUI VAMOS LER O JSON DO ADRIANO E ATUALIZAR OS VALORES

    /* Descomentar para debugar as leituras no terminal */
    // printf("[SENSOR] V: %.2f V | I: %.2f A | T: %.2f C\n", tensao, corrente, temperatura);
}

/* --- L[ogica de Controle --- */
void verificar_comando_motor() {
    IedServer_lockDataModel(iedServer);
    
    // Lê o estado atual do nó MOTXSWI1 (Posição)
    MmsValue* mmsVal = IedServer_getAttributeValue(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos_stVal);
    int valor_atual = -1;
    
    if (mmsVal != NULL) valor_atual = MmsValue_toInt32(mmsVal);
    
    IedServer_unlockDataModel(iedServer);

    // Se o valor mudou desde a última verificação, atua no hardware
    if (valor_atual != -1 && valor_atual != ultimo_estado_motor) {
        printf("\n[LOGICA] Comando recebido via Rede (Valor IEC: %d)\n", valor_atual);

        if (valor_atual == 1) {
            hardware_atuar_motor(true); // motor1
        } 
        else if (valor_atual == 2) {
            hardware_atuar_motor(false); // motor0
        }
        
        ultimo_estado_motor = valor_atual;
    }
}

/* --- HANDLERS IEC 61850 (Padrão) --- */
static ControlHandlerResult
controlHandlerForDbpos(ControlAction action, void* parameter, MmsValue* value, bool test)
{
    // Apenas aceita o comando e atualiza a memória. O Vigia atua no hardware.
    if (test) return CONTROL_RESULT_FAILED;

    uint64_t t = Hal_getTimeInMs();
    IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos_t, t);
    IedServer_updateAttributeValue(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos_stVal, value);

    return CONTROL_RESULT_OK;
}

static void connectionHandler(IedServer self, ClientConnection connection, bool connected, void* parameter) {
    if (connected) printf(">> Cliente Conectado <<\n");
    else printf("<< Cliente Desconectado >>\n");
}

/* --- MAIN --- */
int main(int argc, char** argv) {
    printf("--- SERVIDOR BIKE H2 (MOTXSWI1) ---\n");
    printf("--- Modo: Controle + Monitoramento ---\n");

    /* 1. Setup Inicial do Hardware */
    char cmd_config[50];
    sprintf(cmd_config, "gpio mode %s out", PIN_MOTOR);
    system(cmd_config);
    hardware_atuar_motor(true); // Estado Seguro Inicial: Ligado? Ou Desligado? Ajuste aqui.

    /* 2. Setup do Servidor IEC 61850 */
    IedServerConfig config = IedServerConfig_create();
    IedServerConfig_setFileServiceBasePath(config, "./vmd-filestore/");
    IedServerConfig_enableDynamicDataSetService(config, true);

    iedServer = IedServer_createWithConfig(&iedModel, NULL, config);
    IedServerConfig_destroy(config);
    IedServer_setServerIdentity(iedServer, "MoveUFF", "BikeH2", "1.0");

    /* Registra o Handler do Switch (MOTXSWI1) */
    IedServer_setControlHandler(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos, 
        (ControlHandler) controlHandlerForDbpos, IEDMODEL_B1EBK_MOTXSWI1_Pos_stVal);

    IedServer_setConnectionIndicationHandler(iedServer, (IedConnectionIndicationHandler) connectionHandler, NULL);
    
    // Permite escrita direta (para facilitar integração com SCADAs simples)
    IedServer_setWriteAccessPolicy(iedServer, IEC61850_FC_ALL, ACCESS_POLICY_ALLOW);

    IedServer_start(iedServer, 102);

    if (!IedServer_isRunning(iedServer)) {
        printf("Erro ao iniciar servidor (Use sudo!).\n");
        exit(-1);
    }

    // Estado Inicial da Lógica
    ultimo_estado_motor = 1; 
    
    running = 1;
    signal(SIGINT, sigint_handler);

    printf("Sistema Pronto. Loop principal iniciado.\n");

    /* --- LOOP PRINCIPAL --- */
    while (running) {
        
        // A. Verifica se precisa ligar/desligar o motor
        verificar_comando_motor();

        // B. Atualiza sensores (Tensão, Corrente, Temp)
        atualizar_medicoes(iedServer);

        Thread_sleep(100); // Ciclo de 100ms
    }

    // Shutdown seguro
    hardware_atuar_motor(false); // Garante motor desligado ao sair
    IedServer_stop(iedServer);
    IedServer_destroy(iedServer);
    return 0;
}