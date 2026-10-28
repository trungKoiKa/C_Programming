#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool check(int n)
{
    if (n == 0 || n == 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return n;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if (check(n) == true)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}