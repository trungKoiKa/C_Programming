#include<stdio.h>

int main(){
    int a, b; scanf("%d %d", &a, &b);
    int res = 0;
    if(a < b){
        for (int i = a; i <= b; i++)
        {
            res += i;
        }
    }
    else{
        for (int i = b; i <= a; i++)
        {
            res += i;
        }
    }
    printf("%d", res);
}