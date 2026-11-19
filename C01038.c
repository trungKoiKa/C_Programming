#include <stdio.h>
#include <string.h>

int main()
{
    char s[16];
    scanf("%s", s);
    int len = strlen(s);
    char t = s[0];
    s[0] = s[len - 1];
    s[len - 1] = t;

    int i = 0;
    while (s[i] == '0' && s[i + 1] != '\0')
        i++;
    printf("%s\n", s + i);
    return 0;
}