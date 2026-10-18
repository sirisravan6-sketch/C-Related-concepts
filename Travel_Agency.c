#include <stdio.h>
#include<string.h>
struct Travel_Agency
{
   char name[50];
   int license;
   char route[50];
   int kms;
};

int main()
{
    int n,i;
    printf("Enter the value of number of drivers: ");
    scanf("%d",&n);
    struct Travel_Agency s[n];
    for (i = 1; i <= n; i++)
    {
      printf("Enter the driver's name: \n");
      scanf("%s",s[i].name);
      printf("Enter the driver's licence: \n");
      scanf("%d",&s[i].license);
      printf("Enter the driver's route: \n");
      scanf("%s",s[i].route);
      printf("Enter the  distance driver travelled: \n");
      scanf("%d",&s[i].kms);
    }
    printf("Details of drivers\n");
    for(i=1;i<=n;i++){
    printf("Name of driver %d is %s\n",i,s[i].name);
    printf("Licence number of driver %d is %d\n",i,s[i].license);
    printf("Route of driver %d is %s\n",i,s[i].route);
    printf("Distance travelled by driver %d is %d\n",i,s[i].kms);
    }
    
    
    return 0;
}