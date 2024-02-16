#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    scanf("%s",str);
    int n = strlen(str);
    if(str[0] == 0 || n!=10) printf("Invalid");
    else printf("Valid");
}