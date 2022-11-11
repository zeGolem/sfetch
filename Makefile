PREFIX ?= /usr

all:
	@echo You have 3 options:
	@echo gui -- Executes the GUI Installer and installs simplefetch
	@echo install -- Installs sfetch directly.
	@echo uninstall -- Uninstalls sfetch.
gui:
	bash .dialog.sh

install:
	@g++ simplefetch.cpp -o simplefetch
	@install -Dm755 simplefetch $(PREFIX)/local/bin/sfetch
	@echo Successfully installed sfetch.

uninstall:
	@rm -rf $(PREFIX)/local/bin/sfetch
	@rm -rf ./simplefetch
	@echo Successfully uninstalled sfetch.
