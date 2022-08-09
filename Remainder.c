#include <stdio.h>

int main()
{
    int a, b, remainder;
    
    printf("Enter two numbers a and b to find remainder\n");
    
    printf("Enter a : ");
    scanf("%d", &a);
    
    printf("Enter b : ");
    scanf("%d", &b);
    
    remainder = a%b;
    printf("The remainder is : %d", remainder);
    
    return 0;
}

