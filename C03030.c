#include<stdio.h>
#include<stdbool.h>

bool ktra(int n){
    int truoc = n % 10;
    n /= 10;

    while(n){
        int sau = n % 10;

        if(sau > truoc){
            return 0;
        }

        truoc = sau;
        n/=10;
    }
    return 1;
}

int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);

        int dau = 1;
        for(int i=1; i<n; i++){
            dau *= 10;
        }

        int cuoi = dau * 10 -1;
        for(int i=dau; i<=cuoi; i++){
            if(ktra(i)){
                printf("%d ", i);
            }
        }
        printf("\n");
    }
}