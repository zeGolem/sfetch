PREFIX ?= /usr

all:
	@echo You have 3 options:
	@echo gui -- Executes the GUI Installer and installs sfetch
	@echo install -- Installs sfetch directly.
	@echo uninstall -- Uninstalls sfetch.
gui:
	bash .dialog.sh

install:
	@g++ sfetch.cpp -o sfetch
	@g++ sfetch-updater.cpp -o sfetch-updater
	@install -Dm755 sfetch-updater $(PREFIX)/local/bin/sfetch-updater
	@install -Dm755 sfetch $(PREFIX)/local/bin/sfetch
	@mkdir /usr/share/sfetch/
	@touch /usr/share/sfetch/version-1.0.2
	@echo Done!

uninstall:
	@rm -rf $(PREFIX)/local/bin/sfetch
	@rm -rf ./sfetch
	@echo Done!

reinstall:
	@echo Reinstalling sfetch..
	@rm -rf $(PREFIX)/local/bin/sfetch
	@rm -rf $(PREFIX)/share/sfetch/version-1.0.2
	@rm -rf $(PREFIX)/share/sfetch/
	@rm -rf ./sfetch
	@g++ sfetch.cpp -o sfetch
	@g++ sfetch-updater.cpp -o sfetch-updater
	@install -Dm755 sfetch $(PREFIX)/local/bin/sfetch
	@install -Dm755 sfetch-updater $(PREFIX)/local/bin/sfetch-updater
	@mkdir /usr/share/sfetch
	@touch /usr/share/sfetch/version-1.0.2
	@echo Done!
