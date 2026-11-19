#include <stdio.h>

long long gcd(long long a, long long b)
{
    while (b)
    {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long a, b, c, d;
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
        puts(gcd(a, b) == gcd(c, d) ? "YES" : "NO");
    }
    return 0;
}