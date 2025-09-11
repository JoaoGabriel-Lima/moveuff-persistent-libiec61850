LIBIEC_HOME=../..

PROJECT_BINARY_NAME = server_example_basic_io
PROJECT_SOURCES = server_example_basic_io.c
PROJECT_SOURCES += static_model.c
PROJECT_SOURCES += data_logger.c

QUERY_TOOL_NAME = data_query_tool
QUERY_TOOL_SOURCES = data_query_tool.c
QUERY_TOOL_SOURCES += data_logger.c

PROJECT_ICD_FILE = simpleIO_direct_control.cid

include $(LIBIEC_HOME)/make/target_system.mk
include $(LIBIEC_HOME)/make/stack_includes.mk

all:	$(PROJECT_BINARY_NAME) $(QUERY_TOOL_NAME)

include $(LIBIEC_HOME)/make/common_targets.mk

LDLIBS += -lm -lsqlite3

CP = cp

model:	$(PROJECT_ICD_FILE)
	java -jar $(LIBIEC_HOME)/tools/model_generator/genmodel.jar $(PROJECT_ICD_FILE)

$(PROJECT_BINARY_NAME):	$(PROJECT_SOURCES) $(LIB_NAME)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $(PROJECT_BINARY_NAME) $(PROJECT_SOURCES) $(INCLUDES) $(LIB_NAME) $(LDLIBS)
	mkdir -p vmd-filestore
	$(CP) $(PROJECT_BINARY_NAME) vmd-filestore/IEDSERVER.BIN

$(QUERY_TOOL_NAME):	$(QUERY_TOOL_SOURCES)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $(QUERY_TOOL_NAME) $(QUERY_TOOL_SOURCES) $(INCLUDES) $(LDLIBS)

clean:
	rm -f $(PROJECT_BINARY_NAME)
	rm -f $(QUERY_TOOL_NAME)
	rm -f vmd-filestore/IEDSERVER.BIN
	rm -f bike_data.db*


