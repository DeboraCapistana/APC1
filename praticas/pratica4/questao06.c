#include <stdio.h>
#include <math.h>

int main (){
  int numero1;
  int numero2;
  int numero3; 

  printf("Entre com o primeiro numero");

  float a = 1.0;
  float b = 2.0;
  float c = 4.0;

  float delta = b * b - 4 * a * c;
  float raiz1 = (-b + sqrt(delta)) / (2*a);
  float raiz2 = (-1 * b - sqrt (delta));


  double raiz = sqrt(numero1);
  printf("A raiz quadrada do primeiro numero é %f\n", raiz);
  printf("As raize da equacao %fx^2 + %fx + %f sao %f e %f\n", a);
  scanf("%f", &a);
  
  return 0;
}

// Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).
