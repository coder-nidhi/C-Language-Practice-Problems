#include <stdio.h>

int main()
{
    float a,b,product;
    printf("Enter a number a : ");
    scanf("%f", &a);
    printf("Enter a number b : ");
    scanf("%f" , &b);
   
    
    product=a*b;
    printf("Product of 2 numbers is %.5f",product);
    return 0;
}

