.PHONY: all

objs := $(BIN_DIR)/EpollEtLtDemo $(BIN_DIR)/SelectDemo \
		$(BIN_DIR)/TestAccept $(BIN_DIR)/TestOobSend $(BIN_DIR)/TestOobRecv \
		$(BIN_DIR)/DupCGI $(BIN_DIR)/ReadvWritev \
		$(BIN_DIR)/SendfileDemo

all: $(objs)

$(BIN_DIR)/% : %.cpp
	@echo LD ++ $@
	@$(CC) $(CFLAGS) $(C11) -o $@ $^

