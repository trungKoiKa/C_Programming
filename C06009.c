#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        char s[64];
        fgets(s, sizeof(s), stdin);
        int len = strlen(s);
        while (len > 0 && (s[len - 1] == '\n' || s[len - 1] == '\r' || s[len - 1] == ' '))
        {
            s[--len] = '\0';
        }

        // 5 chữ số cuối: định dạng "xxx.xx" nằm ở 6 ký tự cuối
        char *p = s + len - 6;
        int d[5];
        d[0] = p[0] - '0';
        d[1] = p[1] - '0';
        d[2] = p[2] - '0';
        d[3] = p[4] - '0';
        d[4] = p[5] - '0';

        int ok = 0;

        // Tăng chặt
        int inc = 1;
        for (int i = 0; i < 4; i++)
        {
            if (d[i] >= d[i + 1])
                inc = 0;
        }
        if (inc)
            ok = 1;

        // 5 chữ số bằng nhau
        int same = 1;
        for (int i = 1; i < 5; i++)
        {
            if (d[i] != d[0])
                same = 0;
        }
        if (same)
            ok = 1;

        // 3 đầu bằng nhau, 2 cuối bằng nhau
        if (d[0] == d[1] && d[1] == d[2] && d[3] == d[4])
            ok = 1;

        // Toàn 6 hoặc 8
        int loc = 1;
        for (int i = 0; i < 5; i++)
        {
            if (d[i] != 6 && d[i] != 8)
                loc = 0;
        }
        if (loc)
            ok = 1;

        puts(ok ? "YES" : "NO");
    }
    return 0;
}