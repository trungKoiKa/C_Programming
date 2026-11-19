#include <stdio.h>
#include <string.h>

int main()
{
    char s[1024];
    fgets(s, sizeof(s), stdin);
    int len = strlen(s);
    while (len > 0 && (s[len - 1] == '\n' || s[len - 1] == '\r'))
    {
        s[--len] = '\0';
    }

    int letter = 0, digit = 0, other = 0;
    for (int i = 0; i < len; i++)
    {
        char c = s[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            letter++;
        else if (c >= '0' && c <= '9')
            digit++;
        else
            other++;
    }
    printf("%d %d %d\n", letter, digit, other);
    return 0;
}