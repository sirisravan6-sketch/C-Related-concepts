#include <stdio.h>
#include<string.h>
int main() {
    char s1[]="sra";
    char s2[]="van";
    char s3[50];
    printf("The strcmp for s1,s2 returned %d\n",strcmp(s1,s2));
    printf("The length of s1 and s2 is %d,%d\n",strlen(s1),strlen(s2));
    puts(strcat(s1,s2));
     // strcpy(s3,strcat(s1,s2));
      strcpy(s3,s1);
     puts(s3);
   printf("The reversed string s1 is %s\n",strrev(s1));
   printf("The reversed string s1 is ");
   puts(strrev(s2));
   
     return 0;
}
