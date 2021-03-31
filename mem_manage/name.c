#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char name[100];
  char *description;

  strcpy(name, "Lars Larson");

  description = malloc(20 * sizeof(char));

  if (description == NULL) {
    fprintf(stderr, "Error - unable to allocate required memory\n");
  } else {
    strcpy( description, "Lars is a great guy! ");
  }

  description = realloc( description, 100 * sizeof(char));

  if (description == NULL) {
    fprintf(stderr, "Error - unable to allocate required memory\n");
  } else {
    strcat(description, "Lars really is the best!");
  }
  
  printf("Name = %s\n", name);
  printf("Description: %s\n", description);

  free(description);

  return 0;
}
