CC = gcc
CFLAGS = -Wall -I../include
OBJDIR = ../obj
BINDIR = ../bin

OBJS = $(OBJDIR)/mystrfunctions.o $(OBJDIR)/myfilefunctions.o $(OBJDIR)/main.o

all: $(BINDIR)/main

$(BINDIR)/main: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJDIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJDIR)/*.o $(BINDIR)/main
