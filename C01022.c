#include<stdio.h>

int my_sum(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        printf("%d\n", my_sum(n));
    }
}