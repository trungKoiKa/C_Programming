#include<stdio.h>
#define ll long long

int main(){
    int t; scanf("%d", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        double res = (double)1/n;
        printf("%.15f\n", res);
    }
}