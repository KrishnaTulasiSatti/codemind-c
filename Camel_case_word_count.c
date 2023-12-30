#include<stdio.h>
#include<string.h>
int main() {
    char str[10000];
    scanf("%[^
]",str);
    int x = strlen(str);
    int count = 0;
    if (str[0] >= 'a' && str[0] <= 'z') count = 1;
    for(int i = 0 ; i < x ; i++) {
        
        if(str[i] >= 'A' && str[i] <= 'Z') count++;
    }
    printf("%d",count);
}