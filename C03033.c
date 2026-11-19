#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        printf("%lld = ", n);
        long long m = n;
        int first = 1;
        for (long long i = 2; i * i <= m; i++)
        {
            if (m % i == 0)
            {
                int cnt = 0;
                while (m % i == 0)
                {
                    m /= i;
                    cnt++;
                }
                if (!first)
                    printf(" * ");
                printf("%lld^%d", i, cnt);
                first = 0;
            }
        }
        if (m > 1)
        {
            if (!first)
                printf(" * ");
            printf("%lld^1", m);
        }
        printf("\n");
    }
    return 0;
}