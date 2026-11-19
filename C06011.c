#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[600];
        scanf("%s", s);
        int len = strlen(s);
        int ok = 1, sum = 0;
        if (s[0] != '8' || s[len - 1] != '8')
            ok = 0;
        for (int i = 0; i < len; i++)
        {
            if (s[i] != s[len - 1 - i])
                ok = 0;
            sum += s[i] - '0';
        }
        if (sum % 10 != 0)
            ok = 0;
        puts(ok ? "YES" : "NO");
    }
    return 0;
}