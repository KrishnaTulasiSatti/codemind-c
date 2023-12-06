#include<stdio.h>
int palindrome(int n) {
    int a = n;
    int rev = 0;
    while(a){
        int ld = a % 10;
        rev = rev * 10 + ld;
        a/=10;
    }
    if(n == rev) return 1;
    else return 0;
}
int main() {
    int n;
    scanf("%d",&n);
    int rightPalin = 0,leftPalin = 0;
    int a = n;
    while(a++) {
        int flag = palindrome(a);
        if(flag == 1) {
            rightPalin = a;
            break;
        }
    }
    int b = n;
    while(b--) {
       int flag = palindrome(b);
        if(flag == 1) {
            leftPalin = b;
            break;
        }
     }
    int d1 = n - leftPalin;
    int d2 = rightPalin - n;
    if(d1 == d2) printf("%d %d" ,leftPalin,rightPalin);
    else if(d1>d2) printf("%d",rightPalin);
    else printf("%d ",leftPalin);
    
    
}