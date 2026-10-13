#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a, i=0;
    int *i2;
    while (i<100)
    {
       printf("Welcome");
       i2 = malloc(10000*sizeof(int));
       if(i%100==0){
        getchar();
       }
       i++;
       //free(i2);
    }
    
    return 0;
}