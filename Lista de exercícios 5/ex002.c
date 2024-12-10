#include <stdio.h>

int main()
{
    int a[6] = {1, 0, 5, -2, -5, 7}, s, c;

    s = a[0] + a[1] + a[5];
    printf("Soma: %i\n", s);
    a[4] = 100;
    printf("\n");
    for (c = 0; c < 6; c++)
    {
        printf("%i\n", a[c]);
    }

    return 0;
}