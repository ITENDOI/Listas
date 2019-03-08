#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void deletar(int n, int tam, int vetor[])
{
    int i;
    for(i = n - 1; i < tam-1; i++) /*o contador (i) já começa da posição indicada*/
    {
      int temp = vetor[i];
      vetor[i] = vetor[i+1];
      vetor[i+1] = temp;
      /*Aqui ocorre a troca dos valores até o valor da posição lida for o último do vetor*/
    }
    tam -= 1; /*Aqui o tamanho do vetor foi reduzido em -1 excluindo assim o ultimo valores
    que era pra ser deletado, gerando um novo vetor de tamanho tam - 1*/
    printf("v ={");
    for(i = 0; i < tam-1; i++)
    {
      printf("%d, ", vetor[i]);
      /*imprimindo valores do vetor de saída*/
    }
    printf("%d}\n", vetor[tam-1]);
    return;
}

int main()
{
  int vetor[6] = {2, 5, 7, 10, 12, 13}; /*Vetor de entrada*/
  int n;
  int tam = sizeof(vetor) / sizeof(int); /*tan se torna o tamanho do vetor, nesse caso tam == 6*
  int n; /*n é o valor lido e posição do vetor que deve ser deletada*/
  printf("Digite a ordem que deve ser deletada: ");
  scanf("%d", &n); printf("\n");
  deletar(n, tam, vetor);
  return 0;
}
