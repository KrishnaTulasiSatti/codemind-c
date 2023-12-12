#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n],sum = 0;
    int res = 0;
    for(int i = 0;i < n;i++) {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    
   res = sum/n;
   int flag = 0;
    for(int i = 0;i < n;i++) {
       if(a[i] == res) flag = 1;
    }
    if(flag == 1) printf("True");
    else printf("False");
}