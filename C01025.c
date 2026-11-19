#include <stdio.h>

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    scanf("%d %d %d %d", &x3, &y3, &x4, &y4);

    int minX = x1 < x3 ? x1 : x3;
    int minY = y1 < y3 ? y1 : y3;
    int maxX = x2 > x4 ? x2 : x4;
    int maxY = y2 > y4 ? y2 : y4;

    int w = maxX - minX;
    int h = maxY - minY;
    int side = w > h ? w : h;

    printf("%d\n", side * side);
    return 0;
}