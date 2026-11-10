#include<stdio.h>
#include<math.h>

void scp(int a, int b){
    int dem = sqrt(b) - ceil(sqrt(a)) + 1;
    if(dem < 0){
        dem = 0;
    }
    printf("%d\n", dem);
    for(int i=ceil(sqrt(a)); i<=sqrt(b); i++){
        printf("%d\n", i * i);
    }
}

int main(){
    int a, b; scanf("%d %d", &a, &b);
    scp(a, b);
}