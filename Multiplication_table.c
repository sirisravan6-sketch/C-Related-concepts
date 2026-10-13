#include <stdio.h>  
int main(){
int i,Num,Range;
printf("Enter value:");
scanf("%d",&Num);
printf("Enter range:");
scanf("%d",&Range);
printf("Multiplication table :");
for(i=0;i<=Range;i++){
    printf("%d*%d=%d\n",Num,i,Num*i);
}return 0;
}