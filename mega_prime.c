#include<stdio.h>
int prime(int n) {
    int c = 0;
    for(int i = 1;i<=n;i++ ) {
        if(n % i == 0) c++;
    }
    if(c == 2)  return 1;
    else return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int a = n;
    int flag = prime(n);
    int check = 0;
    while(a) {
        if(flag == 1) {
            int ld = a % 10;
             check = prime(ld);
            if(check == 0) {
                printf("Not Mega Prime");
                break;
            }
            a/=10;
        }
        else {
            printf("Not Mega Prime");
            break;
        }
        
    }
    if(check == 1) printf("Mega Prime");
    
    
}