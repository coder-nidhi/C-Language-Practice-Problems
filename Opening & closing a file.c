#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Hello.c","w");
    fclose(fptr);
    return 0;
}