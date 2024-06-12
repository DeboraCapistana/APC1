
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
   
   printf("\e[0;96m         _   _           _                    _                 \n");
   printf("  ____  | | (_)  _ ___  (_)  ____   ___ _    | |  _   _   ____  \n");
   printf(" |  __| | | | | | '_  | | | |  __| |  _` |   | | | | | | |_  /  \n");
   printf(" | (__  | | | | | | | | | | | |__  | (_| |   | | | |_| |  / /_   \n");
   printf(" |____| |_| |_| |_| |_| |_| |____| |_____|   |_| |_____| /____|  \e[0m	\n");
   
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
     //Pesquisar
      do{
      do{
    system("clear");
    printf("_________________________________________________________________\n");
      
    printf("\n\e[0;36m Pesquisar por:\e[0;0m\n");
      scanf("%s", &pesquisar);
         tamanho = strlen(pesquisar);
          if(tamanho!=11){
          printf("\n\e[0;31m CPF inválido! Tente novamente!\e[0;0m\n");
        }
      }while(tamanho!=11);
      ver=0;
      for(int i=0;i<=contador;i++){
      achou=strcmp(pesquisar,cadastro[i].cpf);
        
      if(achou==0){
      ver++;
                        
      printf("______________________________________________________\n");
  
      printf("\e[0;36m                    C A D A S T R O \e[0;m\n");

      printf("______________________________________________________\n");
      printf("Nome do Paciente: %s\n",cadastro[i].nome);
        
      printf("endereço: %s\n",cadastro[i].endereco);
        
      printf("contato: %s\n",cadastro[i].contato);
        
      printf("convenio: %s\n",cadastro[i].convenio);
        
      printf("data: %s\n",cadastro[i].data);
      printf("______________________________________________________\n");


      
        printf("______________________________________________________\n");
        
        printf("\n\e[0;36m                C O N S U L T A\e[0;0m\n\n");
        printf("______________________________________________________\n");
        
        printf("Caso do paciente: %s \n", cadastro[i].caso);
        
        printf("Horário da consulta: %s \n", cadastro[i].horario);
        
        printf("Data da consulta: %s \n",cadastro[i].data_consulta);
        
        printf("Médico responsável: %s\n", cadastro[i].medico);
        
        printf("Valor à pagar: %.2s\n", cadastro[i].pagamento);

        printf("______________________________________________________\n");

        
      break;
      }
        if(ver!=1&&i==contador){
          printf("\e[0;31m\nCPF não cadastrado!\e[0;0m\n");
          
        }
        
      }
      printf("________________________________________________________\n");
      
      printf("\n\e[0;36m   VOLTAR AO  MENU PRINCIPAL? \e[0;0m\n");
        
      printf("Digite a opção desejada: \n");
        
      printf("\e[0;32m 1-Sim \e[0;0m\n");
      
      printf("\e[0;31m 2-Não, fazer nova pesquisa. \e[0;0m\n");
      
      
      printf("_________________________________________________________\n");

      scanf("%i",&opcao);
      getchar();
      }while(opcao==2);

    break;
  
    case 2:
    // Fazer cadastro
    printf("__________________________________________________________\n"); 
    printf("\n\e[0;36m                   C A D A S T R O     \e[0;0m\n\n");
    printf("__________________________________________________________\n\n");

      
     printf("NOME DO PACIENTE: \n");
     scanf("%[^\n]s",&cadastro[contador].nome); 
     getchar();
      
     printf("DATA DE NASCIMENTO: \n");
     scanf("%[^\n]s", &cadastro[contador].data);
     getchar();
  
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
    printf("\n\e[0;36m DESEJA SALVAR O CADASTRO?  \e[0;m\n");    

        printf("\e[0;32m 1- Sim, salvar dados \e[0;m\n");
        printf("\e[0;31m 2- Não, alterar dados \e[0;m\n");
      printf("__________________________________________________________\n");

        printf("\n Digite a opção desejada: ");
        scanf("%i", &opcao);
        getchar();
      
       system("clear"); //limpar tela

     if(opcao==2){
      printf("\e[4;36mALTERAR: \e[0;0m\n"); 
       
      printf("1 -Nome do Paciente: \n");
       
      printf("2 -Data de nascimento: \n");
       
      printf("3 -CPF: \n");
       
      printf("4 -Endereço: \n");
       
      printf("5 -Convênio: \n");
       
      printf("6 -Contato: \n");
       
      printf("\e[4;36mDigite a opção desejada: \e[0;0m");
       
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
          printf("----------------------------------------------------------\n");
          printf("\n Digite o CPF: ");
          scanf("%s", &pesquisar);
          tamanho = strlen(pesquisar);
        if(tamanho!=11){
          printf("\e[0;91m\n  CPF inválido! Tente novamente!\e[0;0m\n");
         }
       }while(tamanho!=11);
        ver=0;
        for(int i=0;i<=contador;i++){
        achou=strcmp(pesquisar,cadastro[i].cpf);

         if(achou==0){
           consulta==i;
           ver++;
           printf("----------------------------------------------------\n");
           printf("          \e[0;36m M A R C A R    C O N S U L T A \e[0;0m\n");
           printf("----------------------------------------------------\n");
           
           printf("Nome do Paciente: %s\n\n",cadastro[i].nome);
           
           printf( "Contato: %s\n\n",cadastro[i].contato);
           
           printf( "Convenio: %s\n\n",cadastro[i].convenio);
           getchar();
           break;
           }
             if(ver!=1&&i==contador){

           printf("\e[0;91m \e[0;31m\nCPF não cadastrado!\e[0;m ]\e[0;0m\n");
printf("");
             }

           }
if(ver==1){
      printf("----------------------------------------------------\n");
     
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
     printf("\e[0;31m Valor à pagar: R$ \e[0;m");
     scanf("%f", &cadastro[consulta].pagamento);
     getchar();

}
     
     printf("\n");
     printf("\e[0;36mVoltar ao menu principal?: \e[0;0m\n");
     printf("Digite a opção desejada: \n\n");

     
     printf("\e[0;32m 1-Sim \e[0;00m    \e[0;100m2-Não, tentar novamente \e[0;000m\n");
  printf("________________________________________________________\n");
    scanf("%d", &opcao);
    getchar();

}while(opcao==2);
  }
} while(opcao==1);//condicao para voltar pro menu, se opcao for igual a 1 volta pro menu



               
  return 0;
}


//https://gist.github.com/RabaDabaDoba/145049536f815903c79944599c6f952a// cores

