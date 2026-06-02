#include "iec61850_client.h"
#include "hal_thread.h"

#include <pthread.h>
#include <signal.h>
#include <sqlite3.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#define MAX_BIKES 20
#define RECONNECT_SECONDS 10
#define HEALTH_CHECK_SECONDS 10
#define DEFAULT_DB "../gateway.db"
#define RCB_REFERENCE "MoveUFF_GeralB1EBK/LLN0.RP.BikeTelemetryRCB01"
#define DATASET_REFERENCE "MoveUFF_GeralB1EBK/LLN0.BikeTelemetry"
#define RPT_ID "BikeTelemetry"

static volatile bool running = true;
static const char* database_path = DEFAULT_DB;

typedef struct {
    char uuid[40];
    char host[256];
    int port;
    bool active;
    bool reconnect_requested;
    pthread_t thread;
} BikeWorker;

typedef struct {
    int id;
    char object_reference[256];
    int value;
} PendingCommand;

static BikeWorker workers[MAX_BIKES];
static pthread_mutex_t workers_mutex = PTHREAD_MUTEX_INITIALIZER;

static const char* telemetry_keys[] = {
    "battery_voltage",
    "battery_current",
    "battery_soc",
    "hydrogen_pressure",
    "hydrogen_current",
    "hydrogen_voltage",
    "gps_latitude",
    "gps_longitude",
    "gps_navigation_failed",
    "gps_satellite_available",
    "actuator_lantern",
    "actuator_motor",
    "actuator_alarm",
    "actuator_hydrogen_cell",
    "actuator_hydrogen_tank",
    "actuator_battery_lock",
};

static void handle_signal(int signal_id)
{
    (void) signal_id;
    running = false;
}

static void now_iso(char* buffer, size_t size)
{
    time_t raw_time = time(NULL);
    struct tm tm_utc;
    gmtime_r(&raw_time, &tm_utc);
    strftime(buffer, size, "%Y-%m-%dT%H:%M:%SZ", &tm_utc);
}

static sqlite3* open_database(void)
{
    sqlite3* db = NULL;
    if (sqlite3_open(database_path, &db) != SQLITE_OK) {
        fprintf(stderr, "[collector] sqlite open failed: %s\n", sqlite3_errmsg(db));
        if (db != NULL)
            sqlite3_close(db);
        return NULL;
    }

    sqlite3_exec(db, "PRAGMA journal_mode=WAL", NULL, NULL, NULL);
    sqlite3_exec(db, "PRAGMA busy_timeout=5000", NULL, NULL, NULL);
    sqlite3_exec(db,
        "CREATE TABLE IF NOT EXISTS bike_commands ("
        "id INTEGER PRIMARY KEY AUTOINCREMENT,"
        "bike_uuid TEXT NOT NULL REFERENCES bikes(uuid) ON DELETE CASCADE,"
        "command TEXT NOT NULL,"
        "target TEXT NOT NULL,"
        "object_reference TEXT NOT NULL,"
        "value INTEGER NOT NULL,"
        "status TEXT NOT NULL DEFAULT 'pending',"
        "error TEXT,"
        "created_at TEXT NOT NULL,"
        "updated_at TEXT NOT NULL,"
        "executed_at TEXT"
        ")",
        NULL, NULL, NULL);
    sqlite3_exec(db,
        "CREATE INDEX IF NOT EXISTS idx_bike_commands_bike_status "
        "ON bike_commands (bike_uuid, status, id)",
        NULL, NULL, NULL);
    return db;
}

static void update_status(const char* uuid, const char* status)
{
    sqlite3* db = open_database();
    if (db == NULL)
        return;

    char timestamp[32];
    now_iso(timestamp, sizeof(timestamp));

    sqlite3_stmt* stmt = NULL;
    sqlite3_prepare_v2(db,
        "UPDATE bikes SET status = ?, updated_at = ? WHERE uuid = ?",
        -1, &stmt, NULL);
    sqlite3_bind_text(stmt, 1, status, -1, SQLITE_TRANSIENT);
    sqlite3_bind_text(stmt, 2, timestamp, -1, SQLITE_TRANSIENT);
    sqlite3_bind_text(stmt, 3, uuid, -1, SQLITE_TRANSIENT);
    sqlite3_step(stmt);
    sqlite3_finalize(stmt);
    sqlite3_close(db);
}

