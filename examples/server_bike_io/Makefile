# Nome do seu programa executável
TARGET = server_example_basic_io

# Nossos arquivos .c que serão compilados
SRCS = server_example_basic_io.c static_model.c

# Flags do Compilador (todos os caminhos -I para os headers)
CFLAGS = -g \
-I../../config \
-I../../hal/inc \
-I../../src/common/inc \
-I../../src/mms/inc \
-I../../src/mms/inc_private \
-I../../src/mms/asn1 \
-I../../src/iec61850/inc \
-I../../src/iec61850/inc_private \
-I../../src/goose \
-I../../src/sampled_values \
-I../../src/logging \
-I../../src/tls \
-I../../src/r_session

# Flags do Linker (caminhos -L para as bibliotecas .a)
LDFLAGS = -L../../build/src -L../../build/hal

# Bibliotecas a linkar (todas as flags -l)
LDLIBS = -liec61850 -lhal -lpthread -lm -lsqlite3

# --- Regras do Make ---

# A regra padrão: "make" ou "make all" vai construir o nosso TARGET
all: $(TARGET)

# A regra de compilação: como construir o TARGET
$(TARGET): $(SRCS)
	# O <TAB> no início desta linha é OBRIGATÓRIO!
	gcc $(CFLAGS) -o $(TARGET) $(SRCS) $(LDFLAGS) -static $(LDLIBS)

# A regra de limpeza: "make clean"
clean:
	# O <TAB> no início desta linha é OBRIGATÓRIO!
	rm -f $(TARGET)