PREFIX ?= /usr

all:
	@echo You have 3 options:
	@echo gui -- Executes the GUI Installer and installs simplefetch
	@echo install -- Installs simplefetch directly.
	@echo uninstall -- Uninstalls simplefetch.
gui:
	bash .dialog.sh

install:
	@g++ simplefetch.cpp -o simplefetch
	@install -Dm755 simplefetch $(PREFIX)/local/bin/simplefetch
	@echo Successfully installed simplefetch.

uninstall:
	@rm -rf $(PREFIX)/local/bin/simplefetch
	@rm -rf ./simplefetch
	@echo Successfully uninstalled simplefetch.
