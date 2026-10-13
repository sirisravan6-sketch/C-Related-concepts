#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], result[3][3];
    printf("Enter first matrix\n");
    int m,n,sum=0;
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
       // printf("Enter %d %d elements: \n",i,j);
        scanf("%d", &a[i][j]);
        //printf("\t");
    }
    //printf("\n");
}
   printf("Enter second matrix\n");
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
       // printf("Enter %d %d elements: \n",i,j);
        scanf("%d", &b[i][j]);
       // printf("\t");
    }
    //printf("\n");
}
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
          for (int k = 0; k < 3; k++)
          {
            sum += a[i][k] * b[j][k];
          }
          result[i][j] = sum;
          sum=0;   
    }
}
for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
      printf("%d \t",result[i][j]);
    }
    printf("\n");
}
    return 0;
}