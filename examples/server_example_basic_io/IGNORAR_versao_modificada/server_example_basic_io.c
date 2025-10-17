#include "iec61850_server.h"
#include "hal_thread.h"
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include "static_model.h"
#include <curl/curl.h>
#include <pthread.h>
#include <termios.h>

//Definições para gerais para a libiec61850, socket entre programas e utilização da geolocalização com o GY-GPS6MU2 - Início
static int running = 0;
static IedServer iedServer = NULL;

#define PORT 8080
#define BUFFER_SIZE 1024

#define MAX_NMEA_LENGTH 100
#define GPS_PORT "/dev/serial0"

int server_fd, new_socket;
//Definições para gerais para a libiec61850, socket entre programas e utilização da geolocalização com o GY-GPS6MU2 - Fim



//Encerrar programa com ctrl+c - Início
void sigint_handler(int signalId)
{
    running = 0;

    close(server_fd);

    exit(EXIT_SUCCESS);
}
//Encerrar programa com ctrl+c - Fim



//Gelocalização - Início
int setup_uart(const char *uart) {
    int uart_fd = open(uart, O_RDONLY | O_NOCTTY);  // Abre a UART para leitura
    if (uart_fd == -1) {
        perror("Erro ao abrir a porta serial");
        return -1;
    }

    struct termios options;
    tcgetattr(uart_fd, &options);  // Obtém as configurações atuais da UART
    cfsetispeed(&options, B9600);  // Configura a velocidade de entrada (9600 bps)
    cfsetospeed(&options, B9600);  // Configura a velocidade de saída (9600 bps)

    options.c_cflag &= ~PARENB;    // Desativa a paridade
    options.c_cflag &= ~CSTOPB;    // Usa 1 bit de parada
    options.c_cflag &= ~CSIZE;     // Limpa a máscara de tamanho de dados
    options.c_cflag |= CS8;        // Configura 8 bits de dados

    tcsetattr(uart_fd, TCSANOW, &options);  // Aplica as configurações

    return uart_fd;
}
//Gelocalização - Fim



