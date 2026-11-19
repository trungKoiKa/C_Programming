#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s1[512], s2[512];
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    int len2 = strlen(s2);
    while (len2 > 0 && (s2[len2 - 1] == '\n' || s2[len2 - 1] == '\r' || s2[len2 - 1] == ' '))
    {
        s2[--len2] = '\0';
    }

    int len = strlen(s1);
    int first = 1;
    int i = 0;
    while (i < len)
    {
        while (i < len && isspace((unsigned char)s1[i]))
            i++;
        if (i >= len)
            break;

        char w[256];
        int k = 0;
        while (i < len && !isspace((unsigned char)s1[i]))
        {
            w[k++] = s1[i];
            i++;
        }
        w[k] = '\0';

        if (strcmp(w, s2) != 0)
        {
            if (!first)
                printf(" ");
            printf("%s", w);
            first = 0;
        }
    }
    printf("\n");
    return 0;
}