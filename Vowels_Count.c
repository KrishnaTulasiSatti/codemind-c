#include<stdio.h>
#include<string.h>
int main() {
    char str[1000];
    scanf("%[^
]",str);
    int x = strlen(str);
    int c = 0;
    for(int i = 0 ;i < x;i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') c++;
    }
    printf("%d",c);
}