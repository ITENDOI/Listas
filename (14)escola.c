#include <stdio.h>

void imprimir(int n, int respostas[], int gab[])
{
    int i;
    for(i = 0; i < n; i++)
    { /*verifica a resposta do aluno com o gabarito*/
      if(respostas[i] == gab[i])
      {
        printf("Questao %d = Correta.\n", i+1);
      }
      else
      {
        printf("Questao %d = Errada.\n", i+1);
      }
    }
    return;
}

void ler(int n, int vetor[])
{ /*função para ler o gabarito e as respostas */
  int i;
  for(i = 0; i < n; i++)
  {
    scanf("%d", &vetor[i]);
  }
  return;
}

int main()
{
  int ques = 50;
  int respostas[ques], gab[ques];
  printf("Digite as respostas do gabarito\n");
  ler(ques, gab);
  printf("Digite as respostas do aluno\n");
  ler(ques, respostas);
  imprimir(ques, respostas, gab);
  return 0;
}
