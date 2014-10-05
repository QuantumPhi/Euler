#include <stdio.h>

void main()
{
    int a = 1;
    int b = 1;
    int c = 1;
    for(a; a < 1000; a++)
        for(b = 1; b < a; b++)
            for(c = 1; c < b; c++)
                if(a*a==b*b+c*c && a+b+c == 1000)
                    printf("%d", a*b*c);
}
