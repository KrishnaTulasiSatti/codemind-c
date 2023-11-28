#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int min = (a>b) ? b : a;
    while(min > 0)
    {
        if ( a % min == 0 && b % min == 0)
        {
            printf("%d",min);
            break;
        }
        
        min--;
    }
}