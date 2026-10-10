#include <stdio.h>

int main() {
    int i;
    printf("Enter value of i:");
    scanf("%d",&i);
    if(i>=1){
        printf("Positive");
    }else if(i<=-1){
        printf("Negative");
    } else {
        printf("Zero");
    }
    return 0;
}
        