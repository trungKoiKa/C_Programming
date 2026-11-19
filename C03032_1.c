#include <stdio.h>

int ds[4] = {2, 3, 5, 7};
int arr[6000];
int n = 0;

int isPrime(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    // Sinh tất cả số có chữ số thuộc {2,3,5,7}, theo thứ tự tăng dần, rồi lọc số nguyên tố
    int total = 1;
    for (int len = 1; len <= 6; len++)
    {
        total *= 4;
        for (int idx = 0; idx < total; idx++)
        {
            int x = 0, tmp = idx;
            int digits[6];
            for (int k = len - 1; k >= 0; k--)
            {
                digits[k] = tmp % 4;
                tmp /= 4;
            }
            for (int k = 0; k < len; k++)
                x = x * 10 + ds[digits[k]];
            if (isPrime(x))
                arr[n++] = x;
        }
    }

    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, cnt = 0;
        scanf("%d %d", &a, &b);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= a && arr[i] <= b)
                cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}