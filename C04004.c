
#include <stdio.h>

long long fibo(int n)
{
    long long a = 1, b = 1, c;

    if (n == 1 || n == 2)
    {
        return 1;
    }

    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        printf("%lld\n", fibo(n));
    }

    return 0;
}
