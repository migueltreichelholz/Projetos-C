#include <stdio.h>

/*Ler uma matriz A de uma dimensão com 10 elementos. Construir uma matriz C
com três colunas, em que a primeira coluna da matriz C é formada pelos elementos
da matriz A somados com mais 5, a segunda coluna é formada pelo valor do cálculo
do fatorial de cada elemento correspondente da matriz A e a terceira e última coluna
deverá ser formada pelos quadrados dos elementos correspondentes da matriz A.
Apresentar a matriz C.*/

int main()
{
    int a[10], l, c[10][3], c1;

    for(l=0; l<10; l++)
    {
        printf("Digite: ");
        scanf("%i", &a[l]);
    }

    for(l=0; l<10; l++)
    {
        c[l][0] = a[l] + 5;
        c[l][1] = 1;
        for(c1=1; c1<=a[l]; c1++)
        {
            c[l][1] *= c1;
        }
        c[l][2] = a[l] * a[l];
    }

    printf("\n");
    for(l=0; l<10; l++)
    {
        for(c1=0; c1<3; c1++)
        {
            printf("%4i ", c[l][c1]);
        }
        printf("\n");
    }

    return 0;
}
