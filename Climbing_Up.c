#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    if(x % y == 0){
        printf("%d",x/y);
    }
    else{
        int r = x % y;
        printf("%d",x/y+r);
    }
}