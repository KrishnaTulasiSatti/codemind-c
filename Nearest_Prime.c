// Online C compiler to run C program online
#include <stdio.h>
int prime(int n) {
    int c = 0;
    for(int i = 1;i<=n;i++ ) {
        if(n % i == 0) c++;
    }
    if(c == 2)  return 1;
    else return 0;
}
int main() {
    // Write C code here
    //printf("Hello world");
    int t;
    scanf("%d",&t);
    while(t--) {
    int n;
    scanf("%d",&n);
    int a = n;
    int rightPrime = 0,leftPrime = 0;
    while(a) {
      int flag =  prime(a); 
      if(flag == 1 ) {
          leftPrime = a;
          break;
      }
      else a--;
    }
    int b = n;
    while(b) {
        int flag = prime(b);
        if(flag == 1) {
            rightPrime = b;
            break;
        }
        else b++;
    }
    int d1 = rightPrime - n;
    int d2 = n - leftPrime;
    if(d1>=d2) printf("%d
",leftPrime);
    else printf("%d
",rightPrime);
    }
    return 0;
}