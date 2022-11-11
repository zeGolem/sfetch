#include <ctime>
#include <iostream>
#include <stdio.h>
#include <sys/utsname.h>

// define userid length
#define MAX_USERID_LENGTH 32

// define colors
#define KNRM "\x1B[0m"
#define KRED "\x1B[31m"
#define KGRN "\x1B[32m"
#define KYEL "\x1B[33m"
#define KBLU "\x1B[34m"
#define KMAG "\x1B[35m"
#define KCYN "\x1B[36m"
#define KWHT "\x1B[37m"

int main() {
	// disable connection with C
	std::ios_base::sync_with_stdio(false);

	// print ascii logo
	std::cout << R"(
                  ___
                 (.. \
                 (<> |
                //  \ \
               ( |  | /|
              _/\ __)/_)
              \/-____\/
        )" << '\n';

	// print username,nodename (aka hostname)
	struct utsname u;
	uname(&u);

	char username[MAX_USERID_LENGTH];
	cuserid(username);
        // print os and username.
	std::cout << "" << username << "@" << u.nodename << "\n";
	std::cout << "OS: " << u.sysname << "\n";

	// print version, time/date, shell , terminal, and the colors
	std::cout << "Version: " << u.release << "\n";

	std::time_t current_time = std::time(nullptr);
	std::cout << "Time/Date: " << std::asctime(std::localtime(&current_time));

	std::cout << "Platform: " << u.machine << "\n";

	char* shell = getenv("SHELL");
	std::cout << "Shell: " << shell << "\n";

	char* term = getenv("TERM");
	std::cout << "Terminal: " << term << "\n";

	char* desktop = getenv("DESKTOP_SESSION");
	std::cout << "Desktop: " << desktop << "\n";

	std::cout << "\n";

	std::cout << "██" << KRED << "██" << KYEL << "██" << KGRN << "██" << KBLU
	          << "██" << KCYN << "██" << KMAG << "██" << KWHT << "██\n"
	          << KNRM << "\n";

	// exits simplefetch
	return 0;
}
