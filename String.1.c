#include <stdio.h>
#include<string.h>
int main() {
    char s1[]="Sravan";
    char s2[]=" is a friend of";
    char s3[]=" Chintu";
   strcat(s1,s2);
   puts(strcat(s1,s3));
    return 0;
}