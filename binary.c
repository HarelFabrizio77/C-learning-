#include <stdio.h>
#include "cs50.h"

int main(void)
{
    printf("Welcome to the int to binary converter!\n Please insert your number\n");
    long long num = get_int("Number: ");
    int n = 0;
    for(int i = 61; i>=0; i--)
    {
        if (num == 0)
        {
            printf("0\n");
            break;
        }
        if(num < 0)
        {
            printf("Not eligible\n");
            break;
        }
        if((num & (1<<i)) > 0 && n == 0)
        {
            n = 1;
        }
        if(n == 1)
        {
            if((num & (1<<(i))) > 0)
        {
            
            printf("%i", n);

        }
        else
        {
            printf("0");
        }
        }
}
}
