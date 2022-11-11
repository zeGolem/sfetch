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
        std::cout << R"(
                  ___
                 (.. \
                 (<> |
                //  \ \
               ( |  | /|
              _/\ __)/_)
              \/-____\/
        )" << '\n';
	// print username,nodename (aka hostname), os name (man it's really big)
	    struct utsname u;

            uname(&u);

            char username[MAX_USERID_LENGTH];
            cuserid(username);
            std::cout << " " << username;
            std::cout << "@" << u.nodename;
            std::cout << "\n";
            std::cout << "OS: " << u.sysname;
            FILE *fp;
            char path[1035];
            fp = popen("/usr/bin/lsb_release --short -d", "r");
            if (fp == NULL) {
            std::cout << " " << '\n';
            exit(1);
}
            while (fgets(path, sizeof(path), fp) != NULL) {
            std::cout << " ", path;
}

            pclose(fp);
	// print version, time/date, shell , terminal, and the colors
            std::cout << "\n";
            std::cout << "Version: " << u.release;
            std::cout << "\n";
            std::cout << "Time/Date: ";
            std::time_t result = std::time(nullptr);
            std::cout << std::asctime(std::localtime(&result));
            std::cout << "Platform: " << u.machine;
            char*shell = getenv("SHELL");
            std::cout << "\n";
            std::cout << "Shell: " << shell;
            char*term = getenv("TERM");
	    std::cout << "\n";
            std::cout << "Terminal: " << term;
            std::cout << "\n";
            char*desktop = getenv("DESKTOP_SESSION");
            std::cout << "Desktop: " << desktop;
            std::cout << "\n";
            std::cout << "██" << KRED;
            std::cout << "██" << KYEL;
            std::cout << "██" << KGRN;
            std::cout << "██" << KBLU;
            std::cout << "██" << KCYN;
            std::cout << "██" << KMAG;
            std::cout << "██" << KWHT;
            std::cout << "██\n" << KNRM;
	// exits simplefetch
            return 0;
}
