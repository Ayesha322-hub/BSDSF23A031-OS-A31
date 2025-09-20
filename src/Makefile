# ==============================
# src/Makefile
# ==============================

# Macros
CC = gcc
CFLAGS = -Wall -I../include
OBJ_DIR = ../obj
BIN_DIR = ../bin

OBJS = $(OBJ_DIR)/mystrfunctions.o $(OBJ_DIR)/myfilefunctions.o $(OBJ_DIR)/main.o

# Default target
all: $(BIN_DIR)/main

# Link final binary
$(BIN_DIR)/main: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Compile .c to .o
$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(OBJ_DIR) $(BIN_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean only objects in src
clean:
	rm -f $(OBJ_DIR)/*.o
