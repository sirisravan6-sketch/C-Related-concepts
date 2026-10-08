#include <stdio.h>
int main()
{
     FILE *ptr = NULL;
    ptr = fopen("../Myfile.txt", "a+");
    fputc('S', ptr);
    fputs("ravan", ptr);
    fclose(ptr);
    return 0;
}