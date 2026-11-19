#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[32];
        scanf("%s", s);
        int len = strlen(s);
        int ok = 1, sum = 0;
        for (int i = 0; i < len; i++)
        {
            int d = s[i] - '0';
            if (d % 2 == 0)
                ok = 0;
            if (s[i] != s[len - 1 - i])
                ok = 0;
            sum += d;
        }
        if (sum % 2 == 0)
            ok = 0;
        puts(ok ? "YES" : "NO");
    }
    return 0;
}