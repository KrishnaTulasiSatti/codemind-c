#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    int a1 = 0;
    int oddeven[n];
    for(int i = 0;i<n;i++) {
        scanf("%d",&a[i]);
        if(a[i] % 2 != 0) {
            oddeven[a1] = a[i];
            a1++;
        }
    }
    
    for(int i = 0;i<n;i++) {
        if(a[i] % 2 == 0) {
            oddeven[a1] = a[i];
            a1++;
        }
        printf("%d ",oddeven[i]);
    }
    
}