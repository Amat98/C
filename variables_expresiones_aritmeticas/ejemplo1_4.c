#include <stdio.h>

int main(){
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 200;
  step = 20;
  
  celsius = lower;

  printf("Celsius\t Fahrengeit\n");

  while (celsius <= upper){
    fahr = (celsius * 5.0 / 9.0) + 32.0;
    printf("%3.0f\t %6.1f\n", celsius, fahr);
    celsius += step;
  }

  return 0;
}
