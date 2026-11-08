#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    float delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        printf("NO");
    }
    else if (delta == 0)
    {
        printf("%.2lf", -b / (2 * a));
    }
    else
    {
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a);
        if (x1 > x2)
        {
            printf("%.2f %.2f", x1, x2);
        }
        else
        {
            printf("%.2f %.2f", x2, x1);
        }
    }
}