static void update_status_seen(const char* uuid, const char* status, const char* timestamp)
{
    sqlite3* db = open_database();
    if (db == NULL)
        return;

    sqlite3_stmt* stmt = NULL;
    sqlite3_prepare_v2(db,
        "UPDATE bikes SET status = ?, updated_at = ?, last_seen_at = ? WHERE uuid = ?",
        -1, &stmt, NULL);
    sqlite3_bind_text(stmt, 1, status, -1, SQLITE_TRANSIENT);
    sqlite3_bind_text(stmt, 2, timestamp, -1, SQLITE_TRANSIENT);
    sqlite3_bind_text(stmt, 3, timestamp, -1, SQLITE_TRANSIENT);
    sqlite3_bind_text(stmt, 4, uuid, -1, SQLITE_TRANSIENT);
    sqlite3_step(stmt);
    sqlite3_finalize(stmt);
    sqlite3_close(db);
}

static void append_json_value(char* buffer, size_t size, MmsValue* value)
{
    if (value == NULL) {
        strncat(buffer, "null", size - strlen(buffer) - 1);
        return;
    }

    char tmp[64];

    switch (MmsValue_getType(value)) {
    case MMS_FLOAT:
        snprintf(tmp, sizeof(tmp), "%.6f", MmsValue_toFloat(value));
        break;
    case MMS_BOOLEAN:
        snprintf(tmp, sizeof(tmp), "%s", MmsValue_getBoolean(value) ? "true" : "false");
        break;
    case MMS_BIT_STRING:
        snprintf(tmp, sizeof(tmp), "%d", MmsValue_getBitStringAsInteger(value));
        break;
    case MMS_INTEGER:
    case MMS_UNSIGNED:
        snprintf(tmp, sizeof(tmp), "%lld", (long long) MmsValue_toInt64(value));
        break;
    default:
        snprintf(tmp, sizeof(tmp), "null");
        break;
    }

    strncat(buffer, tmp, size - strlen(buffer) - 1);
}

static MmsValue* array_value(MmsValue* values, int index)
{
    if (values == NULL)
        return NULL;

    if (index < 0 || (uint32_t) index >= MmsValue_getArraySize(values))
        return NULL;

    return MmsValue_getElement(values, index);
}

static void build_values_json(char* buffer, size_t size, MmsValue* values)
{
    int count = MmsValue_getArraySize(values);
    int known_count = (int) (sizeof(telemetry_keys) / sizeof(telemetry_keys[0]));

    strncat(buffer, "{", size - strlen(buffer) - 1);

    for (int i = 0; i < count && i < known_count; i++) {
        if (i > 0)
            strncat(buffer, ",", size - strlen(buffer) - 1);

        strncat(buffer, "\"", size - strlen(buffer) - 1);
        strncat(buffer, telemetry_keys[i], size - strlen(buffer) - 1);
        strncat(buffer, "\":", size - strlen(buffer) - 1);
        append_json_value(buffer, size, array_value(values, i));
    }

    strncat(buffer, "}", size - strlen(buffer) - 1);
}

