#include<stdio.h>
#include<string.h>
int isVowel(char ch){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'U' || ch == 'I' || ch == 'O')
    return 1;
    return 0;
}
int main(){
    char str[10000];
    scanf("%s",str);
    int n = strlen(str);
    int i = 0;
    int j = n-1;
    while(i < j){
        if(isVowel(str[i]) && isVowel(str[j])){
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
            i++;
            j--;
        }
        else if(isVowel(str[i])) j--;
        else if(isVowel(str[j])) i++;
        else{
            i++;
            j--;
        }
    }
    printf("%s",str);
}