# Compiler and flags
CC = gcc
CFLAGS = -Wall -g

# Source files
SRC = main.c myfilefunctions.c mystrfunctions.c
OBJ = $(SRC:.c=.o)
TARGET = client

# Default target
all: $(TARGET)

# Link object files into executable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up
clean:
	rm -f $(OBJ) $(TARGET)