static void build_state_json(char* buffer, size_t size, MmsValue* values)
{
    const int idx_battery_voltage = 0;
    const int idx_battery_current = 1;
    const int idx_battery_soc = 2;
    const int idx_hydrogen_pressure = 3;
    const int idx_hydrogen_current = 4;
    const int idx_hydrogen_voltage = 5;
    const int idx_gps_latitude = 6;
    const int idx_gps_longitude = 7;
    const int idx_gps_navigation_failed = 8;
    const int idx_gps_satellite_available = 9;
    const int idx_actuator_lantern = 10;
    const int idx_actuator_motor = 11;
    const int idx_actuator_alarm = 12;
    const int idx_actuator_hydrogen_cell = 13;
    const int idx_actuator_hydrogen_tank = 14;
    const int idx_actuator_battery_lock = 15;

    strncat(buffer, "{\"battery\":{\"voltage\":", size - strlen(buffer) - 1);
    append_json_value(buffer, size, array_value(values, idx_battery_voltage));
    strncat(buffer, ",\"current\":", size - strlen(buffer) - 1);
    append_json_value(buffer, size, array_value(values, idx_battery_current));
    strncat(buffer, ",\"soc\":", size - strlen(buffer) - 1);
    append_json_value(buffer, size, array_value(values, idx_battery_soc));

    strncat(buffer, "},\"hydrogen\":{\"pressure\":", size - strlen(buffer) - 1);
    append_json_value(buffer, size, array_value(values, idx_hydrogen_pressure));
    strncat(buffer, ",\"current\":", size - strlen(buffer) - 1);
    append_json_value(buffer, size, array_value(values, idx_hydrogen_current));
    strncat(buffer, ",\"voltage\":", size - strlen(buffer) - 1);
    append_json_value(buffer, size, array_value(values, idx_hydrogen_voltage));

    strncat(buffer, "},\"gps\":{\"latitude\":", size - strlen(buffer) - 1);
    append_json_value(buffer, size, array_value(values, idx_gps_latitude));
    strncat(buffer, ",\"longitude\":", size - strlen(buffer) - 1);
    append_json_value(buffer, size, array_value(values, idx_gps_longitude));
    strncat(buffer, ",\"navigation_failed\":", size - strlen(buffer) - 1);
    append_json_value(buffer, size, array_value(values, idx_gps_navigation_failed));
    strncat(buffer, ",\"satellite_available\":", size - strlen(buffer) - 1);
    append_json_value(buffer, size, array_value(values, idx_gps_satellite_available));

    strncat(buffer, "},\"actuators\":{\"lantern\":", size - strlen(buffer) - 1);
    append_json_value(buffer, size, array_value(values, idx_actuator_lantern));
    strncat(buffer, ",\"motor\":", size - strlen(buffer) - 1);
    append_json_value(buffer, size, array_value(values, idx_actuator_motor));
    strncat(buffer, ",\"alarm\":", size - strlen(buffer) - 1);
    append_json_value(buffer, size, array_value(values, idx_actuator_alarm));
    strncat(buffer, ",\"hydrogen_cell\":", size - strlen(buffer) - 1);
    append_json_value(buffer, size, array_value(values, idx_actuator_hydrogen_cell));
    strncat(buffer, ",\"hydrogen_tank\":", size - strlen(buffer) - 1);
    append_json_value(buffer, size, array_value(values, idx_actuator_hydrogen_tank));
    strncat(buffer, ",\"battery_lock\":", size - strlen(buffer) - 1);
    append_json_value(buffer, size, array_value(values, idx_actuator_battery_lock));
    strncat(buffer, "}}", size - strlen(buffer) - 1);
}

