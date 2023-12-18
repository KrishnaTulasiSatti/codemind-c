#include<stdio.h>
#include<string.h>
int main() {
    char str[1000];
    scanf("%s",str);
    int x = strlen(str);
    int sum = 0;
    for(int i = 0 ; i < x ; i++) {
        if(str[i] >= '0' && str[i] <= '9')
        {
            sum+=str[i]-'0';
        }
    }
    printf("%d",sum);
}