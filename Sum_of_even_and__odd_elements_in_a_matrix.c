#include<stdio.h>
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    int sumeven = 0,sumodd = 0;
    for(int i = 0;i<n;i++) {
        for(int j = 0;j < m;j++) {
            scanf("%d",&arr[i][j]);
            if(arr[i][j] % 2 == 0) sumeven+=arr[i][j];
            else sumodd+=arr[i][j];
        }
    }
    printf("%d %d",sumeven,sumodd);
}