# src/Makefile for dynamic library build
CC = gcc
CFLAGS = -Wall -I../include
OBJDIR = ../obj
BINDIR = ../bin
LIBDIR = ../lib

# Object files for the dynamic library
OBJS = $(OBJDIR)/mystrfunctions.o $(OBJDIR)/myfilefunctions.o

# Target executable
TARGET = $(BINDIR)/client_dynamic

# Default target
all: $(LIBDIR)/libmyutils.so $(TARGET)

# Compile object files with -fPIC for dynamic library
$(OBJDIR)/%.o: %.c
	$(CC) $(CFLAGS) -fPIC -c $< -o $@

# Build dynamic library
$(LIBDIR)/libmyutils.so: $(OBJS)
	$(CC) -shared -o $@ $^

# Link main with dynamic library
$(TARGET): $(OBJDIR)/main.o $(LIBDIR)/libmyutils.so
	$(CC) $(CFLAGS) -o $@ $(OBJDIR)/main.o -L$(LIBDIR) -lmyutils

# Clean build artifacts
clean:
	rm -f $(OBJDIR)/*.o $(BINDIR)/client_dynamic $(LIBDIR)/libmyutils.so

