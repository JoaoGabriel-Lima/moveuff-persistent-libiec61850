# README moveuff-persistent-libiec61850
Pasta de origem: cd/moveuff-persistent-libiec61850
Pasta do usuário: cd ~

1- 
Atualiza o sistema
`sudo apt update -y`

1.1- 
Instala ferramentas essenciais (gcc, make, git) e o SQLite
`sudo apt install build-essential git cmake libsqlite3-dev -y`


2- 
cd ~
Clona o WiringOP (Orange PI)
`git clone https://github.com/orangepi-xunlong/wiringOP.git`
cd WiringOP
Compila e instala
`./build`


3- 
cd ~ 

Baixa o repositório
`git clone https://github.com/JoaoGabriel-Lima/moveuff-persistent-libiec61850.git`

Entra na pasta (Origem)
`cd moveuff-persistent-libiec61850`

Limpa e Compila
`make clean && make`

Instala a biblioteca
`sudo make install`

Atualiza o cache para o Linux encontrar a biblioteca nova
`sudo ldconfig`


4- 
Vai para a pasta do exemplo
`cd server/server_bike_original_io`

Compila o seu servidor
`make clean && make`

Roda com permissão de administrador
`sudo ./server_example_basic_io`