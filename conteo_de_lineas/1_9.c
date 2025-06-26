#include <stdio.h>

int main(){
  int c, cont;

  cont = 0;

  while((c = getchar()) != EOF){

    if (c == ' '){

      ++cont;

      if (cont == 1){

        printf(" ");

      }
    } else {

      putchar(c);

      cont = 0;

    }
  }

  return 0;

}
