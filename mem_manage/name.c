#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char name[100];
  char *description;

  strcpy(name, "Lars Larson");

  description = malloc(200 * sizeof(char));

  if (description == NULL) {
    fprintf(stderr, "Error - unable to allocate required memory\n");
  } else {
    strcpy( description, "Lars is a great guy!");
  }

  printf("Name = %s\n", name);
  printf("Description: %s\n", description);

  return 0;
}
