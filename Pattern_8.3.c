#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i = n;i>0;i--) {
        for(int j= n;j>0;j--) {
            if(i == j || (i+j) == (n+1)) 
               printf("%d",i);
             else printf(" ");
        }
        printf("
");
        
    }
}