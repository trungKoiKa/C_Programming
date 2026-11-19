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
        long long n;
        scanf("%lld", &n);
        long long m = n, r = 0;
        while (m > 0)
        {
            r = r * 10 + m % 10;
            m /= 10;
        }
        puts(gcd(n, r) == 1 ? "YES" : "NO");
    }
    return 0;
}