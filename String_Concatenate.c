#include<stdio.h>
#include<string.h>
int main(){
    char s1[1000];
    char s2[1000];
    scanf("%s %s",s1,s2);
    strcat(s1,s2);
    for(int i = 0 ; i < strlen(s1) ; i++){
        for(int j = 0 ; j < strlen(s1)-i-1 ; j++){
            if(s1[j]>s1[j+1]){
                char temp = s1[j];
                s1[j]=s1[j+1];
                s1[j+1]=temp;
            }
        }
    }
    printf("%s",s1);
}