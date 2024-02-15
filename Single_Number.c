#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    /* XOR of a number with itself is 0. 
       XOR of a number with 0 is number itself.
       Example : 1 2 1 2 4
       xOr : 1^2^1^2^4
       ---->1^1^2^2^4
       ---->0^0^4
       ---->  4 This is the element that occurs one time
    */
    int element = arr[0];
    for(int i = 1 ; i < n ; i++){
        element = element^arr[i];
    }
    printf("%d",element);
       
}