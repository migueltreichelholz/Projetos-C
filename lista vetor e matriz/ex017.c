#include <stdio.h>

/*Ler 25 elementos para uma matriz qualquer, considerando que ela tenha o tamanho
de 5 linhas por 5 colunas, em seguida apresentar a matriz transposta.*/

int main()
{
    int a[5][5], l, c;

    for(l=0; l<5; l++)
    {
        for(c=0; c<5; c++)
        {
            printf("Digite: ");
            scanf("%i", &a[l][c]);
        }
    }

    printf("\n");
    for(l=0; l<5; l++)
    {
        for(c=0; c<5; c++)
        {
            printf("%4i ", a[c][l]);
        }
        printf("\n");
    }
    
    return 0;
}