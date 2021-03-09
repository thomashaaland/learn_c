#include <stdio.h>
#include <string.h>

union Data {
  int i;
  float f;
  char str[20];
};

int main() {

  union Data data;

  int size = sizeof(data);
  printf("Memory size occupied by data: %d\n", size);

  return 0;
}
