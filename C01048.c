#include<stdio.h>


int main(){
    int n; scanf("%d", &n);
    int l = 0, c = 0;
    if(n == 0) printf("0 1");
    else{
        while (n)
        {
            int r = (n % 10);
            if (r % 2 == 0)
            {
                c++;
            }
            else
                l++;
            n /= 10;
        }
        if (l == 0)
        {
            printf("0 %d", c);
        }
        else if (c == 0)
        {
            printf("%d 0", l);
        }
        else
        {
            printf("%d %d", l, c);
        }
    }
    
}