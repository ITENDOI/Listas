#include <stdio.h>

void verifica(int n, int vetor1[], int vetor2[])
{
  int i, qtd = 0;
  for(i = 0; i < n; i++)
  {
    if(vetor1[i] == vetor2[i])
    {
      qtd += 1;
    }
  }
  if(qtd == n)
  {
    printf("O vetor eh palindromo\n");
  }
  else
  {
    printf("O vetor nao eh palindromo\n");
  }
  return;
}

void inverso(int n, int vetor1[], int vetor2[])
{
    int i, j;
    for(i = n -1, j = 0; i >= 0, j < n; i--, j++)
    {
      vetor2[j] = vetor1[i];
    }
    verifica(n, vetor1, vetor2);
    return;
}

void ler_vetor(int n, int vetor1[], int vetor2[])
{
    int i;
    for(i = 0; i < n; i++)
    {
      scanf("%d", &vetor1[i]);
    }
    inverso(n, vetor1, vetor2);
    return;
}

int main()
{
  int n;
  scanf("%d", &n);
  int vetor1[n], vetor2[n];
  ler_vetor(n, vetor1, vetor2);

  return 0;
}
