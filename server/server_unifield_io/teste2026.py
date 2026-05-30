import socket
import time
import sys

DESTINOS_IP = ["127.0.0.1", "100.127.231.81"]
PORTA = 2026

JSON_HUBMOB = """{
"timestamp":1780164936,
"measurements":[
    {"id":"Corrente_Bateria_Principal","derived":false,"pin":0,"adc":975,"value":-25.091288,"unit":"A"},
    {"id":"Corrente_Celula_Hidrogenio","derived":false,"pin":1,"adc":1000,"value":-25.392705,"unit":"A"},
    {"id":"Tensao_Bateria_Principal","derived":false,"pin":2,"adc":3,"value":0.000951,"unit":"V"},
    {"id":"Tensao_Celula_Hidrogenio","derived":false,"pin":3,"adc":3,"value":0.001406,"unit":"V"},
    {"id":"Corrente_Sistema_Auxiliar","derived":false,"pin":0,"adc":991,"value":-25.285134,"unit":"A"},
    {"id":"Corrente_Carregamento_H2","derived":false,"pin":1,"adc":984,"value":-24.391679,"unit":"A"},
    {"id":"Pressao_Cilindro_Hidrogenio","derived":false,"pin":2,"adc":0,"value":-0.168755,"unit":"bar"},
    {"id":"Tensao_Barramento_Auxiliar","derived":false,"pin":3,"adc":5149,"value":11.902817,"unit":"V"},
    {"id":"Nivel_Cilindro_Hidrogenio","derived":true,"source_id":"Pressao_Cilindro_Hidrogenio","pin":-1,"adc":0,"value":0.000000,"unit":"%"},
    {"id":"SoC_percent","derived":true,"source_id":"Corrente_Bateria_Principal","pin":-1,"adc":0,"value":100.000000,"unit":"%"}
],
"gps":{}
}"""

print("===============================================================")
print("     INICIANDO INJETOR DE SESSÃO ISOLADO — PORTA 2026")
print("===============================================================")

sock_final = None
conectado = False

for ip in DESTINOS_IP:
    try:
        # CORREÇÃO: Cria um socket do zero para cada tentativa de IP
        sock_teste = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        sock_teste.settimeout(2.0)
        
        print(f"[*] Tentando conectar ao servidor HUBMOB em: {ip}:{PORTA}...")
        sock_teste.connect((ip, PORTA))
        
        print(f" [OK] Conectado com sucesso à interface: {ip}!")
        sock_final = sock_teste
        conectado = True
        break
    except Exception as e:
        print(f" [AVISO] Falha no IP {ip}. Motivo: {e}")
        sock_teste.close()

if not conectado:
    print("\n [ERRO CRÍTICO] O servidor C não respondeu em nenhuma interface.")
    sys.exit(1)

print("\n[*] Disparando telemetria em loop contínuo (Pressione Ctrl+C para parar)...")
print("-" * 63)

try:
    while True:
        sock_final.sendall(JSON_HUBMOB.encode('utf-8'))
        print(" [DATA_PACKET] -> JSON oficial injetado com sucesso no fluxo.")
        time.sleep(1)
except KeyboardInterrupt:
    print("\n[SISTEMA] Conexão encerrada.")
finally:
    sock_final.close()