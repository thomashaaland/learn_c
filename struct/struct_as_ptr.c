#include <stdio.h>
#include <string.h>

struct Books {
  char title[50];
  char author[50];
  char subject[100];
  int book_id;
};

// function declaration
void printBook( struct Books *book);

int main() {

  struct Books Book1;
  struct Books Book2;

  // book1 specification
  strcpy( Book1.title, "C Programming");
  strcpy( Book1.author, "Nuha Ali");
  strcpy( Book1.subject, "C Programming Tutorial");
  Book1.book_id = 642445;

  // book2 specs
  strcpy( Book2.title, "Telecom Billing");
  strcpy( Book2.author, "Zara Ali");
  strcpy( Book2.subject, "Telecom Billing Tutorial");
  Book2.book_id = 12345;

  // print Book1 info
  printBook( &Book1);
  
  // print Book2 info
  printBook( &Book2);
  
  return 0;
}

void printBook( struct Books *book) {
  printf( "Book title: %s\n", book->title);
  printf( "Book author: %s\n", book->author);
  printf( "Book subject: %s\n", book->subject);
  printf( "Book book_id: %d\n", book->book_id);
}
