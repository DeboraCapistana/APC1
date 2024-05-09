#include <stdio.h>

 int main () {
   int avaliacao;

   printf("Entre com a avaliacao de 1 a 5: ");
   int deu_certo = scanf("%i", &avaliacao);

  if (avaliacao == 1) {
    printf("O motorista ganhou *\n"); 
    
//   } else if (avaliacao == 2) {
//     printf("O motorista ganhou **\n");
//   } else if (avaliacao == 3) {
//     printf(" O motorista ganhou ***\n");
//   } else if ( avaliacao == 4) {
//     printf("O motorista ganhou ****\n");
//   } else if (avaliacao == 5) {
//     printf("O motorista ganhou *****\n");
//   } else {
  //  printf("Avaliacao invalida. Tente novamente.\n");
  //
  }

  switch(avaliacao) {
    case 1: printf("O motorista ganhou *\n"); break;
    case 2: printf("O motorista ganhou **\n"); break;
    case 3: printf("O motorista ganhou ***\n"); break;
    case 4: printf("O motorista ganhou ****\n"); break;
    case 5: printf("O motorista ganhou *****\n"); break;
    defaut: printf("Avaliacao invalida. Tente novamente.\n"); break;
  }

  return 0;
  
}