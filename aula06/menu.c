#include <stdio.h>
int main(){
  int opcao;

  printf("MENU PRINCIPAL\n");
  printf("1 - Consultar saldo\n");
  printf("2 - Fazer recarga\n");
  printf("3 - Ver mensagens\n");
  printf("4 - Falar com atendente\n");
  printf("0 - Sair\n");
  int deu_certo = scanf("%i", &opcao);

  switch (opcao) {
    case 1: printf("Seu saldo é de R$ 50.00\n"); break;
    case 2: 
      float valor;
      printf("Digite o valor da recarga: \n");
      deu_certo = scanf("%f", &valor); break;
    case 3: printf("Você não tem mensagens\n");
    case 4: printf("Ola, tudo bem?\n");
    case 0: printf("Agradecemos a preferencia. Até mais!"); break;
      
      
  }
  return 0;
  
}