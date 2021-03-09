#include <stdio.h>

int main() {

  // declare local vars
  int n[10];
  int i, j;

  // initialize n
  for (i = 0; i < 10; i++) {
    n[i] = i + 100;
  }

  // output n
  for (j = 0; j < 10; j++) {
    printf("Element[%d] = %d\n", j, n[j] );
  }

  return 0;

}
