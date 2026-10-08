#include <stdio.h>
int num(int n){
   int i;
   for(i=0;i<=n;i++){
      printf("%d\n",i);   
   }  
}
int main() {
    num(3);
    return 0;
}