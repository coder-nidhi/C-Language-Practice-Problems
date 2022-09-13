#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Hello.c","r");
    
    char ch;
    
    fscanf(fptr,"%c",&ch);
    printf("Character = %c\n",ch);
    
    fscanf(fptr,"%c",&ch);
    printf("Character = %c\n",ch);
    
    fscanf(fptr,"%c",&ch);
    printf("Character = %c\n",ch);
    
    fscanf(fptr,"%c",&ch);
    printf("Character = %c\n",ch);
    
    fscanf(fptr,"%c",&ch);
    printf("Character = %c\n",ch);
    return 0;
}
