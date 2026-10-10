#include <stdio.h>
  int num(int i){
    return i + 1;
  }
int main() { 
    int i,a,n; 
    printf("Enter n value: ");
        scanf("%d",&n);
        i=0;
    for(a=0;a<n;a++){
      i=num(i);
      printf("%d\n",i);
      }
    return 0;
}