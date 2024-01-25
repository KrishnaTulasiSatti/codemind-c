#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int visited,count;
    int sum = 0;
    int count2 = 0;
    for(int i = 0 ; i < n ; i++){
        visited = 0 , count = 0;
        for(int j = 0 ; j < n ; j++){
            if(j < i && arr[i] == arr[j]){
                visited = 1;
                break;
            }
            if(arr[i] == arr[j]) count++;
        }
        if(visited == 0 && arr[i] == count){
            sum+=arr[i];
            count2++;
        }
    }
    if(sum == 0) printf("-1");
    else
    printf("%.2f",sum*1.0/count2);
}