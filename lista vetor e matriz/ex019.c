#include <stdio.h>

/*Ler duas matrizes A e B, cada uma com uma dimensão para 12 elementos.
Construir uma matriz C de duas dimensões, sendo que a primeira coluna da matriz C
deverá ser formada pelos elementos da matriz A multiplicados por 2 e a segunda
coluna deverá ser formada pelos elementos da matriz B subtraídos de 5. Apresentar
a matriz C.*/

int main()
{
    int a[12], b[12], l, c[12][2], c1;

    for(l=0; l<12; l++)
    {
        printf("Digite: ");
        scanf("%i", &a[l]);
    }

    printf("\n");
    for(l=0; l<12; l++)
    {
        printf("Digite: ");
        scanf("%i", &b[l]);
    }

    for(l=0; l<12; l++)
    {
        c[l][0] = a[l] * 2;
        c[l][1] = b[l] - 5;
    }

    printf("\n");
    for(l=0; l<12; l++)
    {
        for(c1=0; c1<2; c1++)
        {
            printf("%4i ", c[l][c1]);
        }
        printf("\n");
    }

    return 0;
}
