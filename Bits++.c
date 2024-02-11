#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int x = 0;
    char str[n][4];
    for(int i = 0 ; i < n ; i++){
        scanf("%s",str[i]);
    }
    
    for(int i = 0 ; i < n ; i++){
        if(str[i][0] == '+') ++x;
        else if(str[i][0] == '-') --x;
        else if(str[i][2] == '+') x++;
        else x--;
    }
    printf("%d",x);
}