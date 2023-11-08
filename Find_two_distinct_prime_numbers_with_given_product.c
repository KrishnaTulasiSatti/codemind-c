
#include <stdio.h>
int prime(int a)
{
    int c=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0) c++;
    }
    if(c==2) return 1;
    else return 0;
}
int main() {
     int n;
     scanf("%d",&n); 
     int c = prime(n);
     if(c==1) printf("-1");
     if(c!=1)
     {
        int p1=0,p2=0;  
        for(int i=n-1;i>=2;i--) 
       {
            if(n%i==0)
           {
             p2 = i;
             break;
           }
        }
        int a = prime(p2);
        p1 = n/p2;
        int b = prime(p1);
        if(a==1 && b==1) printf("%d %d",p1,p2);
        else printf("-1");
     }
}