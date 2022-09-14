#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Hello.c","r");
    
    int n;
    
    fscanf(fptr,"%d",&n);
    printf("Number = %d\n",n);
    
    fscanf(fptr,"%d",&n);
    printf("Number = %d\n",n);
    
    fscanf(fptr,"%d",&n);
    printf("Number = %d\n",n);
    
    fscanf(fptr,"%d",&n);
    printf("Number = %d\n",n);
    
    fscanf(fptr,"%d",&n);
    printf("Number = %d\n",n);
    
    return 0;
}
