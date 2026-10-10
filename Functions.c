#include <stdio.h>
int num(){
   int i,n;
   printf("Enter n value: ");
       scanf("%d",&n);
   for(i=0;i<=n;i++){
      printf("%d\n",i);   
   }  
}
int main() {
    num();
    return 0;
}