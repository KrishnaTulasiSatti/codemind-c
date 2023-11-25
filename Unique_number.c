#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int flag = 1;
    int c = 0;
    int a = n;
    while(a) {
        c++;
        a/=10;
    }
    int numArr[c];
    c = 0;
    while(n) {
        numArr[c]=n%10;
        n/=10;
        c++;
    }
    for(int i=0;i<c;i++) {
        for(int j=i+1;j<c;j++) {
            if(numArr[i]==numArr[j]) {
                flag = 0;
                break;
            }
        }
    }
    if(flag != 0) printf("Unique Number");
    else printf("Not Unique Number");
}