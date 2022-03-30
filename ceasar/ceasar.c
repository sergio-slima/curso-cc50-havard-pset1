#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (islower(argv[1][i]))
            {
                printf("Used: ./ceasar key\n");
                return 0;
            }
        }
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            printf("%c\n", argv[1][i]);
        }
    }   
    
    if (argc != 2)
    {
        printf("Used: ./ceasar key\n");
        return 1;
    }
    printf("oi, %s\n", argv[1]);
    return 0;
}