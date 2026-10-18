#include<stdio.h>
int main(){
   int a;
   printf("Enter a number:");
   scanf("%d",&a);
   switch(a % 2){
      case 0:
         printf("Even");
         break;
      case -1:
         printf("Odd");
         break;
      default:
         printf("Invalid");
   }
   return 0;
}