#include <stdio.h>

int main() {

  int var = 20;
  int *ip; // pointer declaration

  ip = &var; // store address in pointer

  printf("Adress of var variable: %p\n", ip);

  printf("Value of *ip variable: %d\n", *ip);

  return 0;
}
