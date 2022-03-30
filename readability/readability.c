#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string s = get_string("Input:  ");
    int t = strlen(s);
    float l = 0;
    float p = 0;
    float f = 0;
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
    float ml = l / p * 100;
    float mf = f / p * 100;
    int indice = round(0.0588 * ml - 0.296 * mf - 15.8);
    
    if (indice >= 16)
    {
        printf("Grade: 16+");
        printf("\n");
    } else if (indice <= 1){
        printf("Grade: 1 \n");
        printf("\n");
    } else {
        printf("Grade: %i\n", indice);   
    }
}