#include <stdio.h>

/*Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores
lidos.*/

int main()
{
    int valores[6], c;

    for(c=0; c<6; c++)
    {
        printf("Digite: ");
        scanf("%i", &valores[c]);
    }

    printf("\n");
    for(c=0; c<6; c++)
    {
        printf("%i\n", valores[c]);
    }

    return 0;
}