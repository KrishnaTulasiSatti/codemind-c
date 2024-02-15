#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int i = 0 ; i < n-2; i++){
        if(arr[i]%2==1 && arr[i+2]%2==0)
                count++;
        else{
           if(arr[i]%2==0 && arr[i+2]%2==1)
           count++;
        }
    }
    if((arr[n-2]%2==1&& arr[0]%2==0) || (arr[n-2]%2==0 && arr[0]==1))
    count++;
     if((arr[n-1]%2==1&& arr[1]%2==0) || (arr[n-1]%2==0 && arr[1]==1))
    count++;
    printf("%d",count);
}