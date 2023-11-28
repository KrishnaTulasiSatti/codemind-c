#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int t = n;
    while(n) {
        n++;
        t = n;
        int r = 0;
        while(t) {
            int ld = t % 10;
            r = r*10+ld;
            t/=10;
        }
        if(r == n) {
            int c = 0;
            for(int i = 1;i<=n;i++) {
                if(n % i == 0) c++;
            }
            if(c == 2){
                printf("%d",n);
                break;
            }
        }
    }
}