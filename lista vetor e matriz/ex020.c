#include <stdio.h>

/*Ler uma matriz A com 5 linhas e 4 colunas. Construir uma matriz B de mesma
dimensão, onde cada elemento da matriz B deverá ser o fatorial de cada elemento
correspondente da matriz A. Apresentar ao final as matrizes A e B.*/

int main()
{
    int a[5][4], l, c, b[5][4], x;

    for(l=0; l<5; l++)
    {
        for(c=0; c<4; c++)
        {
            printf("Digite: ");
            scanf("%i", &a[l][c]);
        }
    }

    for(l=0; l<5; l++)
    {
        for(c=0; c<4; c++)
        {
            b[l][c] = 1;
            for(x=1; x<=a[l][c]; x++)
            {
                b[l][c] *= x;
            }
        }
    }

    printf("\n");
    for(l=0; l<5; l++)
    {
        for(c=0; c<4; c++)
        {
            printf("%4i ", a[l][c]);
        }
        printf("\n");
    }

    printf("\n");
    for(l=0; l<5; l++)
    {
        for(c=0; c<4; c++)
        {
            printf("%4i ", b[l][c]);
        }
        printf("\n");
    }

    return 0;
}
