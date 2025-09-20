# src/Makefile for static library build
CC = gcc
CFLAGS = -Wall -I../include
OBJDIR = ../obj
BINDIR = ../bin
LIBDIR = ../lib

# Object files for the library
OBJS = $(OBJDIR)/mystrfunctions.o $(OBJDIR)/myfilefunctions.o

# Target executable
TARGET = $(BINDIR)/main

# Default target
all: $(LIBDIR)/libmyutils.a $(TARGET)

# Create static library
$(LIBDIR)/libmyutils.a: $(OBJS)
	ar rcs $@ $^

# Compile object files
$(OBJDIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Link main with static library
$(TARGET): $(OBJDIR)/main.o $(LIBDIR)/libmyutils.a
	$(CC) $(CFLAGS) -o $@ $(OBJDIR)/main.o -L$(LIBDIR) -lmyutils

# Clean build artifacts
clean:
	rm -f $(OBJDIR)/*.o $(BINDIR)/main $(LIBDIR)/libmyutils.a

