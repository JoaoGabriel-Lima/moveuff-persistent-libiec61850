/*
 * server_example_basic_io.c
 * OTIMIZADO PARA TESTES MANUAIS (AppBrowser / Driver List)
 * * Funcionalidade:
 * 1. Aceita escrita na tag .Operate (valor 1 ou 2).
 * 2. Atualiza automaticamente a tag .stVal (Status) para o AppBrowser ver a mudança.
 * 3. Atua no GPIO do Orange Pi.
 */

#include "iec61850_server.h"
#include "hal_thread.h"
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include "static_model.h"

/* --- CONFIGURAÇÃO FÍSICA --- */
/* Certifique-se que o pino 3 é o correto na sua placa */
#define PIN_MOTOR "3" 
#define CMD_LIGAR    "gpio write " PIN_MOTOR " 1"
#define CMD_DESLIGAR "gpio write " PIN_MOTOR " 0"

static int running = 0;
static IedServer iedServer = NULL;

void sigint_handler(int signalId) {
    running = 0;
}

/* * HANDLER DE CONTROLE
 * Este é o "porteiro". Quando você muda o valor no AppBrowser/Driver,
 * o Elipse bate nesta porta.
 */
static ControlHandlerResult
controlHandlerForMotor(ControlAction action, void* parameter, MmsValue* value, bool test)
{
    /* Nota: Removida a verificação de 'action' para evitar erros de versão da lib */

    // 1. LER O VALOR QUE VOCÊ DIGITOU NO ELIPSE
    int valor_recebido = MmsValue_toInt32(value);
    
    printf("\n=========================================\n");
    printf("[AppBrowser] Comando Recebido! Valor: %d\n", valor_recebido);

    // 2. ATUAR NO HARDWARE (Lógica Inversa ou Direta conforme necessidade)
    if (valor_recebido == 2) { 
        printf(" -> ACAO: LIGAR (Comando 2 / Fechado)\n");
        system(CMD_LIGAR);
    }
    else if (valor_recebido == 1) {
        printf(" -> ACAO: DESLIGAR (Comando 1 / Aberto)\n");
        system(CMD_DESLIGAR);
    }
    else {
        printf(" -> ERRO: Valor estranho (%d). Ignorando.\n", valor_recebido);
        return CONTROL_RESULT_FAILED;
    }

    // 3. FEEDBACK PARA O ELIPSE (Essencial para o AppBrowser atualizar)
    // Se não fizermos isso, o valor no Elipse volta para o anterior.
    
    uint64_t t = Hal_getTimeInMs();
    
    // Atualiza o Timestamp
    IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos_t, t);
    
    // Atualiza o Status (stVal) para igualar o Comando
    IedServer_updateAttributeValue(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos_stVal, value);

    printf(" -> Feedback enviado para o Elipse (Status Atualizado)\n");
    printf("=========================================\n");

    return CONTROL_RESULT_OK;
}

/* HANDLER DE CONEXÃO (Apenas para log) */
static void connectionHandler(IedServer self, ClientConnection connection, bool connected, void* parameter) {
    if (connected) printf("[REDE] Elipse CONECTADO.\n");
    else printf("[REDE] Elipse DESCONECTADO.\n");
}

int main(int argc, char** argv) {
    printf("--- SERVIDOR PRONTO PARA O APPBROWSER ---\n");

    // Configura pino como saída
    char setup[50];
    sprintf(setup, "gpio mode %s out", PIN_MOTOR);
    system(setup);

    IedServerConfig config = IedServerConfig_create();
    IedServerConfig_setFileServiceBasePath(config, "./vmd-filestore/");
    IedServerConfig_enableDynamicDataSetService(config, true);

    iedServer = IedServer_createWithConfig(&iedModel, NULL, config);
    IedServerConfig_destroy(config);

    /* * VINCULA O CONTROLE 
     * Conecta o nó MOTXSWI1.Pos à nossa função C
     */
    IedServer_setControlHandler(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos,
            (ControlHandler) controlHandlerForMotor,
            IEDMODEL_B1EBK_MOTXSWI1_Pos_stVal);

    IedServer_setConnectionIndicationHandler(iedServer, (IedConnectionIndicationHandler) connectionHandler, NULL);

    /* * LIBERAÇÃO GERAL (ACCESS_POLICY_ALLOW)
     * Obrigatório para você conseguir escrever manualmente pelo Driver sem erro de permissão.
     */
    IedServer_setWriteAccessPolicy(iedServer, IEC61850_FC_ALL, ACCESS_POLICY_ALLOW);

    IedServer_start(iedServer, 102);

    if (!IedServer_isRunning(iedServer)) {
        printf("ERRO CRÍTICO: Não foi possível abrir a porta 102. Use 'sudo'!\n");
        exit(-1);
    }

    running = 1;
    signal(SIGINT, sigint_handler);

    printf("Aguardando alteracao de valor no Elipse...\n");

    while (running) {
        Thread_sleep(100);
    }

    IedServer_stop(iedServer);
    IedServer_destroy(iedServer);
    return 0;
}