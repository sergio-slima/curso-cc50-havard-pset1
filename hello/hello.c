#include <cs50.h>
#include <stdio.h>

int main(void)
{
        string nome = get_string("Qual é o seu nome?");
        
    	printf("Olá, %s\n", nome); 
}