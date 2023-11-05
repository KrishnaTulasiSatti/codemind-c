#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n,x,c=0;
    scanf("%d %d",&n,&x);
    int a=n;
    int a1=pow(10,x);
    int ld = n % a1; 
    while(a!=0)
    { 
        c++;
        a/=10;
    }
    int a2 = pow(10,c-x);
    int fd = n /a2;
    int diff = abs(fd-ld);
    printf("%d",diff);
}