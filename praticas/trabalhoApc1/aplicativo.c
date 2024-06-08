// a) Deve conter apenas a função main(), sem precisar dividir o código em outras funções;
// b) Implementar um menu principal, fazendo uso de comandos de seleção e repetição;
// c) Garantir a validação da entrada de dados, permitindo apenas os valores aceitos e evitando possíveis erros durante a execução do programa;
// d) Incorporar a capacidade de armazenar dados em memória, fazendo uso de matrizes e estruturas.
// // Submeta seu projeto por meio do Replit para permitir a análise do código e a execução do programa.
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>//bibliote para char[]=string

int main(){
  int menu,tamanho,opcao;
  char data_consulta[11], horario[10], medico[30], paciente[11], pagamento[20];
  
}
  struct cadastro { 
  char nome[50];
  int data[11];
  int cpf[12];
  char endereco[25];
  char convenio[20];
  char contato[12];
  char caso[30];
  };
  
  struct cadastro cadastro[10]
 do{ //inicio do menu
  
printf("1-PESQUISA\n");
printf("2-CADASTRO\n");
printf("3-MARCAR CONSULTA\n");
printf("Digite a opção desejada: ");

  scanf("%i", &menu);
  getchar();
  system("clear");
  
  switch(menu){


    case 1:
        //pesquisa
      printf("CPF: ");
      scanf("%[^\n]c", &cpf);
      getchar();
      printf("Voltar ao menu principal?: \n");
      printf("1-Sim \n");
      printf("2-Não, fazer nova pesquisa. \n");
      printf("Digite a opção desejada: ");
      getchar();

    break;
    
    case 2: 

     
      
     printf("Nome do Paciente: \n");
     scanf("%[^\n]c", &nome);
     getchar();
      
     printf("Data de nascimento: \n");
     scanf("%[^\n]c", &data);
     getchar();
   
    do{
      printf("CPF: \n");
      scanf("%s", &cpf);
      getchar();
      
        tamanho = strlen(cpf);
        if(tamanho!=11){
        printf("\nCPF invalido!Tente novamente!\n");
        }
    }while(tamanho!=11);

    printf("Endereço: \n");
    scanf("%[^\n]c", &endereco);
    getchar();
      
    printf("Número do convênio: \n");
    scanf("%[^\n]c", &convenio);
    getchar();
      
    printf("Contato: \n");
    scanf("%[^\n]c", &contato);
    getchar();
    printf("Voltar ao menu principal?: \n");


        printf("1- Sim, salvar dados \n");
        printf("2- Não, alterar dados \n");
        printf("Digite a opção desejada: ");
        scanf("%i", &opcao);//tipo inteiro %i
        getchar();
      
       system("clear");//limpar tela
      
     if(opcao==2){
      printf("ALTERAR: \n"); 
      printf("1-Nome do Paciente: \n");
      printf("2-Data de nascimento: \n");
      printf("3-CPF: \n");
      printf("4-Endereço: \n");
      printf("5-Convênio: \n");
      printf("6-Contato: \n");
      printf("Digite a opção desejada: ");
      scanf("%i", &opcao);//ver agr
      
     
       getchar();
       
        system("clear");//limpar tela
       
      if(opcao==1){
         printf("Nome do Paciente: \n");
         scanf("%[^\n]c", &nome);
         getchar();
      } 
    
      if(opcao==2){
         printf("Data de nascimento: \n");
         scanf("%[^\n]c", &data);
         getchar();
      }

      if(opcao==3){
         printf("CPF: \n");
         scanf("%[^\n]c", &cpf);
         getchar();
    } 
      
      if(opcao==4){
         printf("Endereço: \n");
         scanf("%[^\n]c", &endereco);
         getchar();
    } 
        if(opcao==5){
           printf("Convênio: \n");
         scanf("%[^\n]c", &convenio);
         getchar();
    }
        if(opcao==6){
           printf("Contato: \n");
         scanf("%[^\n]c", &contato);
         getchar();
        }
     }
    break;
    
   case 3:
      //MARCAR CONSULTA
     printf("Nome do paciente: \n");
     scanf("%[^\n]c", &paciente);
     getchar();
     
     printf("Data de nascimento: \n");
     scanf("%[^\n]c", &data);
     getchar();
     
     printf("Caso do paciente: \n");
     scanf("%[^\n]c", &caso);
     getchar();

     printf("Horario da consulta: \n");
     scanf("%[^\n]c", &horario);
     getchar();
     
     printf("Data da consulta: \n");
     scanf("%[^\n]c", &data_consulta);
     getchar();

     printf("Medico responsável: \n");
     scanf("%[^\n]c", &medico);
     getchar();
  
     printf("Forma de pagamento: \n");
     scanf("%[^\n]c", &pagamento);
     getchar();

     printf("Voltar ao menu principal?: \n");
     printf("Digite a opção desejada: ");

     
     printf("1-Sim \n");
     printf("2-Não \n");

     scanf("%i", &opcao);
     getchar();

  
  break;
  }
}while(opcao==1);//condicao para voltar pro menu, se opcao for igual a 1 volta pro menu
                                               
               
  return 0;
}




