#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    scanf("%[^
]",str);
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i = a; i <= b ; i++) printf("%c",str[i]);
}