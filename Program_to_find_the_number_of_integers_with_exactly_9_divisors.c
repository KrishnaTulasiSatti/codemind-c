#include<stdio.h>
int divisor(int a)
{   
    int c=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0) c++;
    } 
    return c;
}
int main()
{
    int n;
    scanf("%d",&n);
    int count=0;
    for(int i=1;i<=n;i++)
    {
       int c = divisor(i);
       if(c==9)
       {
           printf("%d ",i);
           count++;
       }
    }
    printf("
Total=%d",count);
}