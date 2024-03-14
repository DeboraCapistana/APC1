#include <stdio.h>

int main(){
  char caracter;// 'A' '1' '\n''\\' aceita 1byte -128 a 127
  int inteiro; // -15, 0, +15 ocupa 4bytes -2bi a 2bi
  float decimal_com_6casas;// 0.000001 ocupa 4bytes -3.4e38 a 3.4e38
  double decimal_com_15casas;// 0.0000000000000001 ocupa 8bytes 1.8e308 a 1.8e308
  void sem_valor; 
  // nao existe string, mas C aceita "uma frase qualquer"
  // para caracter usa-se aspas simples ''
  
  return 0;
}