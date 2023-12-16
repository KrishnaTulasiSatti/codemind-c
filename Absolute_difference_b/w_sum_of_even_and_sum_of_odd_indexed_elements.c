#include<stdio.h>
#include<math.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int sumeven = 0 ,sumodd = 0;
    for(int i = 0 ; i < n;i++) {
        scanf("%d",&arr[i]);
        if(i % 2 == 0) sumeven+=arr[i];
        else sumodd+=arr[i];
    }
    printf("%d",abs(sumodd-sumeven));
    
}