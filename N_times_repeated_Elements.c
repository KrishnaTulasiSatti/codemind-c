#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++) {
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    int flag = 0;
    for(int i = 0 ; i < n ; i++) {
        int count = 0 ;
        int visited = 0;
       for(int j = 0 ; j < n ; j++) {
            if(j < i && arr[i] == arr[j]) 
            {
                visited = 1;
                break;
            }
            
            if(arr[i] == arr[j]) count++;
        }
        if(visited == 0 && count == k) 
        {
            printf("%d ",arr[i]);
            flag = 1;
        }
    }
    if(flag == 0) printf("-1");
}