#include <stdio.h>
#include <string.h>

int main()
{
    char s[16];
    scanf("%s", s);
    int len = strlen(s);
    int cnt[10] = {0};
    int seen[10] = {0};
    int order[10], k = 0;

    for (int i = 0; i < len; i++)
    {
        int d = s[i] - '0';
        if (d == 2 || d == 3 || d == 5 || d == 7)
        {
            cnt[d]++;
            if (!seen[d])
            {
                seen[d] = 1;
                order[k++] = d;
            }
        }
    }

    for (int i = 0; i < k; i++)
    {
        printf("%d %d\n", order[i], cnt[order[i]]);
    }
    return 0;
}