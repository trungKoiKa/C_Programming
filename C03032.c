#include<stdio.h>
#include<math.h>

int demNto(int n){
    int dem = 0;
    if(n<2) dem = 1;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            dem++;
        }
    }
    return dem;
}



int main(){
    int t; scanf("%d", &t);
    while(t--){
        int a, b;
        scanf("%d %d", &a, &b);
        for(int i=a; i<=b; i++){
            demNto(i);
        }
    }
}