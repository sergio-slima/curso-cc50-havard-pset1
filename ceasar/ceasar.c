#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // Verificando se o número de argumentos está correto
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Verificando se argv é formado apenas número
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Pedindo o texto que será cifrado
    string s = get_string("plaintext: ");
    printf("ciphertext: ");

    // Convertendo argv de string para inteiro
    int key = atoi(argv[1]);

    // Criando um loop para alterar a letra uma a uma
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // Verificando se o char é alfabético
        if (isalpha(s[i]))
        {
            int cypher = s[i] + key;
            // Calculando o novo caractere se for minúsculo
            if (islower(s[i]))
            {
                while (cypher > 'z')
                {
                    cypher -= 26;
                }
            }
            // Calculando o novo caractere se maiúsculo
            else
            {
                while (cypher > 'Z')
                {
                    cypher -= 26;
                }
            }

            // char new_char = cypher;
            printf("%c", cypher);
        }

        // Mantendo o caractere não alfabético
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}