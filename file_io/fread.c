#include <stdio.h>

int main() {

  FILE *fp;
  char buff[255];

  fp = fopen("text.txt", "r");
  if (fp == NULL) {
    printf("Fail\n");
    return 1;
  }
  fscanf(fp, "%s", buff);
  printf("1: %s\n", buff );

  fgets(buff, 255, (FILE*)fp);
  printf("2: %s\n", buff );

  fgets(buff, 255, (FILE*)fp);
  printf("3: %s\n", buff );
  fclose(fp);

  return 0;
}
