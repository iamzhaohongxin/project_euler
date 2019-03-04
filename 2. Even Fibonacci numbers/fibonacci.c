#include <stdio.h>

int main(void)
{
    printf("This program will print the value!\n");
    
    unsigned long sum = 0;
    unsigned long fib = 1;
    unsigned long x = 0;
    unsigned long i;
    
    for (i = 1;; i ++)
    {
        fib = fib + x;
        if ( fib > 4000000) break;
        if ( fib % 2 == 0)
        {
            sum = sum + fib;
        };
        x = x + fib;
    };
    printf("The value:%ld", sum);
    return 0;
}
