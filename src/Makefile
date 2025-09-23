CC = gcc
CFLAGS = -Wall -fPIC -I../include
OBJDIR = ../obj
LIBDIR = ../lib
BINDIR = ../bin

# Object files
OBJS = $(OBJDIR)/mystrfunctions.o $(OBJDIR)/myfilefunctions.o

# Target executable
TARGET = $(BINDIR)/client_dynamic

all: $(LIBDIR)/libmyutils.so $(TARGET)

# Compile .c into object files
$(OBJDIR)/%.o: %.c
	mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Build dynamic library
$(LIBDIR)/libmyutils.so: $(OBJS)
	mkdir -p $(LIBDIR)
	$(CC) -shared -o $@ $^

# Build executable
$(TARGET): main.c $(LIBDIR)/libmyutils.so
	mkdir -p $(BINDIR)
	$(CC) main.c -L$(LIBDIR) -lmyutils -o $@ -I../include

clean:
	rm -f $(OBJDIR)/*.o $(LIBDIR)/*.so $(BINDIR)/client_dynamic

