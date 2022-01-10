#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // TODO: Solicite o valor inicial ao usuário
    int x;
    do
    {
        x = get_int("População inicial: ");
    }
    while (x < 9);

    // TODO: Solicite o valor final ao usuário
    int y;
    do
    {
        y = get_int("População final: ");
    }
    while (y <= x);

    // TODO: Calcule o número de anos até o limite
    int n = 0;
    int z = x;
    while (z < y)
    {
        z = z + ((z / 3) - (z / 4));
        n++;
    }

    // TODO: Imprima o número de anos
    printf("Years: %i\n", n);

}