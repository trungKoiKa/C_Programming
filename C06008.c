#include <stdio.h>
#include <string.h>
#include <ctype.h>

char words[256][256];

int main()
{
    char s[512];
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
            w[k++] = s[i];
            i++;
        }
        w[k] = '\0';

        int found = 0;
        for (int j = 0; j < n; j++)
        {
            if (strcmp(words[j], w) == 0)
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            strcpy(words[n++], w);
        }
    }

    for (int j = 0; j < n; j++)
    {
        if (j > 0)
            printf(" ");
        printf("%s", words[j]);
    }
    printf("\n");
    return 0;
}