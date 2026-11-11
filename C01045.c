#include<stdio.h>

int main(){
    long long n; scanf("%lld", &n);
    int cuoi = n % 10;
   while(n >= 10){
        n /=10;
    }
    printf("%lld %d", n, cuoi);
}