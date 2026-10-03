#include <stdio.h>
int main()
{
     FILE *ptr = NULL;
    ptr = fopen("../File.txt", "w");
    fputc('S', ptr);
    fputs("ravan", ptr);
    fclose(ptr);
    return 0;
}