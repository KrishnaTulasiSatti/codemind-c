#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int res = (n*(n+1)/2)-n;
    printf("%d",res);
}