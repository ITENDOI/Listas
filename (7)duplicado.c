#include <stdio.h>


int main()
{
    /* Vetor de entrada com elementos de valor duplicado */
    int vetor[9] = {3, 3, 3, 3, 3, 3, 1, 1, 2};

    /* Vetor de saida */
    int saida[9];

    int i, j, n = 0;
    int tam = sizeof(vetor) / sizeof(int); /*tam se torna o tamanho do vetor de entrada */

    /* Exibe Vetor de Entrada */
    printf("Antes: {");
    for( i = 0; i < tam-1; i++ )
        printf("%d, ", vetor[i] );
    printf("%d}\n", vetor[tam-1]);

    /* Remove elementos com valor duplicado */
    for( i = 0; i < tam; i++)
    {
        for( j = 0; j < n; j++ )
        {
            if( vetor[i] == saida[j] )
                break;
        }

        if( j == n )
        {
            saida[n] = vetor[i];
            n++;
        }
    }

    /* Exibe Vetor de Saida */
    printf("Depois: {");
    for( i = 0; i < n-1; i++ )
        printf("%d, ", saida[i] );
    printf("%d}\n",saida[n-1]);

    return 0;
}
