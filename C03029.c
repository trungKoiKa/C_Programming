#include<stdio.h>
#define ll long long

void checker(ll n){
    int check = 0;
    if(n % 2 == 0) check = 1;
    while(n){
        if(n % 2 != 0){
            check = 0;
        }
        n/=10;
    } 
    if(check == 1) printf("YES\n");
    else printf("NO\n");
}

int main(){
    int t; scanf("%d", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        checker(n);
    }
}