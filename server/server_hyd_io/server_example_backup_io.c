/*
 * server_example_basic_io.c
 * Exemplo de Servidor IEC 61850 para KTNK (Tanque) e STMP (Temperatura)
 */

#include "iec61850_server.h"
#include "hal_thread.h"
#include "hal_time.h"
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Inclua o header gerado pelo genmodel (supondo que seja static_model.h) */

/* * Coloque aqui os defines que você forneceu no prompt.
 * Em um projeto real, eles estariam dentro de um header separado.
 */
static int running = 0;
static IedServer iedServer = NULL;

// Variáveis de Simulação (Representam o hardware)
static float simul_tankLevel = 0.0f;     // 0 a 100%
static float simul_tankCapacity = 5000.0f; // Litros (default)
static int   simul_filling = 1;          // 1 = enchendo, 0 = esvaziando

static float simul_temp = 25.0f;         // Graus Celsius
static float simul_tripSet = 80.0f;      // Setpoint de Trip
static bool  simul_tripActive = false;

void sigint_handler(int signalId) { running = 0; }

/*
 * Handler para permitir escrita de configurações pelos clientes IEC 61850
 * Permite alterar: Capacidade do Tanque e Setpoint de Temperatura
 */
static MmsDataAccessError
writeAccessHandler(DataAttribute* dataAttribute, MmsValue* value, ClientConnection connection, void* parameter)
{
    if (dataAttribute == IEDMODEL_B1HYD_STMP1_TripSet_setMag_f) {
        float newVal = MmsValue_toFloat(value);
        printf("[WRITE] Cliente alterou TripSet de %.2f para %.2f\n", simul_tripSet, newVal);
        simul_tripSet = newVal;
        return DATA_ACCESS_ERROR_SUCCESS;
    }
    else if (dataAttribute == IEDMODEL_B1HYD_KTNK1_VlmCap_setMag_f) {
        float newVal = MmsValue_toFloat(value);
        printf("[WRITE] Cliente alterou Capacidade do Tanque de %.2f para %.2f\n", simul_tankCapacity, newVal);
        simul_tankCapacity = newVal;
        return DATA_ACCESS_ERROR_SUCCESS;
    }

    return DATA_ACCESS_ERROR_OBJECT_ACCESS_DENIED;
}

/*
 * Função de Simulação Física
 * Em um sistema real, aqui você leria os sensores via WiringPi/ADC
 */
void update_physics_simulation() {
    // 1. Simulação do Tanque (Onda triangular)
    if (simul_filling) {
        simul_tankLevel += 0.5f; // Enche 0.5% por ciclo
        if (simul_tankLevel >= 100.0f) simul_filling = 0;
    } else {
        simul_tankLevel -= 0.5f; // Esvazia 0.5% por ciclo
        if (simul_tankLevel <= 0.0f) simul_filling = 1;
    }

    // 2. Simulação da Temperatura (Sobe até causar Trip, depois esfria)
    if (simul_tripActive) {
        // Se trippou (desligou aquecedor), esfria
        simul_temp -= 1.0f; 
        if (simul_temp < 40.0f) simul_tripActive = false; // Reset automático (histerese)
    } else {
        // Aquecendo
        simul_temp += 0.2f; 
    }

    // Lógica de Proteção
    bool tripCondition = (simul_temp > simul_tripSet);
    
    // Se a condição de trip ocorrer, travamos o tripActive (até esfriar na lógica acima)
    if (tripCondition) simul_tripActive = true;
}

int main(int argc, char** argv)
{
    printf("Iniciando Server IEC 61850 (Tanque e Temperatura)...\n");

    int tcpPort = 102;
    if (argc > 1) {
        tcpPort = atoi(argv[1]);
    }

    iedServer = IedServer_create(&iedModel);

    /* --- Configuração Inicial de Valores no Modelo --- */
    
    // Inicializa Setpoints com os valores da nossa simulação
    IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1HYD_STMP1_TripSet_setMag_f, simul_tripSet);
    IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1HYD_KTNK1_VlmCap_setMag_f, simul_tankCapacity);

    /* --- Registra Handlers de Escrita --- */
    // Permite que o cliente altere o Setpoint de Temperatura
    IedServer_handleWriteAccess(iedServer, IEDMODEL_B1HYD_STMP1_TripSet_setMag_f, writeAccessHandler, NULL);
    // Permite que o cliente altere a Capacidade do Tanque
    IedServer_handleWriteAccess(iedServer, IEDMODEL_B1HYD_KTNK1_VlmCap_setMag_f, writeAccessHandler, NULL);

    /* --- Inicia o Servidor --- */
    IedServer_start(iedServer, tcpPort);

    if (!IedServer_isRunning(iedServer)) {
        printf("Falha ao iniciar servidor na porta %d! (Precisa de root?)\n", tcpPort);
        IedServer_destroy(iedServer);
        exit(-1);
    }

    running = 1;
    signal(SIGINT, sigint_handler);

    printf("Servidor rodando. Pressione Ctrl+C para sair.\n");

    /* --- Loop Principal (Cíclico) --- */
    while (running) {
        
        uint64_t timestamp = Hal_getTimeInMs();

        // 1. Atualiza a física simulada
        update_physics_simulation();

        // 2. Atualiza KTNK1 (Tanque)
        // Atualiza Nível (%)
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1HYD_KTNK1_LevPct_mag_f, simul_tankLevel);
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1HYD_KTNK1_LevPct_t, timestamp);
        
        // Calcula Volume Baseado na Capacidade Atual (Vol = Cap * Nivel / 100)
        float currentVolume = (simul_tankCapacity * simul_tankLevel) / 100.0f;
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1HYD_KTNK1_Vlm_mag_f, currentVolume);
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1HYD_KTNK1_Vlm_t, timestamp);

        // 3. Atualiza STMP1 (Temperatura)
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1HYD_STMP1_Tmp_mag_f, simul_temp);
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1HYD_STMP1_Tmp_t, timestamp);

        // Atualiza Status de Trip (Alarme)
        // Nota: Trip geralmente é true quando há falha
        IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_B1HYD_STMP1_Trip_stVal, simul_tripActive);
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1HYD_STMP1_Trip_t, timestamp);

        // Logs ocasionais para o console
        // Imprime a cada ~1 segundo (assumindo sleep de 100ms * 10)
        static int log_counter = 0;
        if (++log_counter >= 10) {
            printf("[STATUS] Tnk: %.1f %% (%.1f L) | Tmp: %.1f C (Set: %.1f) | Trip: %s\n", 
                simul_tankLevel, currentVolume, 
                simul_temp, simul_tripSet, 
                simul_tripActive ? "SIM" : "NAO");
            log_counter = 0;
        }

        Thread_sleep(100); // Ciclo de 100ms
    }

    /* --- Encerramento --- */
    IedServer_stop(iedServer);
    IedServer_destroy(iedServer);
    
    printf("Servidor encerrado.\n");
    return 0;
}