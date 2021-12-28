#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int i, j, n, a, b = 0;
    do
    {
        n = get_int("Digite um número inteiro de 1 a 8: ");
    }
    while (n < 1 || n > 8);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if ((j + i + 1) < n)
            {
                printf(" ");
            }
            else
            {
                printf("#");
                a++;
            }
        }
        printf("  ");

        for (b = 0; b < a; b++)
        {
            printf("#");
        }
        printf("\n");
        a = 0;
    }
}