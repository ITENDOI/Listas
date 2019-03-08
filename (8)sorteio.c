#include <stdio.h>

void printador(int tam, int premiado[])
{
  int i;
  printf("O numero ");
  for(i = 0; i < tam; i++)
    printf("%d", premiado[i]);

    printf(" foi o ganhador do sorteio!\n");
    return;
}
void ler_vetor(int tam, int federal[])
{
  int i;
  int premiado[5];
  for(i = 0; i < tam; i++)
  {
    scanf("%d", &federal[i]);
    premiado[i] = federal[i] % 10;
  }
  printador(tam, premiado);
  return;
}
int main()
{
  int federal[5];
  int i;
  int tam = sizeof(federal) / sizeof(int);
  printf("Digite os numeros sorteados pela loteria federal\n");
  ler_vetor(tam, federal);
  return 0;
}
