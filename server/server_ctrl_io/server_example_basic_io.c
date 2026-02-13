#include "iec61850_server.h"
#include "hal_thread.h"
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h> // Necessário para dup2
#include <fcntl.h>  // Necessário para open
#include "static_model.h"

static int running = 0;
static IedServer iedServer = NULL;
static int activeConnections = 0;

void sigint_handler(int signalId) { running = 0; }

/* * MACRO PARA LOG PERSONALIZADO
 * Redireciona tudo para stderr. O stdout será silenciado.
 */
#define LOG_PRINT(...) fprintf(stderr, __VA_ARGS__)

/* Handler de Conexão (Mostra IP quando conecta/desconecta) */
static void
connectionHandler (IedServer self, ClientConnection connection, bool connected, void* parameter)
{
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

int
main(int argc, char** argv)
{
    int tcpPort = 102;
    if (argc > 1) {
        tcpPort = atoi(argv[1]);
    }

    // BLOQUEIO TOTAL DE STDOUT (Reports da biblioteca e logs comuns)
    int dev_null = open("/dev/null", O_WRONLY);
    if (dev_null != -1) {
        dup2(dev_null, STDOUT_FILENO); 
        // A partir daqui, printf comum morre. Use LOG_PRINT.
    }

    // CRIAÇÃO DO SERVIDOR (Agora ele nasce "mudo" no stdout)
    iedServer = IedServer_create(&iedModel); 

    if (iedServer == NULL) {
        LOG_PRINT("Erro crítico: Falha ao criar IedServer (verifique static_model).\n");
        if (dev_null != -1) close(dev_null);
        return 1;
    }

    // CONFIGURAÇÃO DOS HANDLERS
    // Handler de conexão (Logs bem feitos)
    IedServer_setConnectionIndicationHandler(iedServer, (IedConnectionIndicationHandler) connectionHandler, NULL);

    // NICIAR O SERVIDOR
    IedServer_start(iedServer, tcpPort);

    if (!IedServer_isRunning(iedServer)) {
        LOG_PRINT("ERRO: Falha ao iniciar o servidor na porta %d (sudo necessario?)\n", tcpPort);
        IedServer_destroy(iedServer);
        if (dev_null != -1) close(dev_null);
        return 1;
    }

    // Logs de status aparecem via stderr
    LOG_PRINT("\n--- SERVIDOR IEC 61850 (B1CTR - SUPRESSED LOGS) ---\n");
    LOG_PRINT("[STATUS] Logs internos da libiec61850 ocultados.\n");
    LOG_PRINT("[STATUS] Rodando na porta %d.\n", tcpPort);
    LOG_PRINT("[STATUS] Aguardando conexao do Elipse...\n");

    // Loop Principal
    running = 1;
    signal(SIGINT, sigint_handler);

    while (running) {
        Thread_sleep(100);
    }

    // Encerramento
    LOG_PRINT("\n[SISTEMA] Encerrando servidor...\n");
    IedServer_stop(iedServer);
    IedServer_destroy(iedServer);
    if (dev_null != -1) close(dev_null);
    
    return 0;
}