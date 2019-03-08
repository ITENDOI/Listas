#include <stdio.h>

void printador(int tam, int array[])
{
    int i;
    printf("v={");
    for(i = 0; i < tam - 1; i++)
    {
      printf("%d,", array[i]);
    }
      printf("%d}", array[tam-1]);
    /* printa o valor do vetor de saída */
    return;
}

void modifica(int n, int m, int tam, int vetor[])
{
    int i;
    int array[tam];

    for(i = 0; i < m - 1; i++)
    {
      /* ler os valores até a uma posicao atrás da lida */
      array[i] = vetor[i];
      /* termina uma posição antes da posição lida */
    }

    array[m - 1] = n; /* Adiciona o valor dado na posicao pedida */

    for(i = m - 1; i < tam; i++)
    {
      array[i + 1] = vetor[i];
      /* Adiciona o restante do vetor */
    }

    printador(tam, array);
    return;
}

int main()
{
  int vetor [6] = {3, 8, 5, 9, 12, 3}; /* vetor inicial*/
  int tam = (sizeof(vetor)/sizeof(int) + 1); /* faz a contagem do tamanho do vetor e adiciona 1
  ao seu tamanho, para inserir o valor lido */
  int n, m;
  printf("Digite o valor: ");
  scanf("%d", &n);
  printf("\n");
  printf("Digite a posicao: ");
  scanf("%d", &m);
  printf("\n");

  modifica(n, m, tam, vetor);
  return 0;
}
