#include <stdio.h>

int main(){
  float nota1;
  float nota2;

  printf("Entre com a sua nota1");
  int deu_certo = scanf("%f", &nota1);

  int nota1_eh_valida = nota1 >= 0.0f && nota1 <= 10.0f;
  if(nota1_eh_valida) {
    printf("Entre com a sua nota2");
    deu_certo = scanf("%f, & nota1"); 
  }
  
  return 0;
}