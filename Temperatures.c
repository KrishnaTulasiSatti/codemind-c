#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n;i++) {
        scanf("%d",&arr[i]);
    }
    int ans[n] = {0};
    ans[n-1] = 0;
    
    for(int i = 0 ;i < n-1 ;i++) {
        int c = 0;
        for(int j = i+1; j < n;j++) {
            c++;
            if(arr[j] > arr[i]) {
                ans[i] = c;
                break;
            }
            else {
                ans[i] = 0;
            }
        }
    }
     for(int i = 0; i < n ;i++) {
         printf("%d ",ans[i]);
     }
}