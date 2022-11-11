#include <stdio.h>
#include <iostream>
#include <sys/utsname.h>

int main () {
              FILE *fp;
              char path[1035];
              fp = popen("git clone -q https://github.com/omxr4216/sfetch $HOME/sfetch && chmod +x $HOME/sfetch/chkversion.sh && exec $HOME/sfetch/chkversion.sh", "r");
              if (fp == NULL) {
              printf("???\n" );
              exit(1);
  }
              while (fgets(path, sizeof(path), fp) != NULL) {
              printf("%s", path);
  }

              pclose(fp);
              return 0;
}
