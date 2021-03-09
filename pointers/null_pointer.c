#include <stdio.h>

int main() {

  int *ptr = NULL;

  printf("The value of ptr is: %p\n", ptr);

  if (ptr) printf("Null pointer is understood as true\n");
  else printf("Null pointer is understood as false\n");
  
  return 0;
}
