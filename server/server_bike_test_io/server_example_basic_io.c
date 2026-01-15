/*
 * server_example_basic_io.c
 * Servidor B1EBK - Foco: BOTÃO DE ALARME (ALMXSWI2)
 * Modo: Simulação (Sem instrumentação física)
 * CORRIGIDO: Erro de compilação no lockDataModel
 */

#include "iec61850_server.h"
#include "hal_thread.h"
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <pthread.h> 

/* Importa o modelo B1EBK */
#include "static_model.h"

static int running = 0;
static IedServer iedServer = NULL;

void sigint_handler(int signalId) {
    running = 0;
}

/* ==================================================================
 * SIMULAÇÃO DE HARDWARE (Botão e Sirene)
 * ================================================================== */

/* Simula a Sirene/Buzina */
void acionar_sirene_fisica(bool ligar) {
    if (ligar) {
        printf("\n>>> [HARDWARE] SIRENE: LIGADA (BEEP BEEP!) <<<\n");
    } else {
        printf("\n>>> [HARDWARE] SIRENE: DESLIGADA (Silencio) <<<\n");
    }
}

/* * Simula a leitura do pino do botão.
 * Retorna 0 (Solto) ou 1 (Pressionado).
 * Mude para 'return 1' e recompile se quiser testar o disparo automático.
 */
int ler_botao_alarme() {
    return 0; // 0 = Botão solto
}

/* Thread que vigia o botão do alarme em paralelo */
void* thread_botao_alarme(void* arg) {
    printf("[THREAD] Monitoramento do Botao de Alarme iniciado...\n");
    
    int estado_anterior = 0;

    while (running) {
        int estado_atual = ler_botao_alarme();

        // Detecta borda de subida (quando aperta o botão)
        if (estado_atual == 1 && estado_anterior == 0) {
            printf("[BOTAO] Alarme acionado manualmente no guidao!\n");
            
            // 1. Atua no Hardware Imediatamente
            acionar_sirene_fisica(true);

            // 2. Atualiza o Supervisório (IEC 61850)
            if (iedServer != NULL) {
                IedServer_lockDataModel(iedServer);
                
                uint64_t timeStamp = Hal_getTimeInMs();
                
                // Valor 2 = ON (Closed/Ativo) no padrão DbPos
                MmsValue* valOn = MmsValue_newIntegerFromInt32(2); 
                
                IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_ALMXSWI2_Pos_t, timeStamp);
                IedServer_updateAttributeValue(iedServer, IEDMODEL_B1EBK_ALMXSWI2_Pos_stVal, valOn);
                
                IedServer_unlockDataModel(iedServer);
                MmsValue_delete(valOn);
                
                printf("[IEC61850] Modelo atualizado: ALMXSWI2 -> ON (2)\n");
            }
        }
        
        estado_anterior = estado_atual;
        Thread_sleep(100); // Verifica a cada 100ms
    }
    return NULL;
}

/* ==================================================================
 * HANDLERS DE CONTROLE (Comando Remoto -> Hardware)
 * ================================================================== */

/* Handler para Posição (Ligar/Desligar Alarme Remotamente) */
static ControlHandlerResult
controlHandlerForDbpos(ControlAction action, void* parameter, MmsValue* value, bool test)
{
    if (test) return CONTROL_RESULT_FAILED;
    if (MmsValue_getType(value) != MMS_INTEGER) return CONTROL_RESULT_FAILED;

    int32_t val = MmsValue_toInt32(value); // 1=OFF, 2=ON
    
    printf("[REDE] Comando recebido para ALARME: %d (%s)\n", val, (val==2)?"LIGAR":"DESLIGAR");

    /* Validação */
    if (val != 1 && val != 2) return CONTROL_RESULT_FAILED;

    uint64_t timeStamp = Hal_getTimeInMs();

    /* Lógica Específica do ALMXSWI2 */
    if (parameter == IEDMODEL_B1EBK_ALMXSWI2_Pos_stVal) {
        
        // 1. Atualiza o Modelo Digital
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_ALMXSWI2_Pos_t, timeStamp);
        IedServer_updateAttributeValue(iedServer, IEDMODEL_B1EBK_ALMXSWI2_Pos_stVal, value);

        // 2. Atua no Hardware Simulado
        if (val == 2) {
            acionar_sirene_fisica(true); // 2 = ON
        } else {
            acionar_sirene_fisica(false); // 1 = OFF
        }
    }

    return CONTROL_RESULT_OK;
}

