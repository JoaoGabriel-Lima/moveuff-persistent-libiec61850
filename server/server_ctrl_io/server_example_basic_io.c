#include "iec61850_server.h"
#include "hal_thread.h"
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// Importante: Certifique-se que o static_model.h contém os nós que você está usando
#include "static_model.h" 

static int running = 0;
static IedServer iedServer = NULL;

void sigint_handler(int signalId)
{
    running = 0;
}

/* * Handler de Controle (Comandos vindos do Elipse)
 * Exibe o ctlNum e o estado desejado de forma limpa.
 */
static ControlHandlerResult
controlHandlerForBinaryOutput(ControlAction action, void* parameter, MmsValue* value, bool test)
{
    if (test) return CONTROL_RESULT_FAILED;

    if (MmsValue_getType(value) == MMS_BOOLEAN) {
        
        bool comando = MmsValue_getBoolean(value);
        
        // Obtém o ctlNum (Número de controle/sequência do comando)
        uint8_t ctlNum = ControlAction_getCtlNum(action);
        
        // Obtém quem enviou (opcional, mas ajuda na organização)
        ClientConnection client = ControlAction_getClientConnection(action);
        const char* clientIP = (client) ? ClientConnection_getPeerAddress(client) : "Desconhecido";

        printf("--------------------------------------------------\n");
        printf("[COMANDO] Recebido de: %s\n", clientIP);
        printf("   >> Acao:     %s\n", comando ? "LIGAR (ON)" : "DESLIGAR (OFF)");
        printf("   >> CtlNum:   %u\n", ctlNum); // Aqui está o contador que você pediu
        printf("--------------------------------------------------\n");

        // AQUI VOCÊ ADICIONA O CÓDIGO DO RASPBERRY PI (wiringPi, etc)
        // if (comando) digitalWrite(PINO, HIGH); else digitalWrite(PINO, LOW);

        return CONTROL_RESULT_OK;
    }

    return CONTROL_RESULT_FAILED;
}

/*
 * Handler de Conexão
 * Detecta quando o Elipse conecta ou desconecta.
 */
static void
connectionHandler (IedServer self, ClientConnection connection, bool connected, void* parameter)
{
    const char* clientIP = ClientConnection_getPeerAddress(connection);

    if (connected) {
        printf("\n==================================================\n");
        printf("[SISTEMA] CLIENTE CONECTADO (ELIPSE/SCADA)\n");
        printf("   >> IP do Cliente: %s\n", clientIP);
        printf("==================================================\n\n");
    }
    else {
        printf("\n[SISTEMA] Cliente Desconectado (%s)\n\n", clientIP);
    }
}

/*
 * Handler de Reports (RCB)
 * Limpo para mostrar apenas quando o report é ativado/desativado.
 */
static void
rcbEventHandler(void* parameter, ReportControlBlock* rcb, ClientConnection connection, IedServer_RCBEventType event, const char* parameterName, MmsDataAccessError serviceError)
{
    // Filtra apenas eventos de habilitação para não poluir o terminal
    if (event == RCB_EVENT_ENABLE)
    {
        char* rptId = ReportControlBlock_getRptID(rcb);
        printf("[REPORT] Relatorios Ativados pelo Elipse\n");
        printf("   >> ID: %s\n", rptId);
        free(rptId);
    }
    else if (event == RCB_EVENT_DISABLE) {
        printf("[REPORT] Relatorios Desativados\n");
    }
    // Outros eventos (Set Parameter, etc) foram ocultados para limpeza
}

int
main(int argc, char** argv)
{
    int tcpPort = 102;

    if (argc > 1) {
        tcpPort = atoi(argv[1]);
    }

    /* * CONFIGURAÇÃO DE LOG:
     * Define para WARNING para esconder os logs internos "confusos" da libiec61850.
     * Assim só aparece o que nós dermos printf ou erros graves.
     */
    printf("\n--- INICIANDO SERVIDOR IEC 61850 (Versao %s) ---\n", LibIEC61850_getVersionString());

    IedServerConfig config = IedServerConfig_create();
    IedServerConfig_setReportBufferSize(config, 200000);
    IedServerConfig_setEdition(config, IEC_61850_EDITION_2);
    IedServerConfig_setFileServiceBasePath(config, "./vmd-filestore/");
    IedServerConfig_enableFileService(config, false);
    IedServerConfig_enableDynamicDataSetService(config, true);
    IedServerConfig_enableLogService(config, false);
    IedServerConfig_setMaxMmsConnections(config, 2);

    iedServer = IedServer_createWithConfig(&iedModel, NULL, config);
    IedServerConfig_destroy(config);

    IedServer_setServerIdentity(iedServer, "MZ", "basic io", "1.6.0");

    /* * REGISTRO DO COMANDO:
     * Descomentei e apontei para o LPHD1_Sim que estava no seu código original.
     * IMPORTANTE: Se o seu botão no Elipse aponta para outro nó (ex: TNKXSWI1 ou MOTXSWI1),
     * você DEVE mudar 'IEDMODEL_B1CTR_LPHD1_Sim' abaixo para o nó correto!
     */

    IedServer_setControlHandler(iedServer, IEDMODEL_B1CTR_LPHD1_Sim,
            (ControlHandler) controlHandlerForBinaryOutput,
            IEDMODEL_B1CTR_LPHD1_Sim_stVal);

    IedServer_setConnectionIndicationHandler(iedServer, (IedConnectionIndicationHandler) connectionHandler, NULL);
    IedServer_setRCBEventHandler(iedServer, rcbEventHandler, NULL);
    IedServer_setWriteAccessPolicy(iedServer, IEC61850_FC_DC, ACCESS_POLICY_ALLOW);

    IedServer_start(iedServer, tcpPort);

    if (!IedServer_isRunning(iedServer))
    {
        printf("[ERRO] Falha ao iniciar servidor (verifique permissoes de root ou porta 102)!\n");
        IedServer_destroy(iedServer);
        exit(-1);
    }

    printf("[STATUS] Servidor Rodando na porta %d.\n", tcpPort);
    printf("[STATUS] Aguardando conexao do Elipse...\n\n");

    running = 1;
    signal(SIGINT, sigint_handler);

    while (running)
    {
        Thread_sleep(100);
    }

    printf("\n[SISTEMA] Parando servidor...\n");
    IedServer_stop(iedServer);
    IedServer_destroy(iedServer);

    return 0;
}