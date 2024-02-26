#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    char str[1000];
    scanf("%s",str);
    int flag = 1;
    for(int i = 0 ; i < strlen(str) ; i++){
        if(!(str[i] >= '0' && str[i] <= '9')){
            flag = 0;
            printf("False
");
            break;
        }
    }
    if(flag == 1) printf("True
");
    
    }
}