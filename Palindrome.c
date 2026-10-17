#include <stdio.h>
int palindrome(int num){
    int reverse=0;
    int orginalnumber=num;
    while (num !=0)
    {
        reverse=reverse * 10 + num%10;
        num=num/10;
    } 
    printf("The reversed number is:%d\n",reverse);
    if (orginalnumber==reverse)
    {
        return 1;
    }
      else{

          return 0;
      }
    
}
  
int main()
{
    int n;
    printf("Enter the number to check whether it is palindrome or not: ");
    scanf("%d",&n);
    if (palindrome(n))
    {
        printf("The number is palindrome\n");
    }
    else{
        printf("The number is not palindrome\n");
    }
    return 0;
}