static void persist_report(const char* uuid, const char* report_json, const char* state_json)
{
    sqlite3* db = open_database();
    if (db == NULL)
        return;

    char timestamp[32];
    now_iso(timestamp, sizeof(timestamp));

    sqlite3_stmt* stmt = NULL;

    sqlite3_prepare_v2(db,
        "INSERT INTO bike_reports (bike_uuid, received_at, report_json) VALUES (?, ?, ?)",
        -1, &stmt, NULL);
    sqlite3_bind_text(stmt, 1, uuid, -1, SQLITE_TRANSIENT);
    sqlite3_bind_text(stmt, 2, timestamp, -1, SQLITE_TRANSIENT);
    sqlite3_bind_text(stmt, 3, report_json, -1, SQLITE_TRANSIENT);
    sqlite3_step(stmt);
    sqlite3_finalize(stmt);

    sqlite3_prepare_v2(db,
        "INSERT INTO bike_state (bike_uuid, state_json, updated_at) VALUES (?, ?, ?) "
        "ON CONFLICT(bike_uuid) DO UPDATE SET state_json = excluded.state_json, updated_at = excluded.updated_at",
        -1, &stmt, NULL);
    sqlite3_bind_text(stmt, 1, uuid, -1, SQLITE_TRANSIENT);
    sqlite3_bind_text(stmt, 2, state_json, -1, SQLITE_TRANSIENT);
    sqlite3_bind_text(stmt, 3, timestamp, -1, SQLITE_TRANSIENT);
    sqlite3_step(stmt);
    sqlite3_finalize(stmt);

    sqlite3_prepare_v2(db,
        "DELETE FROM bike_reports WHERE bike_uuid = ? AND id NOT IN ("
        "SELECT id FROM bike_reports WHERE bike_uuid = ? ORDER BY id DESC LIMIT 100)",
        -1, &stmt, NULL);
    sqlite3_bind_text(stmt, 1, uuid, -1, SQLITE_TRANSIENT);
    sqlite3_bind_text(stmt, 2, uuid, -1, SQLITE_TRANSIENT);
    sqlite3_step(stmt);
    sqlite3_finalize(stmt);

    sqlite3_close(db);
    update_status_seen(uuid, "reporting", timestamp);
}

static void persist_dataset_snapshot(const char* uuid, ClientDataSet data_set)
{
    MmsValue* values = ClientDataSet_getValues(data_set);

    if (values == NULL)
        return;

    char values_json[4096] = {0};
    char state_json[4096] = {0};
    char report_json[8192] = {0};

    build_values_json(values_json, sizeof(values_json), values);
    build_state_json(state_json, sizeof(state_json), values);

    snprintf(report_json, sizeof(report_json),
        "{\"rpt_id\":\"%s\",\"rcb_reference\":\"%s\",\"data_set\":\"%s\",\"seq_num\":0,\"snapshot\":true,\"values\":%s}",
        RPT_ID, RCB_REFERENCE, DATASET_REFERENCE, values_json);

    persist_report(uuid, report_json, state_json);
}

static void update_command_status(int command_id, const char* status, const char* error, bool executed)
{
    sqlite3* db = open_database();
    if (db == NULL)
        return;

    char timestamp[32];
    now_iso(timestamp, sizeof(timestamp));

    sqlite3_stmt* stmt = NULL;

    if (executed) {
        sqlite3_prepare_v2(db,
            "UPDATE bike_commands SET status = ?, error = ?, updated_at = ?, executed_at = ? WHERE id = ?",
            -1, &stmt, NULL);
        sqlite3_bind_text(stmt, 1, status, -1, SQLITE_TRANSIENT);
        if (error != NULL)
            sqlite3_bind_text(stmt, 2, error, -1, SQLITE_TRANSIENT);
        else
            sqlite3_bind_null(stmt, 2);
        sqlite3_bind_text(stmt, 3, timestamp, -1, SQLITE_TRANSIENT);
        sqlite3_bind_text(stmt, 4, timestamp, -1, SQLITE_TRANSIENT);
        sqlite3_bind_int(stmt, 5, command_id);
    }
    else {
        sqlite3_prepare_v2(db,
            "UPDATE bike_commands SET status = ?, error = ?, updated_at = ? WHERE id = ?",
            -1, &stmt, NULL);
        sqlite3_bind_text(stmt, 1, status, -1, SQLITE_TRANSIENT);
        if (error != NULL)
            sqlite3_bind_text(stmt, 2, error, -1, SQLITE_TRANSIENT);
        else
            sqlite3_bind_null(stmt, 2);
        sqlite3_bind_text(stmt, 3, timestamp, -1, SQLITE_TRANSIENT);
        sqlite3_bind_int(stmt, 4, command_id);
    }

    sqlite3_step(stmt);
    sqlite3_finalize(stmt);
    sqlite3_close(db);
}