int main(int argc, char** argv)
{
    //Inicializações relacionadas a libiec61850 - Início
    int tcpPort = 102;

    if (argc > 1) {
        tcpPort = atoi(argv[1]);
    }

    printf("Using libIEC61850 version %s\n", LibIEC61850_getVersionString());

    /* Create new server configuration object */
    IedServerConfig config = IedServerConfig_create();

    /* Set buffer size for buffered report control blocks to 200000 bytes */
    IedServerConfig_setReportBufferSize(config, 200000);

    /* Set stack compliance to a specific edition of the standard (WARNING: data model has also to be checked for compliance) */
    IedServerConfig_setEdition(config, IEC_61850_EDITION_2);

    /* Set the base path for the MMS file services */
    IedServerConfig_setFileServiceBasePath(config, "./vmd-filestore/");

    /* disable MMS file service */
    IedServerConfig_enableFileService(config, false);

    /* enable dynamic data set service */
    IedServerConfig_enableDynamicDataSetService(config, true);

    /* disable log service */
    IedServerConfig_enableLogService(config, false);

    /* set maximum number of clients */
    IedServerConfig_setMaxMmsConnections(config, 2);

    /* Create a new IEC 61850 server instance */
    iedServer = IedServer_createWithConfig(&iedModel, NULL, config);

    /* configuration object is no longer required */
    IedServerConfig_destroy(config);

    /* set the identity values for MMS identify service */
    IedServer_setServerIdentity(iedServer, "MZ", "basic io", "1.4.2");

    /* By default access to variables with FC=DC and FC=CF is not allowed.
     * This allow to write to simpleIOGenericIO/GGIO1.NamPlt.vendor variable used
     * by iec61850_client_example1.
     */


    /* MMS server will be instructed to start listening for client connections. */
    IedServer_start(iedServer, tcpPort);

    if (!IedServer_isRunning(iedServer)) {
        printf("Starting server failed (maybe need root permissions or another server is already using the port)! Exit.\n");
        IedServer_destroy(iedServer);
        exit(-1);
    }
    //Inicializações relacionadas a libiec61850 - Fim



    //Inicialização de socket - Início
    struct sockaddr_in address;
    int addrlen = sizeof(address);
    char buffer[BUFFER_SIZE] = {0};
    const char *response = "Mensagem recebida";

    //Recente Cria o socket
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
        perror("socket falhou");
        exit(EXIT_FAILURE);
    }

    //Recente Define as propriedades do endereço do servidor
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);


    //Recente Associa o socket ao endereço
    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0) {
        perror("bind falhou");
        close(server_fd);
        exit(EXIT_FAILURE);
    }

    //Recente Escuta por conexões
    if (listen(server_fd, 3) < 0) {
        perror("listen falhou");
        close(server_fd);
        exit(EXIT_FAILURE);
    }
    //Inicialização de socket - Fim



    new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t*)&addrlen);

    if (new_socket < 0) {
        perror("accept falhou");
        close(server_fd);
        exit(EXIT_FAILURE);
    }

    running = 1;

    signal(SIGINT, sigint_handler);



    while (running) {
        uint64_t timestamp = Hal_getTimeInMs();
        Timestamp iecTimestamp;
        int bytes_read;
        float SoC = 0.0;



        //Recebimento socket - Início
        if ((bytes_read = read(new_socket, buffer, BUFFER_SIZE - 1)) > 0) {
            buffer[bytes_read] = '\0';  // Garante que a string esteja terminada em NULL
            printf("SoC: %s\n", buffer);

            SoC = atof(buffer);
        }
        //Recebimento socket - Início



        //Geolocalização - Início
        int uart_fd = setup_uart(GPS_PORT);
        if (uart_fd == -1) {
            return -1;
        }
        char buffer[256];
        int count = 0;
        float latitude;
        float longitude;
        float altitude;
        //Geolocalização - Fim



        int i = 0;

        while(1) {
            int n = read(uart_fd, &buffer[count], 1);
            if (n > 0) {
                if (buffer[count] == '\n' || buffer[count] == '\r') {
                    buffer[count] = '\0'; // Termina a string quando encontrar um \n ou \r

                    //Leitura da geolocalização - Início
                    if (strstr(buffer, "$GPGGA") != NULL) {
                        printf("GPGGA completo: %s\n", buffer);

                        char* token = strtok(buffer, ",");      

                        while (token != NULL) {

                            if ( i == 2 ) {
                                latitude = (atof(token))/100;
                            } else if ( i == 3 ) {
                                if (token = "S") {
                                    latitude = -latitude;
                                }
                            } else if ( i == 4 ) {
                                longitude = (atof(token))/100;
                            } else if ( i == 5 ) {
                                if (token = "W") {
                                    longitude = -longitude;
                                }
                            } else if ( i == 9 ) {
                                altitude = atof(token);
                                break;
                            }

                            token = strtok(NULL, ",");

                            i++;
                        }
                        break;
                    }
                    count = 0; // Reset para a próxima linha
                } else {
                    count++;
                }
                //Leitura da geolocalização - Fim
            }
        }   

        //Atualizações dos valores para o SCADA MMS - Início
        Timestamp_clearFlags(&iecTimestamp);
        Timestamp_setTimeInMilliseconds(&iecTimestamp, timestamp);
        Timestamp_setLeapSecondKnown(&iecTimestamp, true);   
        IedServer_lockDataModel(iedServer);     
        IedServer_updateTimestampAttributeValue(iedServer, IEDMODEL_BIKE_LLN0_Mod_t, &iecTimestamp);
        IedServer_updateTimestampAttributeValue(iedServer, IEDMODEL_BIKE_LLN0_Beh_t, &iecTimestamp);
        IedServer_updateTimestampAttributeValue(iedServer, IEDMODEL_BIKE_LLN0_Health_t, &iecTimestamp);
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_BIKE_DEEV1_EVNam_latitude, latitude);
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_BIKE_DEEV1_EVNam_longitude, longitude);
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_BIKE_DEEV1_EVNam_altitude, altitude);
        IedServer_updateTimestampAttributeValue(iedServer, IEDMODEL_BIKE_DEEV1_ConnTypSel_t, &iecTimestamp);  
        IedServer_updateTimestampAttributeValue(iedServer, IEDMODEL_BIKE_DEEV1_Beh_t, &iecTimestamp);        
        IedServer_updateTimestampAttributeValue(iedServer, IEDMODEL_BIKE_DEEV1_Health_t, &iecTimestamp);
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_BIKE_DEEV1_Soc_mag, SoC);
        IedServer_updateTimestampAttributeValue(iedServer, IEDMODEL_BIKE_DEEV1_Soc_t, &iecTimestamp);         
        IedServer_updateTimestampAttributeValue(iedServer, IEDMODEL_BIKE_XSWI1_Loc_t, &iecTimestamp);          
        IedServer_updateTimestampAttributeValue(iedServer, IEDMODEL_BIKE_XSWI1_OpCnt_t, &iecTimestamp);          
        IedServer_updateTimestampAttributeValue(iedServer, IEDMODEL_BIKE_XSWI1_SwTyp_t, &iecTimestamp);         
        IedServer_updateTimestampAttributeValue(iedServer, IEDMODEL_BIKE_XSWI1_BlkOpn_t, &iecTimestamp);          
        IedServer_updateTimestampAttributeValue(iedServer, IEDMODEL_BIKE_XSWI1_BlkCls_t, &iecTimestamp);
        IedServer_updateTimestampAttributeValue(iedServer, IEDMODEL_BIKE_GGIO1_Intln_t, &iecTimestamp);           
        IedServer_unlockDataModel(iedServer);
        //Envia uma resposta ao cliente socket - Início
        send(new_socket, response, strlen(response), 0);
        memset(buffer, 0, BUFFER_SIZE);
        //Envia uma resposta ao cliente socket - Fim
        printf("Latitude: %.6f \nLongitude: %.6f \nAltitude: %.3f m \n", latitude, longitude, altitude);
        Thread_sleep(1000);
        if (bytes_read < 0) {
            perror("read falhou");
        }
        //Atualizações dos valores para o SCADA MMS - Fim
    }

    close(new_socket);

    /* stop MMS server - close TCP server socket and all client sockets */
    IedServer_stop(iedServer);

    /* Cleanup - free all resources */
    IedServer_destroy(iedServer);

    //Recente
    close(server_fd);

    return 0;
}