#include <stdio.h>

void calcular_raiz(int norma)
{
  int i, nor = 0;
  for(i = 0; i < norma; i++)
  {
    if(i * i == norma)
    {
      nor = i;
    }
  }
  if(nor > 0)
  {
    printf("Norma do vetor W = %d\n", nor);
  }
  else
  {
    printf("Norma do vetor W = raiz quadrada de %d\n", norma);
  }
  return;
}
void calc_norma(int n, float vetor[])
{
    int i, norma = 0;
    for(i = 0; i < n; i++)
    {
      norma += vetor[i] * vetor[i];
    }
    calcular_raiz(norma);
    return;
}

void ler_vetor(int n, float vetor[])
{
  int i;
  for(i = 0; i < n; i++)
  {
    scanf("%f", &vetor[i]);
  }
  calc_norma(n, vetor);
  return;
}
int main()
{
  int n;
  scanf("%d", &n);
  float vetor[n];
  ler_vetor(n, vetor);
  return 0;
}
