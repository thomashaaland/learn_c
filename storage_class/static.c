#include <stdio.h>

// functions
void func(void);

static int count = 5; // global

int main() {

  while (count--) {
    func();
  }

  return 0;
}

// func defs
void func( void ) {

  static int i = 5; /* local static variable */
  i++;

  printf("i is %d and count is %d\n", i, count);
}
