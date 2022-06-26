#include <stdio.h>

int main()
{
    int input, i, fact = 1;
    
    printf("Enter any number: \n");
    scanf("%d", &input);
    
    for(i=1; i<=input; i++)
    fact = fact*i;
    
    printf("Factorial of %d is %d", input, fact);

    return 0;
}

