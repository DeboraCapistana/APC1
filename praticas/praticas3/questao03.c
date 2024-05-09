// 3. Faça um programa em C que imprima um qualitativo associado a uma nota lida conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom, 5 = Ótimo, e imprima Nota inválida nos demais casos.

#include <stdio.h>
int main(){
   int nota;
   printf("Entre com a nota: ");
   int deu_certo = scanf("%i", &nota);

  switch(nota) {
    case 1: printf("Ruim\n"); break;
    case 2: printf("Insuficiente\n"); break;
    case 3: printf("Suficiente\n"); break;
    case 4: printf("boma\n"); break;
    case 5: printf("Otimo\n"); break;
    defaut: printf("Nota invalida. Tente novamente.\n"); break;
  }
  

  return 0;
}