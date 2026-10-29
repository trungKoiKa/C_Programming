#include<stdio.h>
#define ll long long

int main(){
    double a, b;
    scanf("%lf %lf", &a, &b);
    if(a == 0 && b == 0){
        printf("Vo so nghiem\n");
    }
    else if(a == 0 && b != 0){
        printf("Vo nghiem\n");
    }
    else{
        printf("%.2lf",0.00 - b/a);
    }
}