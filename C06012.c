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
        int ok = 1;
        for (int i = 0; i < len; i++)
        {
            char c = s[i];
            if (c != '2' && c != '3' && c != '5' && c != '7')
                ok = 0;
            if (s[i] != s[len - 1 - i])
                ok = 0;
        }
        puts(ok ? "YES" : "NO");
    }
    return 0;
}