#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno;

int main() {
  FILE * fp;
  int errnum;
  fp = fopen("unexist.txt", "rb");

  if (fp == NULL) {

    errnum = errno;
    fprintf(stderr, "Value of errno: %d\n", errno);
    perror("Error printed by perror");
    fprintf(stderr, "Error opening file: %s\n", strerror( errnum ));
  }
  else {
    fclose (fp);
  }

  return 0;
}
