#include <stdio.h>
int sum(int a,int b){
    return a + b;
}
 int avg(int i,int j,int k){
    return (i+j)/k;
 }
 void GreetHelloWorld(int (*fptr)(int,int)){
    printf("Hello World\n");
    printf("The sum of given numbers is :%d\n",fptr(5,7));
}
 void GreetGM(int (*fptr)(int,int)){
     printf("Good Morning\n");
     printf("The sum of given numbers is :%d\n",fptr(5,7));
}
 void GreetGA(int (*fptr)(int,int,int)){
     printf("Good Afternoon\n");
     printf("The sum of given numbers is :%d\n",fptr(5,7,2));
}
 void GreetGE(int (*fptr)(int,int,int)){
     printf("Good Evening\n");
     printf("The sum of given numbers is :%d\n",fptr(5,7,2));
}
 
int main()
{
    int (*ptr)(int,int);
    int (*ptr1)(int,int,int);
    ptr = sum;
    ptr1 = avg;
    GreetHelloWorld(ptr);
    GreetGM(ptr);
    GreetGA(ptr1);
    GreetGE(ptr1);
    return 0;
}