static bool fetch_pending_command(const char* uuid, PendingCommand* command)
{
    sqlite3* db = open_database();
    if (db == NULL)
        return false;

    sqlite3_stmt* stmt = NULL;
    sqlite3_prepare_v2(db,
        "SELECT id, object_reference, value FROM bike_commands "
        "WHERE bike_uuid = ? AND command = 'dbpos' AND status = 'pending' "
        "ORDER BY id LIMIT 1",
        -1, &stmt, NULL);
    sqlite3_bind_text(stmt, 1, uuid, -1, SQLITE_TRANSIENT);

    bool found = false;

    if (sqlite3_step(stmt) == SQLITE_ROW) {
        command->id = sqlite3_column_int(stmt, 0);
        const char* object_reference = (const char*) sqlite3_column_text(stmt, 1);
        command->value = sqlite3_column_int(stmt, 2);

        if (object_reference != NULL) {
            strncpy(command->object_reference, object_reference, sizeof(command->object_reference) - 1);
            command->object_reference[sizeof(command->object_reference) - 1] = '\0';
            found = true;
        }
    }

    sqlite3_finalize(stmt);
    sqlite3_close(db);

    if (found)
        update_command_status(command->id, "running", NULL, false);

    return found;
}

static void execute_dbpos_command(IedConnection con, PendingCommand* command)
{
    if (command->value != 0 && command->value != 40) {
        update_command_status(command->id, "failed", "Dbpos value must be 0 or 40", true);
        return;
    }

    ControlObjectClient control = ControlObjectClient_create(command->object_reference, con);
    if (control == NULL) {
        update_command_status(command->id, "failed", "Failed to create MMS control object", true);
        return;
    }

    MmsValue* ctl_value = MmsValue_newBitString(2);
    MmsValue_setBitStringFromInteger(ctl_value, command->value == 40 ? 2 : 0);

    bool success = ControlObjectClient_operate(control, ctl_value, 0);

    if (success) {
        update_command_status(command->id, "succeeded", NULL, true);
    }
    else {
        IedClientError error = ControlObjectClient_getLastError(control);
        update_command_status(command->id, "failed", IedClientError_toString(error), true);
    }

    MmsValue_delete(ctl_value);
    ControlObjectClient_destroy(control);
}

static void process_pending_commands(IedConnection con, const char* uuid)
{
    PendingCommand command;

    while (running && IedConnection_getState(con) == IED_STATE_CONNECTED && fetch_pending_command(uuid, &command)) {
        fprintf(stderr, "[collector] executing command %d for %s on %s with value %d\n",
            command.id, uuid, command.object_reference, command.value);
        execute_dbpos_command(con, &command);
    }
}

static void report_handler(void* parameter, ClientReport report)
{
    const char* uuid = (const char*) parameter;
    MmsValue* values = ClientReport_getDataSetValues(report);

    if (values == NULL)
        return;

    char values_json[4096] = {0};
    char state_json[4096] = {0};
    char report_json[8192] = {0};

    build_values_json(values_json, sizeof(values_json), values);
    build_state_json(state_json, sizeof(state_json), values);

    snprintf(report_json, sizeof(report_json),
        "{\"rpt_id\":\"%s\",\"rcb_reference\":\"%s\",\"data_set\":\"%s\",\"seq_num\":%u,\"values\":%s}",
        ClientReport_getRptId(report) ? ClientReport_getRptId(report) : RPT_ID,
        ClientReport_getRcbReference(report) ? ClientReport_getRcbReference(report) : RCB_REFERENCE,
        ClientReport_getDataSetName(report) ? ClientReport_getDataSetName(report) : DATASET_REFERENCE,
        ClientReport_hasSeqNum(report) ? ClientReport_getSeqNum(report) : 0,
        values_json);

    persist_report(uuid, report_json, state_json);
    update_status(uuid, "reporting");
}

