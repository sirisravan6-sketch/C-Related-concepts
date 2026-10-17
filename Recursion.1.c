#include <stdio.h>
int fib_recursive(int n){
    if(n==1 || n==2){
        return n-1;
    }else{
        return ( fib_recursive(n-1) + fib_recursive(n-2));
    }
}

int main() {
    int num;
    printf("Enter the number: "); 
    scanf("%d",&num);
    printf("The fibonacci of %d is %d\n",num,fib_recursive(num));

    return 0;
}