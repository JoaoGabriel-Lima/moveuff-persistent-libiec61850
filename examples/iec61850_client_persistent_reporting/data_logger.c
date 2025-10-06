#include "data_logger.h"
#include <sqlite3.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
    sqlite3* db;
    sqlite3_stmt* stmt_analog_insert;
    sqlite3_stmt* stmt_digital_insert;
    sqlite3_stmt* stmt_analog_query;
    sqlite3_stmt* stmt_digital_query;
    bool initialized;
} DataLoggerContext;

static DataLoggerContext logger = {0};

/* SQL */
static const char* SQL_CREATE_ANALOG_TABLE = 
    "CREATE TABLE IF NOT EXISTS analog_data ("
    "id INTEGER PRIMARY KEY AUTOINCREMENT,"
    "timestamp INTEGER NOT NULL,"
    "channel TEXT NOT NULL,"
    "value REAL NOT NULL,"
    "UNIQUE(timestamp, channel)"
    ");";

static const char* SQL_CREATE_DIGITAL_TABLE = 
    "CREATE TABLE IF NOT EXISTS digital_data ("
    "id INTEGER PRIMARY KEY AUTOINCREMENT,"
    "timestamp INTEGER NOT NULL,"
    "channel TEXT NOT NULL,"
    "state INTEGER NOT NULL,"
    "UNIQUE(timestamp, channel)"
    ");";

static const char* SQL_CREATE_ANALOG_INDEX = 
    "CREATE INDEX IF NOT EXISTS idx_analog_timestamp_channel ON analog_data(timestamp, channel);";

static const char* SQL_CREATE_DIGITAL_INDEX = 
    "CREATE INDEX IF NOT EXISTS idx_digital_timestamp_channel ON digital_data(timestamp, channel);";

static const char* SQL_INSERT_ANALOG = 
    "INSERT OR REPLACE INTO analog_data (timestamp, channel, value) VALUES (?, ?, ?);";

static const char* SQL_INSERT_DIGITAL = 
    "INSERT OR REPLACE INTO digital_data (timestamp, channel, state) VALUES (?, ?, ?);";

static const char* SQL_QUERY_ANALOG = 
    "SELECT timestamp, value FROM analog_data WHERE channel = ? AND timestamp BETWEEN ? AND ? ORDER BY timestamp;";

static const char* SQL_QUERY_DIGITAL = 
    "SELECT timestamp, state FROM digital_data WHERE channel = ? AND timestamp BETWEEN ? AND ? ORDER BY timestamp;";

