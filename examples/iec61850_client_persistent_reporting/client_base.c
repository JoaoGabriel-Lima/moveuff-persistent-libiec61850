/*
 * client_example_reporting.c
 *
 * This example is intended to be used with server_example_basic_io or server_example_goose.
 */

#include "iec61850_client.h"

#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>

#include "hal_thread.h"

static int running = 0;

void sigint_handler(int signalId)
{
    running = 0;
}


void
reportCallbackFunction(void* parameter, ClientReport report)
{
    LinkedList dataSetDirectory = (LinkedList) parameter;

    MmsValue* dataSetValues = ClientReport_getDataSetValues(report);

    printf("received report for %s with rptId %s\n", ClientReport_getRcbReference(report), ClientReport_getRptId(report));

    if (ClientReport_hasTimestamp(report)) {
        time_t unixTime = ClientReport_getTimestamp(report) / 1000;

#ifdef WIN32
		char* timeBuf = ctime(&unixTime);
#else
		char timeBuf[30];
		ctime_r(&unixTime, timeBuf);
#endif

        printf("  report contains timestamp (%u): %s", (unsigned int) unixTime, timeBuf);
    }

    if (dataSetDirectory) {
        int i;
        for (i = 0; i < LinkedList_size(dataSetDirectory); i++) {
            ReasonForInclusion reason = ClientReport_getReasonForInclusion(report, i);

            if (reason != IEC61850_REASON_NOT_INCLUDED) {

                char valBuffer[500];
                sprintf(valBuffer, "no value");

                if (dataSetValues) {
                    MmsValue* value = MmsValue_getElement(dataSetValues, i);

                    if (value) {
                        MmsValue_printToBuffer(value, valBuffer, 500);
                    }
                }

                LinkedList entry = LinkedList_get(dataSetDirectory, i);

                char* entryName = (char*) entry->data;

                printf("  %s (included for reason %i): %s\n", entryName, reason, valBuffer);
            }
        }
    }

}

