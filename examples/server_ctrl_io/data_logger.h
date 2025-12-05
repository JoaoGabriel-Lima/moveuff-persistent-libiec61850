#ifndef DATA_LOGGER_H
#define DATA_LOGGER_H

#include <stdint.h>
#include <stdbool.h>

/* Data logger inicialização e cleanup */
int DataLogger_init(const char* db_path);
void DataLogger_cleanup(void);

/* Funcões de Log */
void DataLogger_logAnalogValue(const char* channel, float value, uint64_t timestamp);
void DataLogger_logDigitalValue(const char* channel, bool state, uint64_t timestamp);

/* Funções de Consulta */
typedef struct {
    uint64_t timestamp;
    float value;
} AnalogRecord;

typedef struct {
    uint64_t timestamp;
    bool state;
} DigitalRecord;

/* Fazer query dos dados analógicos em um intervalo de tempo */
int DataLogger_queryAnalogData(const char* channel, uint64_t start_time, uint64_t end_time, 
                               AnalogRecord** records, int* count);

/* Fazer query dos dados digitais em um intervalo de tempo */
int DataLogger_queryDigitalData(const char* channel, uint64_t start_time, uint64_t end_time,
                                DigitalRecord** records, int* count);

/* Limpar resultados de consulta */
void DataLogger_freeAnalogRecords(AnalogRecord* records);
void DataLogger_freeDigitalRecords(DigitalRecord* records);

/* Funções de Dados */
void DataLogger_printAnalogStats(const char* channel, uint64_t hours_back);
void DataLogger_printDigitalStats(const char* channel, uint64_t hours_back);

/* Manutenção do banco de dados */
void DataLogger_cleanupOldData(uint64_t days_to_keep);
void DataLogger_compactDatabase(void);

#endif /* DATA_LOGGER_H */
