#include <stdio.h>

long long factorTree(long long number)
{
    long long i, a, b;
    for(i = 2; i <= number / 2; i++)
    {
        if(number % i == 0)
        {
            a = factorTree(i);
            b = factorTree(number / i);
            return a < b ? b : a;
        }
    }

    return number;
}

void main()
{
    long long number = /* Insert number here */;
    printf("%lld", factorTree(number));
}