int DataLogger_init(const char* db_path)
{
    if (logger.initialized) {
        printf("DataLogger: Já inicializado\n");
        return 0;
    }

    int rc = sqlite3_open(db_path, &logger.db);
    if (rc != SQLITE_OK) {
        printf("DataLogger: Não foi possível abrir o banco de dados %s: %s\n", db_path, sqlite3_errmsg(logger.db));
        return -1;
    }

    /* Enable WAL mode for better concurrency */
    sqlite3_exec(logger.db, "PRAGMA journal_mode=WAL;", NULL, NULL, NULL);
    sqlite3_exec(logger.db, "PRAGMA synchronous=NORMAL;", NULL, NULL, NULL);
    sqlite3_exec(logger.db, "PRAGMA cache_size=10000;", NULL, NULL, NULL);

    /* Criando tabelas */
    char* err_msg = NULL;
    rc = sqlite3_exec(logger.db, SQL_CREATE_ANALOG_TABLE, NULL, NULL, &err_msg);
    if (rc != SQLITE_OK) {
        printf("DataLogger: Error creating analog table: %s\n", err_msg);
        sqlite3_free(err_msg);
        sqlite3_close(logger.db);
        return -1;
    }

    rc = sqlite3_exec(logger.db, SQL_CREATE_DIGITAL_TABLE, NULL, NULL, &err_msg);
    if (rc != SQLITE_OK) {
        printf("DataLogger: Error creating digital table: %s\n", err_msg);
        sqlite3_free(err_msg);
        sqlite3_close(logger.db);
        return -1;
    }

    /* Create indexes for better performance */
    sqlite3_exec(logger.db, SQL_CREATE_ANALOG_INDEX, NULL, NULL, NULL);
    sqlite3_exec(logger.db, SQL_CREATE_DIGITAL_INDEX, NULL, NULL, NULL);

    /* Preparando instruções */
    rc = sqlite3_prepare_v2(logger.db, SQL_INSERT_ANALOG, -1, &logger.stmt_analog_insert, NULL);
    if (rc != SQLITE_OK) {
        printf("DataLogger: Error preparing analog insert statement: %s\n", sqlite3_errmsg(logger.db));
        sqlite3_close(logger.db);
        return -1;
    }

    rc = sqlite3_prepare_v2(logger.db, SQL_INSERT_DIGITAL, -1, &logger.stmt_digital_insert, NULL);
    if (rc != SQLITE_OK) {
        printf("DataLogger: Error preparing digital insert statement: %s\n", sqlite3_errmsg(logger.db));
        sqlite3_finalize(logger.stmt_analog_insert);
        sqlite3_close(logger.db);
        return -1;
    }

    rc = sqlite3_prepare_v2(logger.db, SQL_QUERY_ANALOG, -1, &logger.stmt_analog_query, NULL);
    if (rc != SQLITE_OK) {
        printf("DataLogger: Error preparing analog query statement: %s\n", sqlite3_errmsg(logger.db));
        sqlite3_finalize(logger.stmt_analog_insert);
        sqlite3_finalize(logger.stmt_digital_insert);
        sqlite3_close(logger.db);
        return -1;
    }

    rc = sqlite3_prepare_v2(logger.db, SQL_QUERY_DIGITAL, -1, &logger.stmt_digital_query, NULL);
    if (rc != SQLITE_OK) {
        printf("DataLogger: Error preparing digital query statement: %s\n", sqlite3_errmsg(logger.db));
        sqlite3_finalize(logger.stmt_analog_insert);
        sqlite3_finalize(logger.stmt_digital_insert);
        sqlite3_finalize(logger.stmt_analog_query);
        sqlite3_close(logger.db);
        return -1;
    }

    logger.initialized = true;
    printf("DataLogger: Inicializado com sucesso com o banco de dados: %s\n", db_path);
    return 0;
}

void DataLogger_cleanup(void)
{
    if (!logger.initialized) return;

    if (logger.stmt_analog_insert) {
        sqlite3_finalize(logger.stmt_analog_insert);
        logger.stmt_analog_insert = NULL;
    }

    if (logger.stmt_digital_insert) {
        sqlite3_finalize(logger.stmt_digital_insert);
        logger.stmt_digital_insert = NULL;
    }

    if (logger.stmt_analog_query) {
        sqlite3_finalize(logger.stmt_analog_query);
        logger.stmt_analog_query = NULL;
    }

    if (logger.stmt_digital_query) {
        sqlite3_finalize(logger.stmt_digital_query);
        logger.stmt_digital_query = NULL;
    }

    if (logger.db) {
        sqlite3_close(logger.db);
        logger.db = NULL;
    }

    logger.initialized = false;
    printf("DataLogger: Cleanup feito!\n");
}

void DataLogger_logAnalogValue(const char* channel, float value, uint64_t timestamp)
{
    if (!logger.initialized) {
        printf("DataLogger: Not initialized\n");
        return;
    }

    sqlite3_bind_int64(logger.stmt_analog_insert, 1, timestamp);
    sqlite3_bind_text(logger.stmt_analog_insert, 2, channel, -1, SQLITE_STATIC);
    sqlite3_bind_double(logger.stmt_analog_insert, 3, value);

    int rc = sqlite3_step(logger.stmt_analog_insert);
    if (rc != SQLITE_DONE) {
        printf("DataLogger: Error inserting analog data: %s\n", sqlite3_errmsg(logger.db));
    }

    sqlite3_reset(logger.stmt_analog_insert);
}

