#include<stdio.h>
 void printTriangle(int n) {
        if(n<3) {
            printf("The pattern is not possible");
            return;
        }
        int stars=0;
         for(int i=1;i<=2*n-1;i++) {
       if(i<=n)
          stars=i; 
       else
          stars=2*n-i;
       
       for(int j=1;j<=stars;j++) {
           printf("*");
         }
       printf("
");
    }
    }
int main(){
    int n;
    scanf("%d",&n);
    printTriangle(n);
}