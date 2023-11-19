#include<stdio.h>
int lcm(int a,int b)
{
     int max = (a > b)? a : b ;
    while(1)
    {
        if(max % a == 0 && max % b == 0)
        {
            return max;
            
        }
        ++max;
    }
    
}    
    
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int res= lcm(a,b);
    int gcd = (a * b)/res;
    printf("%d",gcd);
   
    
}