#include<stdio.h>
int main(){
    int n; scanf("%d", &n);
    int nam = n / 365;
    int r = n % 365;
    int tuan = r / 7;
    int ngay = r % 7;
    printf("%d %d %d\n", nam, tuan, ngay);
}
