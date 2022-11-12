PREFIX ?= /usr

options:
	@echo You have 3 options:
	@echo install -- Installs sfetch directly.
	@echo uninstall -- Uninstalls sfetch.
	@echo reinstall -- Reinstalls sfetch.

install:
	@cd src
	@g++ config.cpp -o sfetch
	@g++ config-updater.cpp -o sfetch-updater
	@install -Dm755 sfetch-updater $(PREFIX)/local/bin/sfetch-updater
	@install -Dm755 sfetch $(PREFIX)/local/bin/sfetch
	@mkdir /usr/share/sfetch/
	@touch /usr/share/sfetch/version-1.1.0
	@echo Done!

uninstall:
	@cd src
	@rm -rf $(PREFIX)/local/bin/sfetch
	@rm -rf ./sfetch
	@echo Done!

reinstall:
	@cd src
	@echo Reinstalling sfetch..
	@rm -rf $(PREFIX)/local/bin/sfetch
	@rm -rf $(PREFIX)/share/sfetch/version-1.1.0
	@rm -rf $(PREFIX)/share/sfetch/
	@rm -rf ./sfetch
	@g++ config.cpp -o sfetch
	@g++ config-updater.cpp -o sfetch-updater
	@install -Dm755 sfetch $(PREFIX)/local/bin/sfetch
	@install -Dm755 sfetch-updater $(PREFIX)/local/bin/sfetch-updater
	@mkdir /usr/share/sfetch
	@touch /usr/share/sfetch/version-1.1.0
	@echo Done!
