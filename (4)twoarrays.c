#include <stdio.h>

int main()
{
  int vetor[9] = {3, 5, 6, 8, 1, 4, 2, 3, 7};
  int v_impar[10], v_par[10];
  int i, temp_par = 0, temp_impar = 0;

    for(i = 0; i < 9; i++)
    {
      if(vetor[i] % 2 == 0)
      {
        v_par[temp_par] = vetor[i];
        temp_par += 1;
      }
      else
      {
        v_impar[temp_impar] = vetor[i];
        temp_impar += 1;
      }
    }
    printf("u= {");
    for(i = 0; i < temp_impar - 1; i++)
    {
      printf("%d, ", v_impar[i]);
    }
    printf("%d}\nw= {", v_impar[i]);
    for(i = 0; i < temp_par - 1; i++)
    {
      printf("%d, ", v_par[i]);
    }
    printf("%d}\n", v_par[i]);

  return 0;
}
