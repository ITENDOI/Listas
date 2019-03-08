#include <stdio.h>

void produto_escalar(int n, int v1[], int v2[])
{
    int i, escalar = 0;
    for(i = 0; i < n; i++)
    {
      escalar += v1[i] * v2[i];
    }
    printf("O produto escalar dos vetores U e W eh: %d\n", escalar);
}

void ler_vetor(int n, int v1[], int v2[])
{
    int i;
    for(i = 0; i < n; i++)
    {
      scanf("%d", &v1[i]);
    }
    for(i = 0; i < n; i++)
    {
      scanf("%d", &v2[i]);
    }
    produto_escalar(n, v1, v2);
    return;
}

int main()
{
  int n;
  printf("Digite o tamanho dos vetores\n");
  scanf("%d", &n);
  int vetor_u[n], vetor_v[n];

  ler_vetor(n, vetor_u, vetor_v);
  return 0;
}
