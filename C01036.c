#include<stdio.h>

int main(){
    int n; scanf("%d", &n);
    long long res = 1;
    while(n){
        res *= n%10;
        n /= 10;
    }
    printf("%lld", res);
}