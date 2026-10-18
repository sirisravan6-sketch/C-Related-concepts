#include <stdio.h>
int b=34;
int func(int b1){
    static int myvar;
    printf("The value of myvar id %d\n",myvar);
     myvar++;
   // printf("The value of b inside func is %d\n",b);

    return b1 + myvar;
}
int main()
{
    int b=344;
    int val=func(b);
     val=func(b);
    int *ptr= &val;
    //printf("The value of func is %d\n",val);
    return 0;
}