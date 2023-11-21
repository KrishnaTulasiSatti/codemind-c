#include<stdio.h>

int uglyfun(int n)
{
    int newnum = 0;
    while(n)
    {
        int ld = n % 10;
        newnum+=ld;
        n/=10;
    }
    return newnum;
}
int main()
{
    int n;
    scanf("%d",&n);
    int sum = 0;
    while(n>=10)
    {
        int ugly = uglyfun(n);
        if(ugly < 10)
        {
            printf("%d",ugly);
            break;
        }
        n = ugly;
   }
}