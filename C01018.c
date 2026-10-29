#include<stdio.h>
#include<math.h>

int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        int res = ceil(sqrt(n));
        if(res * res == n){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}