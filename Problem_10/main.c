#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int* sieve(long n)
{
    long i = 0;
    long j = 0;
    long k = 0;
    int* is_prime = (int*)malloc(sizeof(int) * (n+1));
    is_prime[2] = 1;
    is_prime[3] = 1;
    long lim = ceil(sqrt(n));
    for(i = 5; i < n; i++)
        is_prime[i] = 0;
    for (i = 1; i <= lim; i++)
    {
        for (j = 1; j <= lim; j++)
        {
            long num = (4 * i * i + j * j);
            if (num <= n && (num % 12 == 1 || num % 12 == 5))
                is_prime[num] = 1;
            num = (3 * i * i + j * j);
            if (num <= n && (num % 12 == 7))
                is_prime[num] = 1;

            if (i > j)
            {
                num = (3 * i * i - j * j);
                if (num <= n && (num % 12 == 11))
                    is_prime[num] = 1;
            }
        }
    }
    for (i = 5; i <= lim; i++)
        if (is_prime[i])
            for (j = i * i; j <= n; j += i)
                is_prime[j] = 0;

    return is_prime;
}

void main()
{
    int* is_prime = sieve(2000000);
    long i;
    long long sum = 0;
    for(i = 0; i < 2000001; i++)
        sum = is_prime[i] ? sum + i : sum;
    printf("%lld", sum);
}
