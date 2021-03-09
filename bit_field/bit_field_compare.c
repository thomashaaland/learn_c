#include <stdio.h>
#include <string.h>

// simple struct
struct {
  unsigned int widthValidated;
  unsigned int heightValidated;
} status1;

struct {
  unsigned int widthValidated : 1;
  unsigned int heightValidated : 1;
} status2;

int main() {
  int size_status1 = sizeof(status1);
  int size_status2 = sizeof(status2);
  
  printf("Memory size occupied by status 1 : %d\n", size_status1);
  printf("Memory size occupied by status 2 : %d\n", size_status2);

  return 0;
}
