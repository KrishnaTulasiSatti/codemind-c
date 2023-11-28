#include<stdio.h>
int prime(int i) {
    if(i<=1) return 0;
    for(int j = 2;j*j<=i;j++) {
        if(i%j==0) return 0;
    }
    return 1;
    
}
int main() {
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int sum = n1+n2;
    for(int i = sum+1;i<sum*2;i++) {
        if(prime(i)) {
            printf("%d",i-sum);
            break;
            }
        
     }
}