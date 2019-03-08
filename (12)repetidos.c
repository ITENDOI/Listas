#include <stdio.h>

void repetidos(int tam_u, int tam_w, int u[], int w[])
{
  int i, j, k = -1; /*i vai ser o indice do vetor u*/ /*j é indice do vetor w*/
  /*k vai ser o indice do vetor de saída*/ /*lembrando que k esta em -1 pq, quando o vetor
  for adicionar o primeiro valor ele vai entrar em k+1, k= -1+1 == k=0*/
  int vetor[k];
    for(i = 0; i < tam_u; i++)
    { /*caminhando o índice de u*/
      for(j = 0; j < tam_w; j++)
      { /*caminhando o índice de w*/
        if(u[i] == w[j])
        { /*toda vez que houver um numero repetido em u e w, ele adiciona em v*/
          vetor[k+1] = u[i];
          k += 1; /*toda vez que entra aqui o índice do vetor ganha +1*/
        }
      }
    }
    printf("v = {"); /*printando o vetor de saída*/
    for(i = 0; i < k; i++)
    {
      printf("%d, ", vetor[i]);
    }
    printf("%d}\n", vetor[k]);
    return;
}

int main()
{
  int u[8] = {9, 32, 45, 21, 56, 67, 42, 55};
  int w[9] = {24, 42, 32, 12, 45, 11, 67, 66, 78};
  int tam_u = sizeof(u)/sizeof(int); /*define o tamanho dos vetor u*/
  int tam_w = sizeof(w)/sizeof(int); /*define o tamanho dos vetor w*/

  repetidos(tam_u, tam_w, u, w);
  return 0;
}
