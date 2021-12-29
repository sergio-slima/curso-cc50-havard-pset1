#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    	
    float troco = 0;
    int i = 0;
    do
    {
        troco = get_float("Troco devido: ");
    }
    while (troco < 0.1);    	
    
    //Converter dolar/reais por centavos
    int centavos = round(troco * 100);
    
    //Moedas disponiveis 25, 10, 5 e 1.
    while (centavos >= 25)
    {
        centavos = centavos - 25;
        i++;
    }
    while (centavos >= 10)
    {
        centavos = centavos - 10;
        i++;
    }
    while (centavos >= 5)
    {
        centavos = centavos - 5;
        i++;
    }
    while (centavos > 0)
    {
        centavos = centavos - 1;
        i++;
    }
    
    printf("Quantidade de moedas = %i\n", i);
}