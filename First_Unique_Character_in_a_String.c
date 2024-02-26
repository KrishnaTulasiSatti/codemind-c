#include<stdio.h>
#include<string.h>
int main() {
    char str[1000] ;
    scanf("%s",str);
    int n = strlen(str);
    int flag = 0;
    for(int i = 0 ; i < n ; i++) {
        int count = 0 ;
        int visited = 0;
        
        for(int j = 0 ; j < n ; j++) {
            if(j < i && str[i] == str[j]) 
            {
                visited = 1;
                break;
            }
            
            if(str[i] == str[j]) count++;
        }
        if(visited == 0 && count == 1) 
        {
            printf("%d",i);
            flag = 1;
            break;
        }
    }
    if(flag == 0) printf("-1");
}