#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    char ch;
    scanf("%[^
] %c",str,&ch);
    int frq[26] = {0};
    for(int i = 0 ; i < strlen(str) ; i++){
        frq[str[i]-'a']++;
    }
    if(frq[ch-'a']){
        printf("%d",frq[ch-'a']);
    }
    else{
        printf("-1");
    }
}