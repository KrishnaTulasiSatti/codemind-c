#include<stdio.h>
int main() {
    
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    if(n % 2 == 0) {
         for(int i = 0;i<n/2;i++){
        printf("%d %d ",a[i],a[n-1-i]);
        }
    }
        else{
             for(int i = 0;i<=n/2;i++){
            if(i == n/2)  printf("%d 0 ",a[i]);
            else  printf("%d %d ",a[i],a[n-1-i]);
        }
    }
}