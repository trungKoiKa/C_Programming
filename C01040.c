#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool perfect(int n){
    int res = 1;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            res += i;
            if(i != n/i) res += n/i;
        }
    }
    return res == n;
}

int main(){
    int n; scanf("%d", &n);
    if(perfect(n)){
        printf("1");
    }
    else{
        printf("0");
    }
}