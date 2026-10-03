#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *ptr;
    int chars,i=0,n;
     printf("Enter the value of n: \n");
      scanf("%d",&n);
    while (i<n)
    {
     
      printf("Enter the number of characters in employee %d id: \n",i+1);
      scanf("%d",&chars);
      ptr=(char*)malloc((chars+1)*sizeof(char));
      printf("Enter employee id: \n");
      scanf("%s",ptr);
      printf("Employee id is:%s\n",ptr);
      free(ptr);
      i++;
    }
    return 0;  
}