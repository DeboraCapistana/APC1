// Desenvolva um programa em linguagem C, optando por um jogo de tabuleiro ou um sistema de cadastro de dados, que atenda aos seguintes critérios:
// a) Deve conter apenas a função main(), sem precisar dividir o código em outras funções;
// b) Implementar um menu principal, fazendo uso de comandos de seleção e repetição;
// c) Garantir a validação da entrada de dados, permitindo apenas os valores aceitos e evitando possíveis erros durante a execução do programa;
// d) Incorporar a capacidade de armazenar dados em memória, fazendo uso de matrizes e estruturas.
// // Submeta seu projeto por meio do Replit para permitir a análise do código e a execução do programa.
 #include <stdio.h>
 #include <stdlib.h>


int main() {
  int menu,tamanho;
  char nome[50], data[11], cpf[15],endereco[80], convenio[20], contato[12];
  
  
printf("1-CADASTRO\n");
printf("2-PESQUISA\n");
printf("3-MARCAR CONSULTA\n");
printf("4-ALTERAÇÃO DE DADOS\n");
printf("5-EXCLUSÃO\n");
printf("6-SAIR\n");
  
  scanf("%i", &menu);
  getchar();
  system("clear");
  
  switch(menu){
    
    case 1: 
      
     printf("Nome do Paciente: \n");
     scanf("%[^\n]c", &nome);
  getchar();
     printf("Data de nascimento: \n");
     scanf("%[^\n]c", &data);
      getchar();
   
    do{
      printf("CPF: \n");
       scanf("%s", &cpf);
       
        tamanho = strlen(cpf);
        if(tamanho!=11){
        printf("\nCPF invalido!Tente novamente!\n");
        }
    }while(tamanho!=11);
      
    printf("Endereço: ");
    scanf("%[^\n]c", &endereco);
      
 printf("Convenio: ");

  scanf("");
  printf("Contato: ");
  scanf(");
  break;
  
    
    case 2:
      //pesquisa: 
    

  break;
    
   case 3:
      //MARCAR CONSULTA

  break;

  case 4:
  //ALTERAÇÃO DE DADOS

  break;
    
  case 5:
  //EXCLUSÃO

  break;

  case 6:
  //SAIR

  break;
  }



 
                                               
                                               
                                        






  
  return 0;
}
//menu
//1-cadastro
//2-pesquisa
//3-alteração
//4-exclusão
//5-sair
//



