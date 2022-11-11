// WARNING: THIS FILE IS THE CODE OF SIMPLEFETCH!
// DO NOT EDIT IT UNLESS YOU KNOW WHAT ARE YOU DOING!

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
            printf("%s", username);
            printf("@%s", u.nodename);
            printf("\n");
            printf("OS: ", u.sysname);
            FILE *fp;
            char path[1035];
            fp = popen("/usr/bin/lsb_release --short -d", "r");
            if (fp == NULL) {
            printf("???\n" );
            exit(1);
}
            while (fgets(path, sizeof(path), fp) != NULL) {
            printf("%s", path);
}

            pclose(fp);
	// print version, time/date, shell , terminal, and the colors
            printf("Version: %s \n", u.release);
            printf("Time/Date: ");
            std::time_t result = std::time(nullptr);
            std::cout << std::asctime(std::localtime(&result));
            printf("Platform: %s \n", u.machine);
            char*shell = getenv("SHELL");
            printf("Shell: %s\n", shell);
	        char*term = getenv("TERM");
	        printf("Terminal: %s\n", term);
            char*desktop = getenv("DESKTOP_SESSION");
            printf("Desktop: %s\n", desktop);
            printf("\n");
            printf("%s██", KRED);
            printf("%s██", KYEL);
            printf("%s██", KGRN);
            printf("%s██", KBLU);
            printf("%s██", KCYN);
            printf("%s██", KMAG);
            printf("%s██", KWHT);
            printf("%s██\n", KNRM);
	// exits simplefetch
            return 0;
}
