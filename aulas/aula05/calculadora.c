#include <stdio.h>
#include <math.h>

int main (){

  int numero1;
  int numero2;

  printf("Entre com o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o segundo numero: ");
   deu_certo = scanf("%i", &numero2);

  int soma = numero1 + numero2;
  printf("A soma dos numeros é %i\n", soma);

  int subtracao = numero1 - numero2;
  printf("A subtração dos numeros é %i\n",subtracao);

  int multiplicacao = numero1 * numero2;
  printf("A multiplicacao dos numeros é %i\n", multiplicacao);

  float divisao = 1.0f* numero1 / numero2; 
  printf("A divisao dos numeros é %f\n", divisao);

  int resto = numero1 % numero2;
  printf("O resto da divisao é %i\n", resto);

  // numero1 = numero1 +1
  // é  chamado incremento


  printf("O incremento do primeiro numero é %i\n", numero1++);
  // imprime antes e soma depois; faz a soma primeiro e depois faz o resto 
  printf("O incremento do primeiro numero é %i\n", ++numero1);
  //faz a soma antes e depois imprime;

  // para diminuir (decremento) = numero1 -1

  printf("O decremento do primeiro numero é %i\n", --numero1);
  printf("O decremento do primeiro numero é %i\n", numero1--);

  double raiz = sqrt(numero1);
  printf("A raiz quadrada do primeiro numero é %f\n", raiz);

  double potencia = pow(numero1, 3);
  printf("A potencia do primeiro numero é %f\n", potencia);

  double logaritmo2 = log2(numero1);
  printf("O log2 do primeiro numero é %f\n", logaritmo2);

  const double PI = 3.1416;
  double seno = sin(numero1 * (PI / 180));
  printf("O seno do primeiro numero é %f\n", seno);
 
  
  double cosseno = cos(numero1 * (PI / 180));
  printf("O cosseno do primeiro numero é %f\n", cosseno);
  
  
return 0;
  }
