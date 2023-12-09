#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n],sum = 0;
    float res = 0;
    for(int i = 0;i < n;i++) {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    
   res =float (sum)/n;
   printf("%.2f",res);
}