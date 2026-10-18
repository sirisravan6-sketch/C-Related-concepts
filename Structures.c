#include <stdio.h> 
#include<string.h>
struct Student{
    int id;
    int marks;
    char fav_char;
    char name[30];
} Harry,Ravi,Subham;
int main()
{
  //  struct Student Harry,Ravi,Subham;
   Harry.id=1; 
   Ravi.id=2; 
   Subham.id=3; 
   Harry.marks=100; 
   Ravi.marks=200; 
   Subham.marks=300; 
   Harry.fav_char='P'; 
   Ravi.fav_char='Q'; 
   Subham.fav_char='R'; 
   strcpy(Harry.name,"Harry Potter");
   printf("Harry's id is %d,marks are %d and fav char is %c\n",Harry.id,Harry.marks,Harry.fav_char);
   printf("Ravi's id is %d,marks are %d and fav char is %c\n",Ravi.id,Ravi.marks,Ravi.fav_char);
   printf("Subham's id is %d,marks are %d and fav char is %c\n",Subham.id,Subham.marks,Subham.fav_char);
   printf("Harry is:%s\n",Harry.name);
    return 0;
}