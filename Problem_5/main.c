#include <stdio.h>

long long gcd(long long a, long long b)
{
    return (b == 0 ? a : gcd(b, a % b));
}

long long lcm(long long a, long long b)
{
    return a * b / gcd(a, b);
}

void main()
{
    long long value = lcm(20, lcm(19, lcm(18, lcm(17, lcm(16, lcm(15, lcm(14, lcm(13, lcm(12, lcm(11, lcm(10, lcm(9, lcm(8, lcm(7, lcm(6, lcm(5, lcm(4, lcm(3, lcm(2, 1)))))))))))))))))));
    printf("%lld", value);
}
