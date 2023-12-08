#include<stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(int i = 0 ; i < a;i++) {
        for(int j = 0 ;j<b;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int x,y;
    scanf("%d %d",&x,&y);
    int brr[x][y];
    for(int i = 0 ; i < x;i++) {
        for(int j = 0 ;j < y;j++) {
            scanf("%d",&brr[i][j]);
        }
    }
    int crr[a][b];
    for(int i = 0;i<a;i++) {
        for(int j = 0;j<b;j++) {
            
            crr[i][j] = arr[i][j] + brr[i][j];
            printf("%d ",crr[i][j]);
        }
        printf("
");
    }
    
}