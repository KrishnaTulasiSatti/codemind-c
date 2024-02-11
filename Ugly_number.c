#include<stdio.h>
int isUgly(int n){
   if(n == 0) return 0;
   if(n == 1) return 1;
   while(n % 2 == 0) n/=2;
   if(n == 1) return 1;
   while(n % 3 == 0) n/=3;
   if(n == 1) return 1;
   while(n % 5 == 0) n/=5;
   if(n == 1) return 1;
   else return 0;
    
}
int main(){
    int n;
    scanf("%d",&n);
    if(isUgly(n)) printf("Ugly Number");
    else printf("Not Ugly Number");
}