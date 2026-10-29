#include<stdio.h>

int main(){
    int t; scanf("%d", &t);
    while(t--){
        long long n; scanf("%lld", &n);
        int bigger = -1;
        int smaller = 1e18;
        while(n){
            int r = n % 10;
            if (r > bigger)
            {
                bigger = r;
            }
            if (smaller > r)
            {
                smaller = r;
            }
            n/=10;
        }
        printf("%d %d\n", bigger, smaller);
    }
}