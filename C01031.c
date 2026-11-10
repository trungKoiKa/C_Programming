#include<stdio.h>
#include<math.h>

void ptich(int n){
    if(n < 2){
        printf("%d\n", n);
    }
    for(int i=2; i<=sqrt(n); i++){
        while(n % i == 0){
            printf("%d", i);
            n /= i;
            if(n > 1){
                printf("x");
            }
        }
    }
    if (n > 1)
    {
        printf("%d", n);
    }
}

int main(){
    int n; scanf("%d", &n);
    ptich(n);
}