#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    int a;
    printf("Enter a number\n");
    scanf("%d", &num);
    
    a = sqrt(num);
    printf("Square root of %d = %d", num, a);

    return 0;
}

