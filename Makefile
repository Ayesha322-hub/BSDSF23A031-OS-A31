# Root Makefile for recursive build
SUBDIRS = src
MANDIR ?= /usr/local/share/man/man3
MANPAGES = man/man3/mycat.1
BINDIR ?= /usr/local/bin
BINARIES = src/client   # Add more executables if needed


all:
	@for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir; \
	done

clean:
	@for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir clean; \
	done

# Add at the top
BINDIR ?= /usr/local/bin
BINARIES = src/client   # Add more executables if needed

# Update install target
install: $(MANPAGES) $(BINARIES)
	@echo "Installing man pages..."
	install -d $(MANDIR)
	install -m 644 $(MANPAGES) $(MANDIR)
	@echo "Installing executables..."
	install -d $(BINDIR)
	install -m 755 $(BINARIES) $(BINDIR)
	@echo "Installation complete."


uninstall:
	@echo "Removing installed man pages..."
	rm -f $(MANDIR)/mycat.1
	@echo "Uninstallation complete."

