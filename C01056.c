#include<stdio.h>
#include<stdbool.h>

bool check(long long n){
    int b = n % 10;
    n /= 10;
    while(n){
        int r = n % 10;
        if(r > b){
            return false;
        }
        b = r;
        n /= 10;
    }
    return true;
}

int main(){
    int t; scanf("%d", &t);
    while(t--){
        long long n; scanf("%lld", &n);
        if(check(n)) printf("YES\n");
        else printf("NO\n");
    }
}