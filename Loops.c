#include <stdio.h>

int main() { 
    int i;
    float a;
    printf("Enter 1 for km to miles\nEnter 2 for inches to foot\nEnter 3 for cm to inches\nEnter 4 for pounds to kgs\nEnter 5 for inches to meters:\n ");
    scanf("%d", &i);

    if (i < 1 || i > 5) {
        printf("Invalid option");
        return 0;
    }

    printf("Enter the value: ");
    scanf("%f", &a);

    if(i==1){
        printf("%fkm=%fmiles",a,a*0.6);
    }else if(i==2){
        printf("%finches=%ffoot",a,a/12);
    }else if(i==3){
        printf("%fcm=%finches",a,a/2.54);
    }else if(i==4){
        printf("%fpounds=%fkgs",a,a/2.205);
    }else if(i==5){
        printf("%finches=%fmeters",a,a*0.0254);
    }
    return 0;
}