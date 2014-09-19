#include <stdio.h>

void main()
{
    int sum = 2;
    int a = 2;
    int b = 3;
    while(a < 4000000 && b < 4000000)
    {
        b += a;
        a = b - a;
        if(b % 2 == 0)
            sum += b;
    }

    printf("%d", sum);
}
