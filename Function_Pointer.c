#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b){
    return a+b;
}
int main()
{
    int i,j;
    printf("Enter the values to add: ");
    scanf("%d %d",&i,&j);
   // printf("The sum of given numbers is %d\n",sum(i,j));
    int(*fptr)(int,int);
    fptr=&sum;
    int d=(*fptr)(i,j);
    printf("The sum of given numbers is %d\n",d);
    return 0;
}