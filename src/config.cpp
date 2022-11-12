// MIT License
//
// Copyright (c) 2022 omxr4216
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
#include <stdio.h>
#include <sys/utsname.h>
#include <iostream>
#include <ctime>
// define userid length
#define MAX_USERID_LENGTH 32
// define colors
#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

int main() {
	// disable connection with C
	std::ios_base::sync_with_stdio(false);
	// print ascii logo
	#ifdef __linux__
        std::cout << R"(
                  ___	      
	         (.. \	      
                 (<> |	      
                //  \ \	      
               ( |  | /|      
              _/\ __)/_)      
              \/-____\/	      
        )" << '\n';
	#elif __FreeBSD__
	std:cout << R"(

   	  _  _____  _
 	 / \`     `/ \
  	 \/       (__/
  	 |           |
  	 |           |
          \         /
           `-_____-`
	)" << '\n';
        #elif __unix || __unix__
	// and yes i used figlet for this.
	std::cout << R"(
	_   _ _   _ _____  __
	| | | | \ | |_ _\ \/ /
	| | | |  \| || | \  /
	| |_| | |\  || | /  \
 	 \___/|_| \_|___/_/\_\
	 )" << '\n';
	#endif
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

	// exits sfetch
	return 0;
}
