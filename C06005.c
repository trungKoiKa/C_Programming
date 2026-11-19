#include <stdio.h>
#include <string.h>
#include <ctype.h>

char words[1024][256];
int cnt[1024];

int main()
{
    char s[2048];
    fgets(s, sizeof(s), stdin);
    int len = strlen(s);

    int n = 0;
    int i = 0;
    while (i < len)
    {
        while (i < len && isspace((unsigned char)s[i]))
            i++;
        if (i >= len)
            break;

        char w[256];
        int k = 0;
        while (i < len && !isspace((unsigned char)s[i]))
        {
            w[k++] = tolower((unsigned char)s[i]);
            i++;
        }
        w[k] = '\0';

        int found = -1;
        for (int j = 0; j < n; j++)
        {
            if (strcmp(words[j], w) == 0)
            {
                found = j;
                break;
            }
        }
        if (found >= 0)
        {
            cnt[found]++;
        }
        else
        {
            strcpy(words[n], w);
            cnt[n] = 1;
            n++;
        }
    }

    for (int j = 0; j < n; j++)
    {
        printf("%s %d\n", words[j], cnt[j]);
    }
    return 0;
}