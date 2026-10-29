#include<stdio.h>
#define ll long long
int main(){
    ll max = -1;
    ll min = 1e18;
    ll x;
    while(scanf("%lld", &x) > 0){
        if(x > max){
            max = x;
        }
        else if(x < min){
            min = x;
        }
    }
    printf("%lld %lld\n", max, min);
}