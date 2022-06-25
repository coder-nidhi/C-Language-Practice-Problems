// to check if a number is positive or not

#include <stdio.h>

int main()
{
    int i;
    printf("Enter any random number\n");
    scanf("%d", &i);
    
    if(i>0)
    printf("It is a +ve number");
    
    else
    printf("It is a -ve number");

    return 0;
}

