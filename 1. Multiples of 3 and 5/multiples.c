#include <stdio.h>

int main(void)
{
    printf("This program will print the sum of all the multiples of 3 or 5 below 100\n");
    
    unsigned int sum = 0;
    unsigned int i = 0;
    
    for (i = 0; i < 100; i ++)
    {
        if ((i % 3)||(i % 5))
        {
            sum = sum + i;
        };
    };
    
    printf("the sum:%d", sum);
    return 0;
}
