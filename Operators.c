#include <stdio.h>

int main() {
    int a,b;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    printf("a==b=%d\n",a==b);
    printf("a&&b=%d\n",a&&b);
    printf("a||b=%d\n",a||b);
    printf("a!=b=%d\n",a!=b);
    printf("a!=b=%d\n",!b);
     printf("a!=b=%d\n",!a);
    return 0;
}