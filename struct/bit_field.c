#include <stdio.h>

struct packed_struct {
  unsigned int f1:1;
  unsigned int f2:1;
  unsigned int f3:1;
  unsigned int f4:1;
  unsigned int type:4;
  unsigned int my_int:9;
};

int main() {
  struct packed_struct field;

  int size = sizeof(field);
  printf("Size of packed struct: %d\n", size);
  
  return 0;
}
