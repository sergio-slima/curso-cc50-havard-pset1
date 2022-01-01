#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    	
    float troco = 0;
    int i = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    
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
        a++;
    }
    while (centavos >= 10)
    {
        centavos = centavos - 10;
        b++;
    }
    while (centavos >= 5)
    {
        centavos = centavos - 5;
        c++;
    }
    while (centavos > 0)
    {
        centavos = centavos - 1;
        d++;
    }
    i = a + b + c + d;
    printf("Quantidade de moedas de ¢25 = %i\n", a);
    printf("Quantidade de moedas de ¢10 = %i\n", b);
    printf("Quantidade de moedas de ¢05 = %i\n", c);
    printf("Quantidade de moedas de ¢01 = %i\n", d);
    printf("Quantidade total de moedas  = %i\n", i);
}