int
main(int argc, char** argv)
{
    char* hostname;
    int tcpPort = 102;

    if (argc > 1)
        hostname = argv[1];
    else
        hostname = "192.168.2.130";

    if (argc > 2)
        tcpPort = atoi(argv[2]);

    running = 1;

    signal(SIGINT, sigint_handler);

    IedClientError error;

    IedConnection con = IedConnection_create();

    IedConnection_connect(con, &error, hostname, tcpPort);

    if (error == IED_ERROR_OK) {

        printf("Connected successfully!\n");

        /* Get the list of logical devices */
        LinkedList deviceList = IedConnection_getLogicalDeviceList(con, &error);

        if (error == IED_ERROR_OK) {
            printf("Logical Devices:\n");
            LinkedList device = LinkedList_getNext(deviceList);
            while (device != NULL) {
                printf("  %s\n", (char*) device->data);
                device = LinkedList_getNext(device);
            }
            LinkedList_destroy(deviceList);
        }

        ClientReportControlBlock rcb = NULL;
        ClientDataSet clientDataSet = NULL;
        LinkedList dataSetDirectory = NULL;
        bool dataSetCreatedSuccessfully = false;

        /* Try to get the list of logical nodes */
        LinkedList logicalNodeList = IedConnection_getLogicalNodeDirectory(con, &error, "MOVEUFFBIKE/LLN0", ACSI_CLASS_DATA_OBJECT);
        
        if (error == IED_ERROR_OK) {
            printf("\nData Objects in MOVEUFFBIKE/LLN0:\n");
            LinkedList node = LinkedList_getNext(logicalNodeList);
            while (node != NULL) {
                printf("  %s\n", (char*) node->data);
                node = LinkedList_getNext(node);
            }
            LinkedList_destroy(logicalNodeList);
        }

        /* First, let's explore what's available in DEEV1 */
        printf("\nExploring MOVEUFFBIKE/DEEV1:\n");
        LinkedList deev1Objects = IedConnection_getLogicalNodeDirectory(con, &error, "MOVEUFFBIKE/DEEV1", ACSI_CLASS_DATA_OBJECT);
        
        if (error == IED_ERROR_OK && deev1Objects != NULL) {
            LinkedList obj = LinkedList_getNext(deev1Objects);
            while (obj != NULL) {
                printf("  Data Object: %s\n", (char*) obj->data);
                obj = LinkedList_getNext(obj);
            }
            LinkedList_destroy(deev1Objects);
        }

        /* Create a dynamic data set for reporting */
        LinkedList dataSetElements = LinkedList_create();
        LinkedList_add(dataSetElements, "MOVEUFFBIKE/LLN0$ST$Mod$stVal");
        LinkedList_add(dataSetElements, "MOVEUFFBIKE/LLN0$ST$Mod$q");
        LinkedList_add(dataSetElements, "MOVEUFFBIKE/LLN0$ST$Mod$t");
        LinkedList_add(dataSetElements, "MOVEUFFBIKE/DEEV1$DC$EVNam$latitude");
        LinkedList_add(dataSetElements, "MOVEUFFBIKE/DEEV1$DC$EVNam$longitude");
        LinkedList_add(dataSetElements, "MOVEUFFBIKE/DEEV1$DC$EVNam$altitude");
        LinkedList_add(dataSetElements, "MOVEUFFBIKE/DEEV1$MX$Soc$mag");
        LinkedList_add(dataSetElements, "MOVEUFFBIKE/DEEV1$ST$Soc$q");
        LinkedList_add(dataSetElements, "MOVEUFFBIKE/DEEV1$ST$Soc$t");

        printf("\nAttempting to create dynamic data set...\n");
        IedConnection_createDataSet(con, &error, "MOVEUFFBIKE/LLN0.DynDataSet", dataSetElements);

        if (error != IED_ERROR_OK) {
            printf("Failed to create dynamic data set (error: %i)\n", error);
            printf("DataSet creation failed - will read values directly instead.\n");
            
            /* Don't destroy the list - it contains string literals that shouldn't be freed
             * Just set pointers to NULL and the list will be cleaned up at exit */
            dataSetElements = NULL;
            dataSetDirectory = NULL;
            clientDataSet = NULL;
            
            /* We'll read values directly in the loop */
        }

        else {
            printf("Dynamic data set created successfully!\n");
            dataSetCreatedSuccessfully = true;

            /* Read the data set values */
            clientDataSet = IedConnection_readDataSetValues(con, &error, "MOVEUFFBIKE/LLN0.DynDataSet", NULL);

            if (clientDataSet == NULL) {
                printf("Failed to read dataset values (error: %i)\n", error);
                dataSetElements = NULL;
                dataSetCreatedSuccessfully = false;
            }
            else {
                printf("Data set values read successfully!\n");
                dataSetDirectory = dataSetElements;
            }
        }

        /* Try to get RCB only if DataSet was created successfully */
        if (clientDataSet != NULL && dataSetDirectory != NULL) {
            LinkedList rcbList = IedConnection_getLogicalNodeDirectory(con, &error, "MOVEUFFBIKE/LLN0", ACSI_CLASS_BRCB);

            if (error == IED_ERROR_OK && rcbList != NULL) {
                LinkedList rcbElement = LinkedList_getNext(rcbList);
                
                if (rcbElement != NULL) {
                    char rcbReference[130];
                    snprintf(rcbReference, 130, "MOVEUFFBIKE/LLN0.%s", (char*)rcbElement->data);
                    
                    printf("Found RCB: %s\n", rcbReference);
                    
                    /* Get RCB values */
                    rcb = IedConnection_getRCBValues(con, &error, rcbReference, NULL);
                }
                
                LinkedList_destroy(rcbList);
            }

            if (error == IED_ERROR_OK && rcb != NULL) {
                printf("RCB retrieved successfully: %s\n", ClientReportControlBlock_getRptId(rcb));

                /* prepare the parameters of the RCP */
                ClientReportControlBlock_setResv(rcb, true);
                ClientReportControlBlock_setTrgOps(rcb, TRG_OPT_DATA_CHANGED | TRG_OPT_QUALITY_CHANGED | TRG_OPT_GI);
                ClientReportControlBlock_setDataSetReference(rcb, "MOVEUFFBIKE/LLN0$DynDataSet"); /* NOTE the "$" instead of "." ! */
                ClientReportControlBlock_setRptEna(rcb, true);
                ClientReportControlBlock_setGI(rcb, true);

                /* Configure the report receiver */
                IedConnection_installReportHandler(con, "MOVEUFFBIKE/LLN0.RP", ClientReportControlBlock_getRptId(rcb), reportCallbackFunction,
                        (void*) dataSetDirectory);

                /* Write RCB parameters and enable report */
                IedConnection_setRCBValues(con, &error, rcb, RCB_ELEMENT_RESV | RCB_ELEMENT_DATSET | RCB_ELEMENT_TRG_OPS | RCB_ELEMENT_RPT_ENA | RCB_ELEMENT_GI, true);

                if (error != IED_ERROR_OK) {
                    printf("setRCBValues service error (code: %i)!\n", error);
                }
                else {
                    printf("RCB configured successfully!\n");
                }

                Thread_sleep(1000);

                /* Trigger GI Report */
                ClientReportControlBlock_setGI(rcb, true);
                IedConnection_setRCBValues(con, &error, rcb, RCB_ELEMENT_GI, true);

                if (error != IED_ERROR_OK) {
                    printf("Error triggering a GI report (code: %i)\n", error);
                }
            }
            else {
                printf("No RCB found or error getting RCBs (error: %i).\n", error);
            }
        }
        else {
            printf("DataSet not available. Will read values directly.\n");
        }

        while (running) {
            Thread_sleep(1000);

            IedConnectionState conState = IedConnection_getState(con);

            if (conState != IED_STATE_CONNECTED) {
                printf("Connection closed by server!\n");
                running = 0;
                break;
            }

            /* If no RCB, read values periodically */
            if (rcb == NULL) {
                printf("\n=== Periodic Data Read ===\n");
                
                /* Read individual values directly */
                MmsValue* modVal = IedConnection_readObject(con, &error, "MOVEUFFBIKE/LLN0.Mod.stVal", IEC61850_FC_ST);
                if (modVal != NULL && error == IED_ERROR_OK) {
                    char buffer[100];
                    MmsValue_printToBuffer(modVal, buffer, 100);
                    printf("  MOVEUFFBIKE/LLN0.Mod.stVal: %s\n", buffer);
                    MmsValue_delete(modVal);
                }
                
                /* Read geolocation values */
                MmsValue* latitude = IedConnection_readObject(con, &error, "MOVEUFFBIKE/DEEV1.EVNam.latitude", IEC61850_FC_DC);
                if (latitude != NULL && error == IED_ERROR_OK) {
                    printf("  MOVEUFFBIKE/DEEV1.EVNam.latitude: %.6f\n", MmsValue_toFloat(latitude));
                    MmsValue_delete(latitude);
                }
                
                MmsValue* longitude = IedConnection_readObject(con, &error, "MOVEUFFBIKE/DEEV1.EVNam.longitude", IEC61850_FC_DC);
                if (longitude != NULL && error == IED_ERROR_OK) {
                    printf("  MOVEUFFBIKE/DEEV1.EVNam.longitude: %.6f\n", MmsValue_toFloat(longitude));
                    MmsValue_delete(longitude);
                }
                
                MmsValue* altitude = IedConnection_readObject(con, &error, "MOVEUFFBIKE/DEEV1.EVNam.altitude", IEC61850_FC_DC);
                if (altitude != NULL && error == IED_ERROR_OK) {
                    printf("  MOVEUFFBIKE/DEEV1.EVNam.altitude: %.3f m\n", MmsValue_toFloat(altitude));
                    MmsValue_delete(altitude);
                }
                
                /* Read SoC */
                MmsValue* soc = IedConnection_readObject(con, &error, "MOVEUFFBIKE/DEEV1.Soc.mag", IEC61850_FC_MX);
                if (soc != NULL && error == IED_ERROR_OK) {
                    printf("  MOVEUFFBIKE/DEEV1.Soc.mag: %.2f%%\n", MmsValue_toFloat(soc));
                    MmsValue_delete(soc);
                }
            }
            else if (clientDataSet != NULL) {
                ClientDataSet newDataSet = IedConnection_readDataSetValues(con, &error, "MOVEUFFBIKE/LLN0.DynDataSet", NULL);
                
                if (newDataSet != NULL) {
                    printf("\n=== Periodic Data Read (via DataSet) ===\n");
                    MmsValue* values = ClientDataSet_getValues(newDataSet);
                    
                    int i;
                    for (i = 0; i < LinkedList_size(dataSetDirectory); i++) {
                        MmsValue* value = MmsValue_getElement(values, i);
                        LinkedList entry = LinkedList_get(dataSetDirectory, i);
                        char* entryName = (char*) entry->data;
                        
                        char valBuffer[500];
                        MmsValue_printToBuffer(value, valBuffer, 500);
                        
                        printf("  %s: %s\n", entryName, valBuffer);
                    }
                    
                    ClientDataSet_destroy(newDataSet);
                }
            }
        }

        /* disable reporting */
        if (rcb != NULL) {
            ClientReportControlBlock_setRptEna(rcb, false);
            IedConnection_setRCBValues(con, &error, rcb, RCB_ELEMENT_RPT_ENA, true);
        }

exit_error:

        /* Delete dynamic data set if it was successfully created */
        if (dataSetCreatedSuccessfully && clientDataSet != NULL) {
            IedConnection_deleteDataSet(con, &error, "MOVEUFFBIKE/LLN0.DynDataSet");
            if (error != IED_ERROR_OK) {
                printf("Note: Could not delete dynamic data set (error: %i)\n", error);
            }
        }

        IedConnection_close(con);

        if (clientDataSet)
            ClientDataSet_destroy(clientDataSet);

        if (rcb)
            ClientReportControlBlock_destroy(rcb);

        /* Only destroy the list if DataSet was created successfully
         * Otherwise it contains string literals that shouldn't be freed */
        if (dataSetDirectory && dataSetCreatedSuccessfully)
            LinkedList_destroy(dataSetDirectory);
    }
    else {
        printf("Failed to connect to %s:%i\n", hostname, tcpPort);
    }

    IedConnection_destroy(con);
    return 0;
}


