#include <stdio.h>

#define MAX 2000000

int spf[MAX + 1];

int main()
{
    for (int i = 2; i <= MAX; i++)
    {
        if (spf[i] == 0)
        {
            for (int j = i; j <= MAX; j += i)
            {
                if (spf[j] == 0)
                    spf[j] = i;
            }
        }
    }

    int n;
    scanf("%d", &n);
    long long sum = 0;
    while (n--)
    {
        int x;
        scanf("%d", &x);
        while (x > 1)
        {
            sum += spf[x];
            x /= spf[x];
        }
    }
    printf("%lld\n", sum);
    return 0;
}