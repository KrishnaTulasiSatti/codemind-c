#include<stdio.h>
#include<math.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--) {
        int n;
        scanf("%d",&n);
        float x = sqrt(n);
        int y = x;
        if(x==y) printf("True
");
        else printf("False
");
    }
}