void DataLogger_logDigitalValue(const char* channel, bool state, uint64_t timestamp)
{
    if (!logger.initialized) {
        printf("DataLogger: Not initialized\n");
        return;
    }

    sqlite3_bind_int64(logger.stmt_digital_insert, 1, timestamp);
    sqlite3_bind_text(logger.stmt_digital_insert, 2, channel, -1, SQLITE_STATIC);
    sqlite3_bind_int(logger.stmt_digital_insert, 3, state ? 1 : 0);

    int rc = sqlite3_step(logger.stmt_digital_insert);
    if (rc != SQLITE_DONE) {
        printf("DataLogger: Error inserting digital data: %s\n", sqlite3_errmsg(logger.db));
    }

    sqlite3_reset(logger.stmt_digital_insert);
}

int DataLogger_queryAnalogData(const char* channel, uint64_t start_time, uint64_t end_time,
                               AnalogRecord** records, int* count)
{
    if (!logger.initialized) {
        printf("DataLogger: Not initialized\n");
        return -1;
    }

    sqlite3_bind_text(logger.stmt_analog_query, 1, channel, -1, SQLITE_STATIC);
    sqlite3_bind_int64(logger.stmt_analog_query, 2, start_time);
    sqlite3_bind_int64(logger.stmt_analog_query, 3, end_time);

    /* Verificar contagem de registros */
    int record_count = 0;
    while (sqlite3_step(logger.stmt_analog_query) == SQLITE_ROW) {
        record_count++;
    }

    sqlite3_reset(logger.stmt_analog_query);

    if (record_count == 0) {
        *records = NULL;
        *count = 0;
        return 0;
    }

    /* Alocar memória para os registros */
    *records = malloc(record_count * sizeof(AnalogRecord));
    if (*records == NULL) {
        printf("DataLogger: Memory allocation failed\n");
        return -1;
    }

    /* Fetch data */
    sqlite3_bind_text(logger.stmt_analog_query, 1, channel, -1, SQLITE_STATIC);
    sqlite3_bind_int64(logger.stmt_analog_query, 2, start_time);
    sqlite3_bind_int64(logger.stmt_analog_query, 3, end_time);

    int i = 0;
    while (sqlite3_step(logger.stmt_analog_query) == SQLITE_ROW && i < record_count) {
        (*records)[i].timestamp = sqlite3_column_int64(logger.stmt_analog_query, 0);
        (*records)[i].value = sqlite3_column_double(logger.stmt_analog_query, 1);
        i++;
    }

    sqlite3_reset(logger.stmt_analog_query);
    *count = record_count;
    return 0;
}

int DataLogger_queryDigitalData(const char* channel, uint64_t start_time, uint64_t end_time,
                                DigitalRecord** records, int* count)
{
    if (!logger.initialized) {
        printf("DataLogger: Not initialized\n");
        return -1;
    }

    sqlite3_bind_text(logger.stmt_digital_query, 1, channel, -1, SQLITE_STATIC);
    sqlite3_bind_int64(logger.stmt_digital_query, 2, start_time);
    sqlite3_bind_int64(logger.stmt_digital_query, 3, end_time);

    /* Count records first */
    int record_count = 0;
    while (sqlite3_step(logger.stmt_digital_query) == SQLITE_ROW) {
        record_count++;
    }

    sqlite3_reset(logger.stmt_digital_query);

    if (record_count == 0) {
        *records = NULL;
        *count = 0;
        return 0;
    }

    /* Allocate memory for records */
    *records = malloc(record_count * sizeof(DigitalRecord));
    if (*records == NULL) {
        printf("DataLogger: Memory allocation failed\n");
        return -1;
    }

    /* Fetch data again */
    sqlite3_bind_text(logger.stmt_digital_query, 1, channel, -1, SQLITE_STATIC);
    sqlite3_bind_int64(logger.stmt_digital_query, 2, start_time);
    sqlite3_bind_int64(logger.stmt_digital_query, 3, end_time);

    int i = 0;
    while (sqlite3_step(logger.stmt_digital_query) == SQLITE_ROW && i < record_count) {
        (*records)[i].timestamp = sqlite3_column_int64(logger.stmt_digital_query, 0);
        (*records)[i].state = sqlite3_column_int(logger.stmt_digital_query, 1) != 0;
        i++;
    }

    sqlite3_reset(logger.stmt_digital_query);
    *count = record_count;
    return 0;
}

