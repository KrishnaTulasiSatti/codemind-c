#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int mat[r][c];
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int rsum = 0;
    int rmax = -1000;
    for(int i = 0 ; i < r ; i++){
        rsum = 0;
        for(int j = 0 ; j < c ; j++){
            rsum+=mat[i][j];
        }
        if(rsum > rmax) rmax = rsum;
       
    }
    int csum = 0;
    int cmax = -1000;
    for(int i = 0 ; i < c ; i++){
        csum = 0;
        for(int j = 0 ; j < r ; j++){
            csum+=mat[j][i];
        }
        if(csum > cmax) cmax = csum;
    }
    int res = (cmax > rmax) ? cmax : rmax;
    printf("%d",res);
}