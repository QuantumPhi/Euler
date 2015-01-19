#include <stdio.h>
#include <stdlib.h>

long long factorial(long long value)
{
    unsigned long long product;
    unsigned long long i;
    for(i = 0; i < value; i++)
    {
        product *= i;
    }
    return product;
}

void main(int argc, char** argv)
{
    if(argc == 1)
    {
        printf("Usage:\neuler [count]\ncount - number of loops");
    }
    unsigned long long sum;
    unsigned long long i;
    for(i = 0; i < abs(strtoull(argv[1])); i++)
    {
        sum += factorial(i);
        printf("%llu", sum);
    }
}
