#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    scanf("%s",str);
    int n = strlen(str);
    int i = 0;
    int j = n-1;
    int f1 = 0,f2 = 0;
    while(i <= j){
        f1 = 0,f2 = 0;
        if(str[i] >= 'a' && str[i] <= 'z') f1 = 1;
        if(str[j] >= 'a' && str[i] <= 'z') f2 = 1;
        if(f1 == 0) i++;
        if(f2 == 0) j--;
        if(f1 == 1 && f2 == 1){
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
             i++;
             j--;
        }
       
      
    }
    printf("%s",str);
   
}