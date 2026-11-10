#include<stdio.h>
#include<math.h>

long long tich(int n){
    long long res = 1;
    if(n < 2){
        return n;
    }
    for(int i=2; i<=sqrt(n); i++){
        if(n % i == 0) res *= i;
        while(n % i == 0){
            n /= i;
        }
    }
    if(n > 1){
        res *= n;
    }
    return res;
}

int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        printf("%lld\n", tich(n));
    }
}