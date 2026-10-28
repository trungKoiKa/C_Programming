#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (b == 0)
    {
        printf("0");
        return 0;
    }
    else
    {
        printf("%d\n%d\n%lld\n%d\n%d\n%.2f\n", a + b, a - b, 1ll*a * b, a / b, a % b, (double) a / b);
    }
}