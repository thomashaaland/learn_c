#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char** argv) {

  printf("CHAR BIT    :    %d\n", CHAR_BIT);
  printf("CHAR MAX    :    %d\n", CHAR_MAX);
  printf("CHAR MIN    :    %d\n", CHAR_MIN);
  printf("INT MAX     :    %d\n", INT_MAX);
  printf("INT MIN     :    %d\n", INT_MIN);
  printf("LONG MAX    :    %ld\n", (long) LONG_MAX);
  printf("LONG MIN    :    %ld\n", (long) LONG_MIN);
  printf("SCHAR MAX   :    %d\n", SCHAR_MAX);
  printf("SCHAR MIN   :    %d\n", SCHAR_MIN);
  printf("SHRT MAX    :    %d\n", SHRT_MAX);
  printf("SHRT MIN    :    %d\n", SHRT_MIN);
  printf("UCHAR MAX   :    %d\n", UCHAR_MAX);
  printf("UINT MAX    :    %u\n", (unsigned int) UINT_MAX);
  printf("ULONG MAX   :    %lu\n", (unsigned long) ULONG_MAX);
  printf("USHRT MAX   :    %d\n", (unsigned short) USHRT_MAX);
  
  return 0;
}
