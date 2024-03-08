#include<stdio.h>
#include<string.h>
int main(){
    char str[10000];
    scanf("%s",str);
    int frq[2] = {0};
    for(int i = 0 ; i < strlen(str) ; i++){
        if(str[i] == 'z') frq[0]++;
        else frq[1]++;
    }
    if(2*frq[0] == frq[1]) printf("Yes
");
    else printf("No
");
}