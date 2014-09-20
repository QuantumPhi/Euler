#include <math.h>
#include <stdio.h>

int isPalindrome(long value)
{
    int len = ((int)log10l(value) + 1) / 2;
    int sub = value % (long)powl(10, len);
    int rev = 0;
    int i;
    for(i = 1; i <= len; i++)
    {
        rev += sub % 10 * pow(10, len - i);
        sub /= 10;
    }
    return value / (long)powl(10, len) == rev;
}

void main()
{
    long value = 0;
    long i;
    long j;
    for(i = 100; i < 1000; i++)
        for(j = 100; j < 1000; j++)
            value = (value < i * j && isPalindrome(i * j) ? i * j : value);
    printf("%d", value);
}
