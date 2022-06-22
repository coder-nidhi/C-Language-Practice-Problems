#include<stdio.h>

int main()
{
    int a,b;
    
    printf("Enter first number a:\n");
        
    printf("Enter second number b:\n");
    
    
    scanf("%d%d" ,&a,&b);
    
    
    if(a>b)
        printf("%d is the larger number",a);
    
    else
        printf("%d is the larger number",b);
        

    return 0;
}


