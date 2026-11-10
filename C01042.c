#include<stdio.h>

long long gt(int n){
    long long res = 1;
    for(int i=1; i<=n; i++){
        res *= i;
    }
    return res;
}

int main(){
    int n; scanf("%d", &n);
    long long res = 0;
    for(int i=1; i<=n; i++){
        res += gt(i);
    }
    printf("%lld", res);
}