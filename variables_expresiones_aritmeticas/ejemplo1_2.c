#include <stdio.h>

int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 200;
  step = 20;
  
  fahr = lower;

  printf("Fahrengeit Celsius\n");

  while (fahr <= upper){
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    fahr += step;
  }

  return 0;
}
