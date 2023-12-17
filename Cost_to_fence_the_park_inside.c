#include<stdio.h>
int main() {
    int l,b,w,c;
    scanf("%d %d %d %d",&l,&b,&w,&c);
    int parkArea = l*b;
    int totalArea = (l-2*w)*(b-2*w);
    
    if(2*w < l && 2*w < b) {
        printf("%d",c*(parkArea - totalArea));
    }
    else printf("Impossible");
}