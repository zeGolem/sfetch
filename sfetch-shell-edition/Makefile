PREFIX ?= /usr

all:
	@echo You have 2 options:
	@echo install -- Installs sfetch directly.
	@echo uninstall -- Uninstalls sfetch.

install:
	@install -Dm755 sfetch $(PREFIX)/local/bin/sfetch
	@install -Dm755 sfetch-updater $(PREFIX)/local/bin/sfetch-updater
	@mkdir /usr/share/sfetch/
	@touch /usr/share/sfetch/version-1.0.2

uninstall:
	@rm -rf $(PREFIX)/local/bin/sfetch
	@rm -fr $(PREFIX)/share/sfetch/
	@echo Done!

reinstall:
	@echo Reinstalling sfetch..
	@rm -rf $(PREFIX)/local/bin/sfetch
	@rm -rf $(PREFIX)/share/sfetch/version-1.0.2
	@rm -rf $(PREFIX)/share/sfetch/
	@install -Dm755 sfetch $(PREFIX)/local/bin/sfetch
	@install -Dm755 sfetch-updater $(PREFIX)/local/bin/sfetch-updater
	@mkdir /usr/share/sfetch/
	@touch /usr/share/sfetch/version-1.0.2
