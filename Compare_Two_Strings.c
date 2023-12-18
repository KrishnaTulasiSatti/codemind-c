#include<stdio.h>
#include<string.h>
int main() {
    char str1[1000];
    scanf("%s",str1);
    char str2[1000];
    scanf("%s",str2);
    int x = strcmp(str1,str2);
    if(x == 0) printf("Strings are Equal");
    else printf("Strings are not Equal");
}