#include "TinyGPSPlus.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <termios.h>
/* 
   This sample sketch should be the first you try out when you are testing a TinyGPSPlus
   (TinyGPSPlus) installation.  In normal use, you feed TinyGPSPlus objects characters from
   a serial NMEA GPS device, but this example uses static strings for simplicity.
*/

#define GPS_PORT "/dev/serial0" // Porta serial do Raspberry Pi

// A sample NMEA stream.
//const char *gpsStream =
//  "$GPRMC,045103.000,A,3014.1984,N,09749.2872,W,0.67,161.46,030913,,,A*7C\r\n"
//  "$GPGGA,045104.000,3014.1985,N,09749.2873,W,1,09,1.2,211.6,M,-22.5,M,,0000*62\r\n"
//  "$GPRMC,045200.000,A,3014.3820,N,09748.9514,W,36.88,65.02,030913,,,A*77\r\n"
// "$GPGGA,045201.000,3014.3864,N,09748.9411,W,1,10,1.2,200.8,M,-22.5,M,,0000*6C\r\n"
//  "$GPRMC,045251.000,A,3014.4275,N,09749.0626,W,0.51,217.94,030913,,,A*7D\r\n"
//  "$GPGGA,045252.000,3014.4273,N,09749.0628,W,1,09,1.3,206.9,M,-22.5,M,,0000*6F\r\n";

// The TinyGPSPlus object
TinyGPSPlus gps;

// Função para configurar a UART
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


void displayInfo() {
    printf("%s", "Location: "); 
    if (gps.location.isValid()) {
      printf("%.6lf,%.6lf", gps.location.lat(), gps.location.lng());
    } else {
      printf("\n");
    }

    printf("\n");
}

int main(void) {

    // Configura a UART
    int uart_fd = setup_uart(GPS_PORT);
    if (uart_fd == -1) {
        return -1;
    }

    char buffer[256];
    int count = 0;

    while(1) {

    int n = read(uart_fd, &buffer[count], 1);

        if (n > 0) {
            if (buffer[count] == '\n' || buffer[count] == '\r') {
                buffer[count] = '\0'; // Termina a string quando encontrar um \n ou \r

                if (strstr(buffer, "$GPGGA") != NULL) {
                    //printf("Buffer %s \n", buffer);

                    const char* gpsStream = buffer;

                    

                    //while (*gpsStream) {
                    //    if (gps.encode(*gpsStream++)) {
                    //        printf("%s", gpsStream);
                    //        displayInfo();

                    //    }
                    //}
                }
                count = 0;
            } else {
                count++;
            }
        }
    
        usleep(5000);

    }

    close(uart_fd); // Fecha a UART

    return 0;
}
