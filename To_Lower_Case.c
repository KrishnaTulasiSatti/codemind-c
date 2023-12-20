#include<stdio.h>
#include<string.h>
int main() {
    char str[1000];
    scanf("%s",str);
    int x = strlen(str);
    for(int i = 0 ; i < x;i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
    printf("%s",str);
}