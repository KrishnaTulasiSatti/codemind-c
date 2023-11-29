
#include <stdio.h>
#include<math.h>
#include <stdbool.h>
int prime(int a) {
    int c = 0;
     for(int i = 1;i<=a ;i++) {
         if(a % i == 0) c++;
     }
     if(c == 2) return 1;
     else return 0;
}
int main() {
   
    int n;
    scanf("%d",&n);
    int a = n,res1 = 0,res2 = 0;
    while(true)
    {
     if(prime(a)) 
     {
         res1 = n-a;
         break;
     }
     else a--;
    }
    a = n;
     while(true){
         if(prime(a)) 
         {
             res2 = a-n;
             break;
         }
         else a++;
    
    }

    if(res1>=res2) printf("%d",res2);
    else printf("%d",res1);

    return 0;
}