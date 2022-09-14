#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Hello.c","w");
   
    fputc('M',fptr);
    fputc('a',fptr);
    fputc('n',fptr);
    fputc('g',fptr);
    fputc('o',fptr);
    
    return 0;
}
