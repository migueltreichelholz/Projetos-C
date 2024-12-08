#include <stdio.h>

/*Ler duas matrizes A e B, cada uma com 5 linhas e 3 colunas. Construir uma matriz
C de mesma dimensão, que é formada pela soma dos elementos da matriz A com os
elementos da matriz B. Apresentar a matriz C.*/

int main()
{
    int a[5][3], b[5][3], l, c, c1[5][3];

    for(l=0; l<5; l++)
    {
        for(c=0; c<3; c++)
        {
            printf("Digite: ");
            scanf("%i", &a[l][c]);
        }
    }

    printf("\n");
    for(l=0; l<5; l++)
    {
        for(c=0; c<3; c++)
        {
            printf("Digite: ");
            scanf("%i", &b[l][c]);
        }
    }

    for(l=0; l<5; l++)
    {
        for(c=0; c<3; c++)
        {
            c1[l][c] = a[l][c] + b[l][c];
        }
    }

    printf("\n");
    for(l=0; l<5; l++)
    {
        for(c=0; c<3; c++)
        {
            printf("%4i ", c1[l][c]);
        }
        printf("\n");
    }

    return 0;
}
