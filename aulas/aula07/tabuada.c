#include <stdio.h>

int main (){
  int numero;

printf("Entre com um numero de 1 a 10");
int deu_certo = scanf("%i", &numero);

if (deu_certo && numero > 0 && numero <11){
  printf("Tabuada de %i\n", numero);
  for (int i=1; i>=1; i++){
    printf("%i x %i = %i\n", i, numero, i * numero);
  }
  printf("A tabuada invertida de %i\n", numero);
  for (int i=10; i>=1; i--){
    printf("%i x %i = %i\n", i, numero, i * numero);

  } 

}
return 0;
}