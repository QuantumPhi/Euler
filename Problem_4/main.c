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
    return value / (long)powl(10, len) == sub; //100 -> 001 -> 1
}

void main()
{
    long value = 0;
    int i;
    for(i = 100; i < 1000; i++)
        value = (isPalindrome(pow(i, 2)) ? i : value);
    printf("%d", value);
}
