#include <stdio.h>

int main() {
  FILE *fp;

  fp = fopen("./text.txt", "w+");
  fprintf(fp, "This is testing for fprint...\n");
  fputs("This is testing for fputs...\n", fp);
  fclose(fp);

  return 0;
}
