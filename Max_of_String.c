#include<stdio.h>
int main() {
    char str[1000];
    scanf("%[^
]%*c",str);
    int max = -1;
    for(int i = 0 ; str[i] != NULL ; i++) {
        if(str[i]-'a' > max) max = str[i]-'a';
    }
    printf("%c",max+97);
}