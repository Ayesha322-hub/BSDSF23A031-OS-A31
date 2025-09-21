# Root Makefile for recursive build
SUBDIRS = src
MANDIR ?= /usr/local/share/man/man3
MANPAGES = man/man3/mycat.1

all:
	@for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir; \
	done

clean:
	@for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir clean; \
	done

install: $(MANPAGES)
	@echo "Installing man pages..."
	install -d $(MANDIR)
	install -m 644 $(MANPAGES) $(MANDIR)
	@echo "Installation complete."

uninstall:
	@echo "Removing installed man pages..."
	rm -f $(MANDIR)/mycat.1
	@echo "Uninstallation complete."