/* Handler genérico para Bloqueios (Obrigatório para XSWI) */
static ControlHandlerResult
controlHandlerForBinaryOutput(ControlAction action, void* parameter, MmsValue* value, bool test)
{
    /* Apenas atualiza o valor */
    if (test) return CONTROL_RESULT_FAILED;
    
    DataAttribute* attr = (DataAttribute*) parameter;
    IedServer_updateAttributeValue(iedServer, attr, value);
    
    return CONTROL_RESULT_OK;
}

static void connectionHandler(IedServer self, ClientConnection connection, bool connected, void* parameter) {
    if (connected) printf(">> Cliente Conectado ao Alarme <<\n");
    else printf("<< Cliente Desconectado >>\n");
}

/* ==================================================================
 * MAIN
 * ==================================================================
 */
int main(int argc, char** argv) {
    int tcpPort = 102;
    if (argc > 1) tcpPort = atoi(argv[1]);

    printf("--- SERVIDOR DE ALARME (B1EBK) INICIADO ---\n");

    IedServerConfig config = IedServerConfig_create();
    IedServerConfig_setFileServiceBasePath(config, "./vmd-filestore/");
    IedServerConfig_enableDynamicDataSetService(config, true);

    iedServer = IedServer_createWithConfig(&iedModel, NULL, config);
    IedServerConfig_destroy(config);

    IedServer_setServerIdentity(iedServer, "MoveUFF", "AlarmServer", "1.0");

    /* REGISTRO DOS HANDLERS (Apenas ALMXSWI2) */
    
    // Controle Principal (Ligar/Desligar Sirene)
    IedServer_setControlHandler(iedServer, IEDMODEL_B1EBK_ALMXSWI2_Pos, 
        (ControlHandler) controlHandlerForDbpos, IEDMODEL_B1EBK_ALMXSWI2_Pos_stVal);

    // Controles de Bloqueio (Obrigatórios)
    IedServer_setControlHandler(iedServer, IEDMODEL_B1EBK_ALMXSWI2_BlkOpn, 
        (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1EBK_ALMXSWI2_BlkOpn_stVal);
    
    IedServer_setControlHandler(iedServer, IEDMODEL_B1EBK_ALMXSWI2_BlkCls, 
        (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1EBK_ALMXSWI2_BlkCls_stVal);

    IedServer_setConnectionIndicationHandler(iedServer, (IedConnectionIndicationHandler) connectionHandler, NULL);

    IedServer_start(iedServer, tcpPort);

    if (!IedServer_isRunning(iedServer)) {
        printf("Erro ao iniciar (use sudo)\n");
        IedServer_destroy(iedServer);
        exit(-1);
    }

    /* Inicia Thread do Botão */
    pthread_t threadId;
    pthread_create(&threadId, NULL, thread_botao_alarme, NULL);

    /* Inicializa Valores (Alarme começa DESLIGADO = 1) */
    /* CORREÇÃO: Removido o 'if' pois a função é void */
    IedServer_lockDataModel(iedServer);
    IedServer_updateInt32AttributeValue(iedServer, IEDMODEL_B1EBK_ALMXSWI2_Pos_stVal, 1);
    IedServer_unlockDataModel(iedServer);

    printf("Sistema de Alarme Operante.\n");

    running = 1;
    signal(SIGINT, sigint_handler);

    while (running) {
        Thread_sleep(100);
    }

    IedServer_stop(iedServer);
    IedServer_destroy(iedServer);
    return 0;
}