static void* bike_worker(void* arg)
{
    BikeWorker* worker = (BikeWorker*) arg;

    while (running) {
        char uuid[sizeof(worker->uuid)];
        char host[sizeof(worker->host)];
        int port;

        pthread_mutex_lock(&workers_mutex);
        strncpy(uuid, worker->uuid, sizeof(uuid) - 1);
        uuid[sizeof(uuid) - 1] = '\0';
        strncpy(host, worker->host, sizeof(host) - 1);
        host[sizeof(host) - 1] = '\0';
        port = worker->port;
        worker->reconnect_requested = false;
        pthread_mutex_unlock(&workers_mutex);

        update_status(uuid, "connecting");

        IedClientError error;
        IedConnection con = IedConnection_create();
        IedConnection_connect(con, &error, host, port);

        if (error != IED_ERROR_OK) {
            fprintf(stderr, "[collector] connect failed for %s (%s:%d): %s\n",
                uuid, host, port, IedClientError_toString(error));
            update_status(uuid, "disconnected");
            IedConnection_destroy(con);
            sleep(RECONNECT_SECONDS);
            continue;
        }

        update_status(uuid, "connected");

        ClientDataSet data_set = IedConnection_readDataSetValues(con, &error, DATASET_REFERENCE, NULL);
        if (error != IED_ERROR_OK || data_set == NULL) {
            fprintf(stderr, "[collector] failed to read dataset for %s: %s\n",
                uuid, IedClientError_toString(error));
            update_status(uuid, "disconnected");
            IedConnection_close(con);
            IedConnection_destroy(con);
            sleep(RECONNECT_SECONDS);
            continue;
        }

        persist_dataset_snapshot(uuid, data_set);
        IedConnection_installReportHandler(con, RCB_REFERENCE, RPT_ID, report_handler, worker->uuid);

        ClientReportControlBlock rcb = IedConnection_getRCBValues(con, &error, RCB_REFERENCE, NULL);
        if (error != IED_ERROR_OK || rcb == NULL) {
            fprintf(stderr, "[collector] failed to read RCB for %s: %s\n",
                uuid, IedClientError_toString(error));
            update_status(uuid, "disconnected");
            ClientDataSet_destroy(data_set);
            IedConnection_close(con);
            IedConnection_destroy(con);
            sleep(RECONNECT_SECONDS);
            continue;
        }

        ClientReportControlBlock_setRptEna(rcb, true);
        ClientReportControlBlock_setGI(rcb, true);
        IedConnection_setRCBValues(con, &error, rcb, RCB_ELEMENT_RPT_ENA | RCB_ELEMENT_GI, true);

        if (error != IED_ERROR_OK) {
            fprintf(stderr, "[collector] failed to enable reports for %s: %s\n",
                uuid, IedClientError_toString(error));
            update_status(uuid, "disconnected");
        }
        else {
            update_status(uuid, "reporting");
            int health_check_countdown = HEALTH_CHECK_SECONDS;
            process_pending_commands(con, uuid);

            while (running) {
                pthread_mutex_lock(&workers_mutex);
                bool reconnect_requested = worker->reconnect_requested;
                pthread_mutex_unlock(&workers_mutex);

                if (reconnect_requested) {
                    fprintf(stderr, "[collector] endpoint changed for %s; reconnecting\n", uuid);
                    break;
                }

                if (IedConnection_getState(con) != IED_STATE_CONNECTED) {
                    fprintf(stderr, "[collector] connection lost for %s\n", uuid);
                    break;
                }

                sleep(1);
                process_pending_commands(con, uuid);
                health_check_countdown--;

                if (health_check_countdown <= 0) {
                    data_set = IedConnection_readDataSetValues(con, &error, DATASET_REFERENCE, data_set);

                    if (error != IED_ERROR_OK || data_set == NULL) {
                        fprintf(stderr, "[collector] health check failed for %s: %s\n",
                            uuid, IedClientError_toString(error));
                        break;
                    }

                    persist_dataset_snapshot(uuid, data_set);
                    health_check_countdown = HEALTH_CHECK_SECONDS;
                }
            }
        }

        if (IedConnection_getState(con) == IED_STATE_CONNECTED) {
            ClientReportControlBlock_setRptEna(rcb, false);
            IedConnection_setRCBValues(con, &error, rcb, RCB_ELEMENT_RPT_ENA, true);
        }

        ClientReportControlBlock_destroy(rcb);
        ClientDataSet_destroy(data_set);
        IedConnection_close(con);
        IedConnection_destroy(con);

        if (running) {
            update_status(uuid, "disconnected");
            sleep(RECONNECT_SECONDS);
        }
    }

    pthread_mutex_lock(&workers_mutex);
    worker->active = false;
    pthread_mutex_unlock(&workers_mutex);
    return NULL;
}

