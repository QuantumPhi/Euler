#include <math.h>
#include <stdio.h>

long sieve(long n, long o)
{
    long i = 0;
    long j = 0;
    long k = 0;
    int is_prime[n + 1];
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

    for (i = 2; i <= n; i++)
    {
        if (is_prime[i])
            k++;
        if(k == o)
            return i;
    }

    return sieve(n * 2, o);
}

void main()
{
    printf("%d", sieve(1, 10001));
}
