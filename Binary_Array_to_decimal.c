#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int c = n-1;
    int i = 0;
    int decimal = 0;
    while(c >= 0){
        decimal += arr[i]*pow(2,c);
        c--;
        i++;
    }
    printf("%d",decimal);
}