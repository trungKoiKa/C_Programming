#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        char s[256];
        fgets(s, sizeof(s), stdin);
        int len = strlen(s);
        int cnt = 0, inWord = 0;
        for (int i = 0; i < len; i++)
        {
            if (s[i] == ' ' || s[i] == '\n' || s[i] == '\r' || s[i] == '\t')
            {
                inWord = 0;
            }
            else if (!inWord)
            {
                inWord = 1;
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}