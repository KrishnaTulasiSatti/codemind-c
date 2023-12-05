#include<stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i =0;i<n;i++) {
       scanf("%d",&arr[i]);
   }
   int c  =0;
   if(arr[0] % 2 != 0) {
       for(int i = 0;i<n;i++){
           if((arr[i] % 2 != 0 && arr[i+2] %2 !=0) && arr[i+1] % 2 == 0) {
               c++;
           }
       }
   }
   else{
        for(int i = 0;i<n-1;i++){
           if((arr[i+1] % 2 != 0 && arr[i+3] %2 !=0) && arr[i+2] % 2 == 0) {
              
               c++;
             
           }
       }
   }
   printf("%d ",c);
}