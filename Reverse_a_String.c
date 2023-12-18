#include<stdio.h>
#include<string.h>
int main() {
    char str[1000];
    scanf("%[^
]",str);
    int x = strlen(str);
    for(int i = 0 ; i < x/2 ; i++) {
        char temp = str[x-i-1];
        str[x-i-1] = str[i];
        str[i] = temp;
    }
    printf("%s",str);
}