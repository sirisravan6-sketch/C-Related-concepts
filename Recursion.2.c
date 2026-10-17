#include <stdio.h>
int fib_iterative(int n){
  int a=0;
  int b=1;
  for(int i=0;i<n-1;i++){
    b=a+b;
    a=b-a;
  }
  return a;
}

int main() {
    int num;
    printf("Enter the number: "); 
    scanf("%d",&num);
    printf("The fibonacci of %d is %d\n",num,fib_iterative(num));

    return 0;
}