#include<stdio.h>
#include<math.h>

long long gt(int n){
    long long res = 1;
    for(int i=1; i<=n; i++){
        res *=i;
    }
    return res;
}

void strong(int n){
    int sum = 0;
    int m = n;
    while(n){
        int r = n % 10;
        sum += gt(r);
        n /= 10;
    }
    if(sum == m) printf("1");
    else printf("0");
}

int main(){
    int n; scanf("%d", &n);
    strong(n);
}