#include <stdio.h>
void printador(int indice, int vetor[])
{
    int i;
    printf("v = {");
    for(i = 0; i < indice-1; i++)
    { /*imprime o vetor de saída*/
      printf("%d, ", vetor[i]);
    }
    printf("%d}\n", vetor[indice-1]);
    return;
}

void vetor(int tam, int v1[], int v2[])
{
    int vetor[tam*2]; /*tamanho vai ser a soma dos tamanhos dos vetores iniciais*/
    int indice = 0; /*Esse indice é o indice do vetor de saída, que vai ser diferente do indice dos vetores iniciais*/
    int i;

    for(i = 0; i < tam; i++)
    { /*esse laço cria o novo vetor v com elementos dos dois vetores iniciais*/
      vetor[indice] = v1[i];
      indice += 1;
      vetor[indice] = v2[i];
      indice += 1;
    }
    printador(indice, vetor);
    return;
}

int main()
{
  int v1[4] = {4, 8, 1, 9}; /*vetores iniciais*/
  int v2[4] = {2, 5, 7, 3};
  int tam = sizeof(v1)/sizeof(int); /*tamanho dos vetores iniciais*/
  vetor(tam, v1, v2);
  return 0;
}
