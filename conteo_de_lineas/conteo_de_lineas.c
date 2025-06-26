#include <stdio.h>
int main(){
  int c, nl; // creamos variables int c para ingresar strings y nl para guardar el conteo

  nl = 0; // asignamos el valor de 0 para que inicie 

  while((c = getchar()) != EOF){ // si getchar es diferente de control + d el bucle funciona 
    if (c == '\n'){ // creamos un if para ver si \n lleva un enter por teclado 
      ++nl; // si se cumple la condicion entonces se sumara nl
    }
  }

  printf("El numero de lineas es: %d\n", nl);

  return 0;
}
