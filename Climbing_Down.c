#include<stdio.h>
int main() {
    int a,b,x,y;
    scanf("%d %d %d %d",&a,&b,&x,&y);
    float tw = a*1.0/x;
    float tj = b*1.0/y;
    if(tw == tj) printf("Both");
    else if(tw>tj) printf("Jesse");
    else printf("Walter");
}