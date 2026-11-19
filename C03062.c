#include <stdio.h>

long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

long long lcm(long long a, long long b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n, m;
        scanf("%lld %lld", &n, &m);
        if (n > m)
        {
            long long tmp = n;
            n = m;
            m = tmp;
        }
        long long res = 1;
        for (long long i = n; i <= m; i++)
        {
            res = lcm(res, i);
        }
        printf("%lld\n", res);
    }
    return 0;
}