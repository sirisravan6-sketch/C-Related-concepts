#include<stdio.h>
    int main(){
      int Maths, Science;
printf("Enter which subjects have passed:");
scanf("%d %d", &Maths, &Science);

if (Maths && Science) {
    printf("45");
} else if (Maths) {
    printf("15");
} else if (Science) {
    printf("15");
} else {
    printf("0");
} return 0;
}   