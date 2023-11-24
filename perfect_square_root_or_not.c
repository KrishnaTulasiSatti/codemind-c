#include<stdio.h>
int checkroot(int n,int i) 
{
    
    if(i == (n/i)) return 1;
    else return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int flag = 0;
    if(n==1 || n==0) printf("True");
    for(int i=1;i<n;i++) {
        if(n % i == 0) {
            if(checkroot(n,i)) 
            {
                flag = 1;
                printf("True");
                break;
            }

        }
    }
    if(flag != 1) printf("False");
}