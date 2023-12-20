#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char str[1000];
        scanf("%s",str);
        int x = strlen(str);
        int flag = 0;
        for(int i = 0 ; i < x;i++) {
            if(str[i] >= '0' && str[i] <= '9' ){
                flag = 1;
                break;
            }
        }
        if(flag == 1) printf("Yes
");
        else printf("No
");
    }
}