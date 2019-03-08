#include <stdio.h>

void bubble(int tam, int vetor[])
{
    int i, j;
    scanf("%d", &vetor[tam -1]); /* Ler o numero para ser inserido no vetor existente */
    for(i= 0; i < tam; i++)
    {
      for(j = i + 1; j < tam; j++) /*Algorítmo bubble sort de ordenação */
      {
        if(vetor[j] < vetor[i])
        {
          int temp = vetor[i];
          vetor[i] = vetor[j];
          vetor[j] = temp;
        }
      }
    }
    printf("v = {");
    for(i = 0; i < tam - 1; i++) /* Laço de impressão dos valores */
    {
      printf("%d, ", vetor[i]);
    }
    printf("%d}\n", vetor[tam-1]);
    return;
}

int main()
{
  int vetor[6] = {2, 5, 7, 10, 12, 13}; /* vetor definido */
  int tam = (sizeof(vetor)/sizeof(int) + 1); /*Calculo do tamanho do vetor e adicionando um espaço a mai
  para o novo valor que irá ser adicionado */
  bubble(tam, vetor);
  return 0;
}
