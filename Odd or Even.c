#include <stdio.h>

int main()
{
    int num;
    
    printf("Enter any positive integer:\n");
    scanf("%d", &num);
    
    if (num%2==0)
        printf("%d is an even number", num);
        
    else
        printf("%d is an odd number", num);
    return 0;
}

