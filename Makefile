# ==============================
# Top-level Makefile
# ==============================

# Macros
CC = gcc
CFLAGS = -Wall -Iinclude
SRC_DIR = src
BIN_DIR = bin
OBJ_DIR = obj

# Default target
all: $(BIN_DIR)/main

# Delegate to src/Makefile
$(BIN_DIR)/main:
	$(MAKE) -C $(SRC_DIR)

# Clean everything
clean:
	$(MAKE) -C $(SRC_DIR) clean
	rm -f $(BIN_DIR)/*

.PHONY: all clean
