#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter a number a :");
    scanf("%d",&a);
    
    printf("Enter a number b :");
    scanf("%d",&b);
    
    if(a<b)
        printf("%d is the smaller number",a);
    else 
        printf("%d is the smaller number",b);

    return 0;
}


