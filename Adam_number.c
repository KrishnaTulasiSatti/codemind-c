#include<stdio.h>
int reverse(int a)
{
    int ld=0,r =0;
    while(a)
    {
        ld = a % 10;
        r = r * 10 + ld;
        a/=10;
    }
    return r;
}
int main()
{
    int n;
    scanf("%d",&n);
    int rev1 = reverse(n);
    int revsq1 = n * n;
    int sq2 = rev1 * rev1;
    int revsq2 = reverse(sq2);
    
    if(revsq1 == revsq2) 
    printf("True");
    else printf("False");
}