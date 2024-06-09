// a) Deve conter apenas a função main(), sem precisar dividir o código em outras funções;
// b) Implementar um menu principal, fazendo uso de comandos de seleção e repetição;
// c) Garantir a validação da entrada de dados, permitindo apenas os valores aceitos e evitando possíveis erros durante a execução do programa;
// d) Incorporar a capacidade de armazenar dados em memória, fazendo uso de matrizes e estruturas.
// // Submeta seu projeto por meio do Replit para permitir a análise do código e a execução do programa.
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>//biblioteca para char[]=string

int main(){
  int menu,tamanho,opcao, contador=0, achou,ver=0,consulta;
  char paciente[11], pagamento[20], pesquisar[12];
  
  struct cadastro {                      
  char nome[50];            
  int data[11];
  char cpf[12];
  char endereco[25];
  char convenio[20];
  char contato[12];
  char caso[10];
  char horario[10];
  char data_consulta[11];
  char medico[11];
  float pagamento;
  };
  
  struct cadastro cadastro[100];
  
 do{ //inicio do menu
  system("clear");
   printf("________________________________________________________________\n");
   
   printf("         _   _           _                    _                 \n");
   printf("  ____  | | (_)  _ ___  (_)  ____   ___ _    | |  _   _   ____  \n");
   printf(" |  __| | | | | | '_  | | | |  __| |  _` |   | | | | | | |_  /  \n");
   printf(" | (__  | | | | | | | | | | | |__  | (_| |   | | | |_| |  / /   \n");
   printf(" |____| |_| |_| |_| |_| |_| |____| |___,_|   |_| |___,_| /___|  \n");
   
   printf("_________________________________________________________________\n");

  printf("\n\n\e[0;36m ESCOLHA UMA OPÇÃO \e[0;m\n");
   
  printf("\n\n1- PESQUISA \e[0;m");
   
  printf("\n\n2- CADASTRO ");
   
  printf("\n\n3- MARCAR CONSULTA\n");
 
  printf("\n\n\e[0;36m Digite a opção desejada: \e[0;m\n");
   
  printf("\n_______________________________________________________________\n");
   scanf("%i", &menu);
  

  
  getchar();
  
  system("clear");
   
  switch(menu){

    case 1:
      do{
      do{
    system("clear");
    
    printf("Pesquisar por:\n");
      scanf("%s", &pesquisar);
         tamanho = strlen(pesquisar);
        if(tamanho!=11){
         printf("\nCPF invalido!Tente novamente!\n");
        }
      }while(tamanho!=11);
      ver=0;
      for(int i=0;i<=contador;i++){
      achou=strcmp(pesquisar,cadastro[i].cpf);
        
      if(achou==0){
      ver++;
                        
      printf("________________________________________________________\n");
  
      printf("e[0;36m                    C A D A S T R O e[0;m\n");

      printf("________________________________________________________\n");
      printf("Nome do Paciente: %s\n",cadastro[i].nome);
        
      printf("endereço: %s\n",cadastro[i].endereco);
        
      printf("contato: %s\n",cadastro[i].contato);
        
      printf("convenio: %s\n",cadastro[i].convenio);
        
      printf("data: %s\n",cadastro[i].data);
      printf("_____________________________________________________________\n");


      
        printf("__________________________________________________________\n");
        printf("\n\e[0;36m             C O N S U L T A\e[0;0m\n\n");
        printf("__________________________________________________________\n");
        
        printf("Caso do paciente: %s \n", cadastro[i].caso);
        
        printf("Horário da consulta: %s \n", cadastro[i].horario);
        
        printf("Data da consulta: %s \n",cadastro[i].data_consulta);
        
        printf("Medico responsável: %s\n", cadastro[i].medico);
        
        printf("Valor à pagar: %.2f\n", cadastro[i].pagamento);

        printf("_________________________________________________________\n");

        
      break;
      }
        if(ver!=1&&i==contador){

          printf("\nCPF não cadastrado!\n");
          
        }
        
      }
      printf("___________________________________________________________\n");
      
      printf("VOLTAR AO  MENU PRINCIPAL? \n");
        
        printf("Digite a opção desejada: \n");
        
      printf("1-Sim \n");
      
      printf("2-Não, fazer nova pesquisa. \n");
      
      
      printf("___________________________________________________________\n");

      scanf("%i",&opcao);
      getchar();
      }while(opcao==2);

    break;
    //chave=cpf
    case 2:
     printf("____________________________________________________________\n"); 
     printf("\n \e[0;36m                   C A D A S T R O  \e[0;0m\n");
    printf("___________________________________________________________\n");
      
     printf("NOME DO PACIENTE: \n");
     scanf("%[^\n]s",&cadastro[contador].nome); 
     getchar();
      
     printf("DATA DE NASCIMENTO: \n");
     scanf("%[^\n]s", &cadastro[contador].data);
     getchar();
   //cpf
    do{
      printf("CPF: \n");
      scanf("%s", &cadastro[contador].cpf);
      getchar();
      
        tamanho = strlen(cadastro[contador].cpf);
        if(tamanho!=11){
        printf("\e[0;36m \nCPF INVÁLIDO! TENTE NOVAMENTE!\e[0;m\n");
        }
    }while(tamanho!=11);

    printf("ENDEREÇO: \n");
    scanf("%[^\n]s", &cadastro[contador].endereco);
    getchar();
      
    printf("NÚMERO DE CONVÊNIO: \n");
    scanf("%[^\n]s", &cadastro[contador].convenio);
    getchar();
      
    printf("CONTATO: \n");
    scanf("%[^\n]s", &cadastro[contador].contato);
    getchar();
    printf(" \e[0;36m DESEJA SALVAR O CADASTRO?  \e[0;m\n");
    printf("___________________________________________________________________\n");
    

        printf("\e[0;32m 1- Sim, salvar dados \e[0;m\n");
        printf("\e[0;31m 2- Não, alterar dados \e[0;m\n");
        printf("Digite a opção desejada: ");
        scanf("%i", &opcao);//tipo inteiro %i
        getchar();
      
       system("clear"); //limpar tela
      //alterar
     if(opcao==2){
      printf("ALTERAR: \n"); 
       
      printf("1-Nome do Paciente: \n");
       
      printf("2-Data de nascimento: \n");
       
      printf("3-CPF: \n");
       
      printf("4-Endereço: \n");
       
      printf("5-Convênio: \n");
       
      printf("6-Contato: \n");
       
      printf("Digite a opção desejada: ");
       
      scanf("%i", &opcao);
      
     
       getchar();
       
        system("clear");//limpar tela
       
      if(opcao==1){
         printf("Nome do Paciente: \n");
         scanf("%[^\n]s", &cadastro[contador].nome);
         getchar();
      } 
    
      if(opcao==2){
         printf("Data de nascimento: \n");
         scanf("%[^\n]s",&cadastro[contador].data);
         getchar();
      }

      if(opcao==3){
         printf("CPF: \n");
         scanf("%[^\n]s", &cadastro[contador].cpf);
         getchar();
    } 
      
      if(opcao==4){
         printf("Endereço: \n");
         scanf("%[^\n]s", &cadastro[contador].endereco);
         getchar();
    } 
        if(opcao==5){
           printf("Convênio: \n");
         scanf("%[^\n]s", &cadastro[contador].convenio);
         getchar();
    }
        if(opcao==6){
           printf("Contato: \n");
         scanf("%[^\n]s", &cadastro[contador].contato);
         getchar();
        }
     }
      contador++;
    break;
    
   case 3:
      //MARCAR CONSULTA
  
do{
   system ("clear");
         do{
     printf("\nCPF :");
     scanf("%s", &pesquisar);
          tamanho = strlen(pesquisar);
         if(tamanho!=11){
          printf("\nCPF inválido! Tente novamente!\n");
         }
       }while(tamanho!=11);
       ver=0;
       for(int i=0;i<=contador;i++){
      achou=strcmp(pesquisar,cadastro[i].cpf);

         if(achou==0){
           consulta==i;
           ver++;
           printf("-----------------------------------------------------------------------------\n");
           printf("                M A R C A R  C O N S U L T A\n");
           printf("-----------------------------------------------------------------------------\n");
           printf("Nome do Paciente: %s\n\n",cadastro[i].nome);
           printf("Contato: %s\n\n",cadastro[i].contato);
           printf("Convenio: %s\n\n",cadastro[i].convenio);
           getchar();
           break;
           }
             if(ver!=1&&i==contador){

           printf("\e[4;31m \e[0;31m\nCPF não cadastrado!\e[0;m ]\e[4;m\n");
printf("");
             }

           }
if(ver==1){
      printf("-----------------------------------------------------\n");
     
     printf("Caso do paciente: ");
     scanf("%[^\n]s", &cadastro[consulta].caso);
     getchar();
     printf("\n");

     printf("Horário da consulta: ");
     scanf("%[^\n]s", &cadastro[consulta].horario);
     getchar();
     printf("\n");
     printf("Data da consulta: ");
     scanf("%[^\n]s", &cadastro[consulta].data_consulta);
     getchar();
     printf("\n");
     printf("Médico responsável: ");
     scanf("%[^\n]s", &cadastro[consulta].medico);
     getchar();
     printf("\n");
     printf("\e[0;31m Valor à pagar: \e[0;m");
     scanf("%f", &cadastro[consulta].pagamento);
     getchar();

}
     
     printf("\n");
     printf("Voltar ao menu principal?: \n");
     printf("Digite a opção desejada: \n\n");

     
     printf("1-Sim    2-Não, tentar novamente \n");
    scanf("%d", &opcao);
    getchar();

}while(opcao==2);
  }
} while(opcao==1);//condicao para voltar pro menu, se opcao for igual a 1 volta pro menu



               
  return 0;
}




