#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    int frq[10000] = {0};
    for(int i = 0 ; i < n ; i++){
        frq[arr[i]]++;
    }
    for(int i = 0 ; i < 10000 ; i++){
         count+= frq[i]/2;
    }
    printf("%d",count);
}