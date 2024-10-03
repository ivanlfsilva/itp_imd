#include <stdio.h>

int main()
{
    int n,resto;
    scanf("%d", &n);

    if (n > 100)
    {
        int resto = n / 100;
        
        if (resto == 1)
        {
            printf("C");
        }
        else if (resto == 2)
        {
            printf("CC");
        }
        else if (resto == 3)
        {
            printf("CCC");
        }
        else if (resto == 4)
        {
            printf("CD");
        }
        else if (resto == 5)
        {
            printf("D");
        }
        else if (resto == 6)
        {
            printf("DC");
        }
        else if (resto == 7)
        {
            printf("DCC");
        }
        else if (resto == 8)
        {
            printf("DCCC");
        }
        else if (resto == 9)
        {
            printf("CM");
        }
    }
    
    if (n < 100 || n > 100)
    {
    
        resto = n / 10;
        resto = resto % 10;
        


        if (resto == 1)
        {
            printf("X");
        }
        else if (resto == 2)
        {
            printf("XX");
        }
        else if (resto == 3)
        {
            printf("XXX");
        }
        else if (resto == 4)
        {
            printf("XL");
        }
        else if (resto == 5)
        {
            printf("L");
        }
        else if (resto == 6)
        {
            printf("LX");
        }
        else if (resto == 7)
        {
            printf("LXX");
        }
        else if (resto == 8)
        {
            printf("LXXX");
        }
        else if (resto == 9)
        {
            printf("XC");
        }
    }else if(n == 100){
        printf("C");
    }
    if (n < 100 || n > 100)
    {
        int c = n % 10;
        if (c == 1)
        {
            printf("I");
        }
        else if (c == 2)
        {
            printf("II");
        }
        else if (c == 3)
        {
            printf("III");
        }
        else if (c == 4)
        {
            printf("IV");
        }
        else if (c == 5)
        {
            printf("V");
        }
        else if (c == 6)
        {
            printf("VI");
        }
        else if (c == 7)
        {
            printf("VII");
        }
        else if (c == 8)
        {
            printf("VIII");
        }
        else if (c == 9)
        {
            printf("IX");
        }
    }else if (n == 10)
    {
        printf("X");
    }
    
    printf("\n");
}