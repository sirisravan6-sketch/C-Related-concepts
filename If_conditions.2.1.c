#include<stdio.h>
int main(){
    int subjects;
    printf("Enter 1 for maths and science\nEnter 2 for maths\nEnter 3 for science\n");
    scanf("%d",&subjects);
    if(subjects==1){
         printf("45");
    } else if(subjects==2){
        printf("15");
    } else if(subjects==3){
        printf("15");
    }else{
        printf("0");
    } return 0;
}