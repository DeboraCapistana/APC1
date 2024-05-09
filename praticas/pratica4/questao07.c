#include <stdio.h>
#include <math.h>

int main (){ 
  int altura;
  int distancia;
  int angulo;

  printf("Entre com a altura do avião: ");
  int deu_certo = scanf("%i", &altura);
  printf("Entre com a distancia do avião: ");
 deu_certo = scanf("%i", &distancia);
  printf("Entre com o angulo do avião: ");
  
  float altura = sin(angulo) * distancia;
  
  printf("A altura do avião é %f\n", altura);

  
return 0;
}

//7. Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45