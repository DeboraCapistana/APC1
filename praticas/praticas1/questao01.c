#include <stdio.h>

int main () {

  float nota1 = 0.0;
  float nota2 = 0.0;
  printf("Entre com a sua nota1");
  scanf("%f", &nota1); 

  printf("Entre com a sua nota2");
  scanf("%f", &nota2);

  float media = 0.4*nota1 + 0.6*nota2;
  printf("A sua média final é: %.1f", media);
  if (media >= 6.0) {
    printf("Aprovado!\n");
  } else {
      printf("Reprovado!\n");
    }

  return 0;

}