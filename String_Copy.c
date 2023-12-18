#include<stdio.h>
#include<string.h>
int main() {
    char str1[1000];
    scanf("%[^
]",str1);
    char str2[1000];
    strcpy(str2,str1);
    printf("%s",str2);
}