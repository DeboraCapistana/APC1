#include <stdio.h>

//Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
int main() {
  int raio = 10;
  const float PI = 3.141516;
  
  float perimetro = 2 * PI * raio;
  printf("O perimetro da pizza é: %f\n", perimetro);
  
  

return 0;
}