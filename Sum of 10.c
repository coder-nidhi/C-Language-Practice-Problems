#include <stdio.h>

int main()
{
    int i, sum = 0;
    
    for(i=1; i<=10; i++)
    {
        sum=sum+i;
    }
    
    printf("Sum of 1 to 10 is %d", sum);

    return 0;
}

