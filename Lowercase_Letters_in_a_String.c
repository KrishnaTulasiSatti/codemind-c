#include<stdio.h>
#include<string.h>
int main() {
    char str[1000];
    scanf("%[^
]",str);
    int x = strlen(str);
    int c = 0;
    for(int i = 0 ; i < x;i++) {
        if(str[i] >= 97 && str[i] < 123) c++;
    }
    printf("%d",c);
}