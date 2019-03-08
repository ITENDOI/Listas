#include <stdio.h>

int main()
{
  int vetor[5] = {1, 2, 3, 4, 5};
  printf("v = {");
  for(int i = 4; i > 0; i--)
  {
    printf("%d, ", vetor[i]);
  }
  printf("%d}\n", vetor[0]);
  return 0;
}
