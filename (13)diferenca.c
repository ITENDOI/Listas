#include <stdio.h>

int main()
{
  int vetor[8] = {3, 5, 9, 16, 17, 20, 26, 31}; /*vetor inicial*/
  int tam = sizeof(vetor)/sizeof(int); /*define o tamanho do vetor*/
  int ordem = 1, dif = 0;
  int i; /*contador*/
  for(i = 0; i < tam; i++)
  {
    int temp = vetor[i+1] - vetor[i];
    if(temp > dif)
    { /*sempre que temp for maior que a dif atual dif se torna temp*/
      dif = temp;
      ordem = i + 1; /*ordem vai ser a posição e não o índice*/
    }
  } /*prints*/
  printf("Maior diferenca: %d\n", dif);
  printf("Ordens: %d e %d\n", (ordem+1), ordem);
  return 0;
}
