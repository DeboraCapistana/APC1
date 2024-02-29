#include <stdio.h>

int main() {
  float nota1 = 0.0;
  float nota2 = 0.0;

  printf("Entre com a nota1: ");
  scanf("%f", &nota1);

  printf("Entre com sua nota2: ");
  scanf("%f", &nota2);
  float media = 0.4*nota1 + 0.6*nota2;

  printf ("A média final é %.1f", media);
  if (media>=5.0) {
    printf("Passei!\n");
  } else {
    printf("Vamos de P3!\n");
  } 
  
return 0;
}