TARGET = moveuff_mms_collector
SRCS = moveuff_mms_collector.c

CFLAGS = -g -Wall -Wextra \
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

LDFLAGS = -L../../build -L../../build/src -L../../build/hal
LDLIBS = -liec61850 -lsqlite3 -lpthread -lm

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS) $(LDFLAGS) $(LDLIBS)

clean:
	rm -f $(TARGET)

