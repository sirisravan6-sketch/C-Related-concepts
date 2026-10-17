#include <stdio.h>

int main(int argc, char *argv[]){
    int a,b,c;
    if (argc >= 4) {
        sscanf(argv[1], "%d", &a);
        sscanf(argv[2], "%d", &b);
        sscanf(argv[3], "%d", &c);
    } else {
        printf("Enter the value of A: "); fflush(stdout);
        scanf("%d",&a);
        printf("Enter the value of B: "); fflush(stdout);
        scanf("%d",&b);
        printf("Enter the value of C: "); fflush(stdout);
        scanf("%d",&c);
    }

    if(a==2 && b==2 && c==2){
        printf("0\n");
    }
    else if(a==b && b==c){
        printf("5\n");
    }
    else if(b!=a && c!=a){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
    return 0;
}
