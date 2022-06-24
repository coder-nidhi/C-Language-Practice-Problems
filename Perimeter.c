#include <stdio.h>

int main()
{
    float l ,w, perimeter;
    printf("\n Enter the length : ");
    scanf("%f",&l);
    
    printf("\n Enter the width : ");
    scanf("%f",&w);
    
    perimeter=(2*l)+(2*w);
    
    printf("\n Perimeter of rectangle is : %f" ,perimeter);
    return 0;
}

