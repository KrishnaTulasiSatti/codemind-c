#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0,a=n;
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n) printf("True");
    else printf("False");
}