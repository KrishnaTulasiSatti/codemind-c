#include<stdio.h>
#include<math.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n<0) n= -n;
    int square = n*n;
    int flag = 0;
    while(n) {
       if(n%10 == square % 10) flag = 1;
       else flag = 0;
        n/=10;
        square/=10;
    }
    if(flag == 0) printf("Not an Automorphic Number");
    else printf("Automorphic Number");
}