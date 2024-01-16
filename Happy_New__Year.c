#include<stdio.h>
int main() {
    int h,m;
    scanf("%d %d",&h,&m);
    int res = ((23-h)*60)+(60-m);
    printf("%d",res);
}