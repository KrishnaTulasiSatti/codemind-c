#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    scanf("%s",str);
    int frq[26] = {0};
    for(int i = 0 ; i < strlen(str) ; i++){
        frq[str[i]-'a']++;
    }
    int max = frq[0];
    for(int i = 0; i < 26 ; i++){
        if(frq[i] > max) max = frq[i];
    }
    int smax = -1000;
    int ind = 0;
    for(int i = 0; i < 26 ; i++){
        if(frq[i] > smax && frq[i] != max ) {
            smax = frq[i];
            ind = i;
        }
    }
    int flag = 0;
    if(smax == 0) flag = 1;
    if(flag == 1) printf("-1");
    else
    printf("%c",ind+'a');
}