static BikeWorker* find_worker(const char* uuid)
{
    for (int i = 0; i < MAX_BIKES; i++) {
        if (workers[i].active && strcmp(workers[i].uuid, uuid) == 0)
            return &workers[i];
    }

    return NULL;
}

static void spawn_worker(const char* uuid, const char* host, int port)
{
    pthread_mutex_lock(&workers_mutex);

    BikeWorker* existing_worker = find_worker(uuid);
    if (existing_worker != NULL) {
        if (strcmp(existing_worker->host, host) != 0 || existing_worker->port != port) {
            strncpy(existing_worker->host, host, sizeof(existing_worker->host) - 1);
            existing_worker->host[sizeof(existing_worker->host) - 1] = '\0';
            existing_worker->port = port;
            existing_worker->reconnect_requested = true;
            fprintf(stderr, "[collector] worker endpoint updated for %s (%s:%d)\n", uuid, host, port);
        }

        pthread_mutex_unlock(&workers_mutex);
        return;
    }

    for (int i = 0; i < MAX_BIKES; i++) {
        if (!workers[i].active) {
            memset(&workers[i], 0, sizeof(BikeWorker));
            strncpy(workers[i].uuid, uuid, sizeof(workers[i].uuid) - 1);
            strncpy(workers[i].host, host, sizeof(workers[i].host) - 1);
            workers[i].port = port;
            workers[i].active = true;

            if (pthread_create(&workers[i].thread, NULL, bike_worker, &workers[i]) != 0) {
                fprintf(stderr, "[collector] failed to start worker for %s\n", uuid);
                workers[i].active = false;
            }
            else {
                pthread_detach(workers[i].thread);
                fprintf(stderr, "[collector] worker started for %s (%s:%d)\n", uuid, host, port);
            }

            pthread_mutex_unlock(&workers_mutex);
            return;
        }
    }

    fprintf(stderr, "[collector] max bike workers reached (%d)\n", MAX_BIKES);
    pthread_mutex_unlock(&workers_mutex);
}

static void discover_bikes(void)
{
    sqlite3* db = open_database();
    if (db == NULL)
        return;

    sqlite3_stmt* stmt = NULL;
    sqlite3_prepare_v2(db, "SELECT uuid, host, port FROM bikes ORDER BY updated_at DESC", -1, &stmt, NULL);

    while (sqlite3_step(stmt) == SQLITE_ROW) {
        const char* uuid = (const char*) sqlite3_column_text(stmt, 0);
        const char* host = (const char*) sqlite3_column_text(stmt, 1);
        int port = sqlite3_column_int(stmt, 2);

        if (uuid != NULL && host != NULL)
            spawn_worker(uuid, host, port);
    }

    sqlite3_finalize(stmt);
    sqlite3_close(db);
}

int main(int argc, char** argv)
{
    if (argc > 1)
        database_path = argv[1];

    signal(SIGINT, handle_signal);
    signal(SIGTERM, handle_signal);

    fprintf(stderr, "[collector] using database %s\n", database_path);

    while (running) {
        discover_bikes();
        sleep(5);
    }

    fprintf(stderr, "[collector] shutting down\n");
    return 0;
}
