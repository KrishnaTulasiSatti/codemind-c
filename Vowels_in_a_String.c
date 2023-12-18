#include<stdio.h>
#include<string.h>
int vowel(char ch) {
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
    return 1;
    else return 0;
}
int main() {
    char str[1000];
    char ch;
    scanf("%[^
] %c",str,&ch);
   
    int x = strlen(str);
    int flag = 0;
    for(int i = 0 ; i < x;i++) {
        if(str[i] == ch && vowel(ch)) {
            printf("True
%d",i);
            flag = 1;
            break;
        }
        else flag = 0;
    }
    if(flag != 1) printf("False"); 
}