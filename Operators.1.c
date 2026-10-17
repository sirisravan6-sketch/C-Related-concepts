#include <stdio.h>

int main() {
    int a,b,c,d;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b); 
    printf("Enter value of c:");
    scanf("%d",&c);
    printf("Enter value of d:");
    scanf("%d",&d);
    int ab=a*b;
    int bc=b*c;
    int cd=c*d;
    int da=d*a;
    if(ab==bc && cd==da){
     printf("True");
    }else{
        printf("False");
    }
    return 0;
}
