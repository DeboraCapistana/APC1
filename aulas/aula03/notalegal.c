#include <stdio.h> 
int main () {

  printf("\x1b[32m--------------------------------\n");
  printf("       N O T A   L E G A L     \n");
  printf("--------------------------------\x1b[0m\n");
  printf("ITEM                QTD    VALOR  \n");
  printf("%-19s %03i %8.2f\n", "Banana nanica", 1, 15.00);
  printf("%-19s %03i %8.2f\n", "Maca fuji" , 10, 50.00);
  printf("%-19s %03i %8.2f\n", "Uva globo" , 5, 9.00);
  printf("---------------------------------\n");
  printf("\x1b[31m TOTAL ............. R$ %8.2f\x1b[0m\n", 75.00);
  printf("---------------------------------");
  
  //printf("Banana nanica       1   R$ 15.00\n");
  //printf("Maca fuji           10   R$ 50.00\n");
  //printf("Uva globo           5    R$ 9.00\n");
  //printf("TOTAL ...................:  R$ 75.00\n");
  //printf("------------------------------------\n");
  return 0;

}