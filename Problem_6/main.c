#include <stdio.h>

long long summation(long long to)
{
    return to * (to + 1) / 2;
}

long long summation_pow(long long value, long double power)
{
    long long sum = 0;
    long long i;
    for(i = 1; i <= value; i++)
        sum += (long long)pow(i, power);
    return sum;
}

void main()
{
    printf("%lld", (long long)pow(summation(100), 2) - summation_pow(100, 2));
}
