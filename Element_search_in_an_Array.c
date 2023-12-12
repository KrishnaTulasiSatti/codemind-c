#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    int flag = 0;
    for(int i = 0;i<n;i++) {
        if(a[i] == x) 
        {
          flag = 1;
            
        }
    }
    if(flag == 1) printf("True");
    else printf("False");
    
}