#include<stdio.h>
#define ll long long

int main(){
    ll res = 0;
    ll x;
    while(scanf("%lld", &x) > 0){
        if(x > res){
            res = x;
        }
    }
    printf("%lld", res);
}