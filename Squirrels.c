#include<stdio.h>

int main() {
    int cigars, weekend;

    printf("Enter the number of cigars: ");
    scanf("%d", &cigars);

    printf("Enter 1 for weekend, 0 for not weekend: ");
    scanf("%d", &weekend);

    if (weekend == 1) {
        if (cigars >= 40) {
            printf("True");
        } else {
            printf("False");
        }
    } else {
        if (cigars >= 40 && cigars <= 60) {
            printf("True");
        } else {
            printf("False");
        }
    }

    return 0;
}
