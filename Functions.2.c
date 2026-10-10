#include <stdio.h>
int num(){
   int n;
   printf("Enter n value: ");
       scanf("%d",&n);
       return n;   
   }  
int main() {
    int i;
    i = num();
    printf("The value of i is %d",i);
    return 0;
}