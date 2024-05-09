#include <stdio.h>
//5. Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).

int main(){
  long int gigabytes = 10;
  long int bytes = gigabytes * 1024 * 1024 * 1024;
  printf("10 gigabyte em bytes é %li \n", bytes);


  return 0;
}

