#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int sum = 0 , pro = 1;
    while(n) {
        int ld = n % 10;
        sum+=ld;
        pro*=ld;
        n/=10;
    }
    printf("%d",pro-sum);
}