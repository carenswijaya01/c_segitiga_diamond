#include <stdio.h>
#include <stdlib.h>

void main()
{
    int angka, i, j, k;
    printf("Masukkan angka: ");
    scanf("%i", &angka);
    for (i = 1; i <= angka; i++)
    {
        for (j = i; j <= angka; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (i % 2 == 1)
            {
                printf("%i ", j);
            }
            else
            {
                printf("%i ", 2 * i - j);
            }
        }
        printf("\n");
    }
    for (i = 1; i < angka; i++)
    {
        for (j = 1; j <= i + 1; j++)
        {
            printf("  ");
        }
        for (k = 2 * angka; k > 2 * i + 1; k--)
        {
            if (i % 2 == 0)
            {
                printf("%i ", (2 * angka) - k + 1);
            }
            else
            {
                printf("%i ", (k - 1) - (2 * i));
            }
        }
        printf("\n");
    }
}
