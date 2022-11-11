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
	@install -Dm755 sfetch $(PREFIX)/local/bin/sfetch
	@echo Done!

uninstall:
	@rm -rf $(PREFIX)/local/bin/sfetch
	@rm -rf ./sfetch
	@echo Done!

reinstall:
	@echo Reinstalling sfetch..
	@rm -rf $(PREFIX)/local/bin/sfetch
	@rm -rf ./sfetch
	@g++ simplefetch.cpp -o simplefetch
	@install -Dm755 simplefetch $(PREFIX)/local/bin/sfetch
	@echo Done!
