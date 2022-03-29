#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string s = get_string("Input:  ");
    int t = strlen(s);
    int l = 0;
    int p = 0;
    int f = 0;
    float ml = 0;
    float mf = 0;
    for (int i = 0; i < t; i++)
    {
        if (s[i]>=97 && s[i]<=122)
        {
            l++;
        } 
        else if (s[i]>=65 && s[i]<=90)
        {
            l++;
        }
        if (s[i] == 32)
        {
            p++;    
        }
        if (s[i]==33 || s[i]==63 || s[i]==46 || s[i]==59)
        {
            f++;
        }
    }
    p++;
    ml = round((l / p) * 100);
    mf = round((f / p) * 100);
    int indice = (0.0588 * ml) - (0.296 * mf) - 15.8;
    printf("\n");
    printf("Letras: %i\n", l);
    printf("Palavras: %i\n", p);
    printf("Frases: %i\n", f);
    printf("Grade: %i\n", indice);
}