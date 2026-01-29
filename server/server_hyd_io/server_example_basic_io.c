/*
 * server_example_basic_io.c
 * Servidor LIMPO para o modelo B1BYD (Orange Pi Zero 2W)
 * Foco: Inicialização básica e LLN0
 */

#include "iec61850_server.h"
#include "hal_thread.h"
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

/* Importa o modelo estático gerado (B1BYD) */
#include "static_model.h"

static int running = 0;
static IedServer iedServer = NULL;

/* Handler para parar o servidor com Ctrl+C */
void sigint_handler(int signalId) {
    running = 0;
}

/* Handler apenas para avisar quando um cliente (Elipse) conecta/desconecta */
static void connectionHandler (IedServer self, ClientConnection connection, bool connected, void* parameter) {
    if (connected)
        printf("[INFO] Cliente conectado ao B1BYD\n");
    else
        printf("[INFO] Cliente desconectado\n");
}

int main(int argc, char** argv) {
    int tcpPort = 102;

    if (argc > 1) {
        tcpPort = atoi(argv[1]);
    }

    printf("--- INICIANDO SERVIDOR B1BYD ---\n");
    printf("Versao da biblioteca: %s\n", LibIEC61850_getVersionString());

    /* 1. Configuração do Servidor */
    IedServerConfig config = IedServerConfig_create();
    IedServerConfig_setFileServiceBasePath(config, "./vmd-filestore/");
    IedServerConfig_enableDynamicDataSetService(config, true);

    /* 2. Criação do Servidor ligando ao modelo estático (iedModel do B1BYD) */
    iedServer = IedServer_createWithConfig(&iedModel, NULL, config);
    IedServerConfig_destroy(config);

    /* 3. Identidade do Servidor no MMS */
    IedServer_setServerIdentity(iedServer, "MoveUFF", "B1BYD", "1.0");

    /* 4. Handlers Básicos */
    IedServer_setConnectionIndicationHandler(iedServer, (IedConnectionIndicationHandler) connectionHandler, NULL);

    /* Permite escrita em variáveis (necessário para comandos genéricos) */
    IedServer_setWriteAccessPolicy(iedServer, IEC61850_FC_ALL, ACCESS_POLICY_ALLOW);

    /* * NOTA: Como você pediu para rodar apenas o básico/LLN0, 
     * removi os "IedServer_setControlHandler" específicos dos Switches.
     * O modelo carrega completo, mas sem lógicas complexas de controle atreladas.
     */

    /* 5. Inicia o Servidor */
    IedServer_start(iedServer, tcpPort);

    if (!IedServer_isRunning(iedServer)) {
        printf("[ERRO] Falha ao iniciar na porta %i. Tente usar 'sudo'.\n", tcpPort);
        IedServer_destroy(iedServer);
        exit(-1);
    }

    printf("[SUCESSO] Servidor B1BYD rodando na porta %i.\n", tcpPort);
    printf("Pressione Ctrl+C para sair.\n");

    /* 6. Loop Principal */
    running = 1;
    signal(SIGINT, sigint_handler);

    while (running) {
        /* O servidor roda em background. Aqui você pode colocar lógicas 
           globais do LLN0 se precisar no futuro. */
        Thread_sleep(100);
    }

    /* 7. Encerramento */
    printf("\nParando servidor...\n");
    IedServer_stop(iedServer);
    IedServer_destroy(iedServer);

    return 0;
}