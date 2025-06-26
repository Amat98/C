#include <stdio.h>

int main(){
  int vacio, tabs, nl, c;

  vacio = 0;
  tabs = 0;
  nl = 0;

  while((c = getchar()) != EOF){
    if (c == ' '){

      ++vacio;

    } else if (c == '\n') {
      ++nl;
    } else if (c == '\t'){
      ++tabs;
    }
  }

  printf("Numero de espacios en blanco: %d\n",vacio);
  printf("Numero de tabulaciones: %d\n", tabs);
  printf("Numero de lineas: %d\n", nl);

  return 0;
}
