#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    scanf("%s",str);
    int frq[26]={0};
    for(int i = 0 ; i < strlen(str) ; i++){
        frq[str[i]-'A']++;
    }
    if((frq['U'-'A'] == frq['D'-'A']) && (frq['L'-'A'] == frq['R'-'A']))
    printf("True");
    else printf("False");
    
}