
#include <stdio.h>
#include<math.h>
#include <stdbool.h>
int main() {
   
    int n;
    scanf("%d",&n);
    int a = n,res1 = 0,res2 = 0;
    while(true){
       float y = log2(a);
      int x = y;
      if(x == y) {
          res1= n-a;
          break;
    }
    else a--;
    }
    a = n;
    while(true){
      float y = log2(a);
      int x = y;
      if(x == y) {
          res2= a-n;
          break;
    }
    else a++;
    }
    if(res1>=res2) printf("%d",res2);
    else printf("%d",res1);

    return 0;
}