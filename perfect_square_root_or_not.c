#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    float fvar = sqrt(n);
    int ivar = fvar;
    if(ivar == fvar) printf("True");
    else printf("False");
}