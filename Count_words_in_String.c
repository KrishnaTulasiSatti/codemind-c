#include<stdio.h>
#include<string.h>
int main() {
    char str[1000];
    scanf("%[^
]",str);
    int size = strlen(str);
    int c = 1;
    for(int i = 0 ; i < size ; i++) {
        if(str[i] == ' ') c++;
    }
    printf("%d",c);
}