//6. Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).
#include <stdio.h>
#include <math.h>

int main(){
  int a = 1;
  int b = -2;
  int c = 3;

  int delta = b * b - 4 * a * c;
  int raiz1 = (-b + sqrt(delta)) / (2*a);
  
  
  
  return 0;
}