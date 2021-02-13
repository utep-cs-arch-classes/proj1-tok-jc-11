#include <stdio.h>
#define LIMIT

void main(){

  char c;

  putchar('$');
  while((c = getchar()) != '\n'){
    putchar(c);

  }
  putchar('\n');
}
