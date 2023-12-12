#include<stdio.h>
#include<string.h>
int main() {
   char str[1000];
   scanf("%[^
]%*c",str);
   int sum = 0;
   for(int i = 0;str[i] != NULL;i++) {
       if(str[i] >= '0' && str[i] <='9') {
           sum+=(str[i]-48);
       }
   }
   printf("%d",sum);
}