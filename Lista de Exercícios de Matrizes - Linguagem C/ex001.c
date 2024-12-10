#include <stdio.h>

/*Gere e imprima uma matriz M 4x4 com valores aleatórios entre 0-9. Após isso determine o
maior número da matriz e a sua posição (linha, coluna).*/

int main()
{
    int m[4][4], l, c, ma=0, li=0, co=0;

    for(l=0; l<4; l++)
    {
        for(c=0; c<4; c++)
        {
            printf("Digite: ");
            scanf("%i", &m[l][c]);
            while((m[l][c] < 0) || (m[l][c] > 9))
            {
                printf("Digite novamente: ");
                scanf("%i", &m[l][c]);
            }
        }
    }

    printf("\n");
    for(l=0; l<4; l++)
    {
        for(c=0; c<4; c++)
        {
            printf("%4i ", m[l][c]);
        }
        printf("\n");
    }
    
    for(l=0; l<4; l++)
    {
        for(c=0; c<4; c++)
        {
            if(m[l][c] > ma)
            {
                ma = m[l][c];
                li = l;
                co = c;
            }
        }
    }

    printf("\nMaior valor da matriz: M[%i][%i] = %i", li, co, ma);
    return 0;
}