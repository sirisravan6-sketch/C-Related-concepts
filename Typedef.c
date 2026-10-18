#include <stdio.h>
 typedef struct Student{
    int id;
    int marks;
    char fav_char;
    char name[30];
} std;
int main()
{
   std s1,s2;
   s1.id=11;
   s2.id=12;
   printf("s1 id is %d\n",s1.id);
   printf("s2 id is %d",s2.id);
     
    return 0;
}