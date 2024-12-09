#include <stdio.h>

/*Ler uma matriz A com 4 linhas e 5 colunas, armazenando nessa matriz os valores
das temperaturas em graus Celsius. Construir uma matriz B de mesma dimensão,
sendo que cada elemento da matriz B deverá ser o valor da temperatura em graus
Fahrenheit de cada elemento correspondente da matriz A. Apresentar ao final a
matriz A e B.*/

int main()
{
    float a[4][5], b[4][5]; 
    int l, c; 
    
    for(l=0; l<4; l++)
    {
        for(c=0; c<5; c++)
        {
            printf("Digite: ");
            scanf("%f", &a[l][c]);
        }
    }

    for(l=0; l<4; l++)
    {
        for(c=0; c<5; c++)
        {
            b[l][c] = (a[l][c] * 9/5) + 32;
        }
    }

    printf("\n");
    for(l=0; l<4; l++)
    {
        for(c=0; c<5; c++)
        {
            printf("%.2f ", b[l][c]);
        }
        printf("\n");
    }

    return 0;
}