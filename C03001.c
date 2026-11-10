#include<stdio.h>

void check(int n){
    int tong = 0;
    while(n){
        tong += n%10;
        n/=10;
    }
    if(tong % 10 == 0) printf("YES\n");
    else printf("NO\n");
}

int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        check(n);
    }
}