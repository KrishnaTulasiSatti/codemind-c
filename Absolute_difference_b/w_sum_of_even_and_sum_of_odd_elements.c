#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int oddsum = 0 , evensum = 0;
    for(int i = 0 ; i < n;i++) {
        
        scanf("%d",&a[i]);
        if(a[i] % 2 == 0) evensum+=a[i];
        else oddsum+=a[i];
    }
    int diff = abs(oddsum - evensum);
    printf("%d",diff);
}