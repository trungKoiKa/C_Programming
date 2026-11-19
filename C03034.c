#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        if (n % 2 != 0)
        {
            printf("0\n");
            continue;
        }
        long long m = n;
        int cnt = 0;
        while (m % 2 == 0)
        {
            m /= 2;
            cnt++;
        }
        long long total = cnt; // số mũ của 2 là cnt -> chọn mũ 1..cnt
        for (long long i = 3; i * i <= m; i += 2)
        {
            if (m % i == 0)
            {
                int e = 0;
                while (m % i == 0)
                {
                    m /= i;
                    e++;
                }
                total *= (e + 1);
            }
        }
        if (m > 1)
            total *= 2;
        printf("%lld\n", total);
    }
    return 0;
}