void DataLogger_freeAnalogRecords(AnalogRecord* records)
{
    if (records) {
        free(records);
    }
}

void DataLogger_freeDigitalRecords(DigitalRecord* records)
{
    if (records) {
        free(records);
    }
}

void DataLogger_printAnalogStats(const char* channel, uint64_t hours_back)
{
    if (!logger.initialized) return;

    uint64_t now = (uint64_t)time(NULL) * 1000;  /* Convert to milliseconds */
    uint64_t start_time = now - (hours_back * 3600 * 1000);

    AnalogRecord* records;
    int count;

    if (DataLogger_queryAnalogData(channel, start_time, now, &records, &count) == 0) {
        if (count > 0) {
            float min_val = records[0].value;
            float max_val = records[0].value;
            float sum = 0;

            for (int i = 0; i < count; i++) {
                if (records[i].value < min_val) min_val = records[i].value;
                if (records[i].value > max_val) max_val = records[i].value;
                sum += records[i].value;
            }

            printf("Status para %s (ultimas %llu horas):\n", channel, hours_back);
            printf("  Records: %d\n", count);
            printf("  Min: %.2f\n", min_val);
            printf("  Max: %.2f\n", max_val);
            printf("  Avg: %.2f\n", sum / count);
        } else {
            printf("Não foram encontrados dados para %s nas ultimas %llu horas\n", channel, hours_back);
        }

        DataLogger_freeAnalogRecords(records);
    }
}

void DataLogger_printDigitalStats(const char* channel, uint64_t hours_back)
{
    if (!logger.initialized) return;

    uint64_t now = (uint64_t)time(NULL) * 1000;  /* milissegundos */
    uint64_t start_time = now - (hours_back * 3600 * 1000);

    DigitalRecord* records;
    int count;

    if (DataLogger_queryDigitalData(channel, start_time, now, &records, &count) == 0) {
        if (count > 0) {
            int on_count = 0;
            for (int i = 0; i < count; i++) {
                if (records[i].state) on_count++;
            }

            printf("Stats for %s (last %llu hours):\n", channel, hours_back);
            printf("  Records: %d\n", count);
            printf("  ON states: %d (%.1f%%)\n", on_count, (float)on_count * 100.0f / count);
            printf("  OFF states: %d (%.1f%%)\n", count - on_count, (float)(count - on_count) * 100.0f / count);
        } else {
            printf("Não foram encontrados dados para %s nas ultimas %llu horas\n", channel, hours_back);
        }

        DataLogger_freeDigitalRecords(records);
    }
}

void DataLogger_cleanupOldData(uint64_t days_to_keep)
{
    if (!logger.initialized) return;

    uint64_t cutoff_time = ((uint64_t)time(NULL) - (days_to_keep * 24 * 3600)) * 1000;

    char sql[256];
    snprintf(sql, sizeof(sql), "DELETE FROM analog_data WHERE timestamp < %llu", cutoff_time);
    sqlite3_exec(logger.db, sql, NULL, NULL, NULL);

    snprintf(sql, sizeof(sql), "DELETE FROM digital_data WHERE timestamp < %llu", cutoff_time);
    sqlite3_exec(logger.db, sql, NULL, NULL, NULL);

    printf("DataLogger: Cleaned up data older than %llu days\n", days_to_keep);
}

void DataLogger_compactDatabase(void)
{
    if (!logger.initialized) return;

    sqlite3_exec(logger.db, "VACUUM;", NULL, NULL, NULL);
    printf("DataLogger: Database compacted\n");
}
