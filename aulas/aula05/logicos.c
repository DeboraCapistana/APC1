#include <stdio.h>

int main(){
  int numero;
  
  // 0 <x X 10, isso não é possivel fazer. teria que fazer a leitura: 0 < x E x < 10
  printf("Entre com um numero:");
  int deu_certo = scanf("%i", &numero);
  
  int maior_que_0_e_menor_que_10 = numero > 0 && numero < 10;
  printf("0 < menor < 10? %i\n", maior_que_0_e_menor_que_10);
  //x < 0; x > 10; x < 0 ou x > 10;

  int menor_que_0_ou_maior_que_10 = numero < 0 || numero > 10;
  printf("numero < 0 ou numero > 10? %i\n", menor_que_0_ou_maior_que_10);
  
  // x NAO < 0; invertendo o resultado da expressão.
  int nao_eh_menor_que_0 = !(numero < 0); 
  printf("numero nao eh menor que 0? %i\n", nao_eh_menor_que_0);
  
  return 0;
}