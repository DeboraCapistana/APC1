#include <stdio.h>

int main () {
  float preco_inicial = 100.0f;
  const float ICMS = 0.17f;
  const float COFINS = 0.76F;
  const float PIS_PASEP = 0.0165f;

  float preco_final = (1 +  ICMS + PIS_PASEP + COFINS);

  printf ("Preco inicial = %f\n", preco_final);
  printf ("Preco final = %f\n", preco_final);

  float valor_icms = ICMS * preco_inicial;
  float valor_cofins = COFINS * preco_inicial;
  float valor_pis_pasep = PIS_PASEP * preco_inicial; 

  printf("preco inicial = %f\n", preco_inicial);
  printf("Valor ICMS = %f\n", valor_icms);
  printf("Valor COFINS = %f\n", valor_cofins);
  printf("Valor PIS_PASEP = %f\n", valor_pis_pasep);
  printf("preco final = %f\n", preco_final);
  
  return 0; 
}