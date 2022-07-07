#include <stdio.h>

int main()
{
    int n,t;
    
    printf("Enter the values for N and T : \n");
    scanf("%d %d", &n, &t);
    
    if(n==t)
    printf("N and T are equal");
    else
    printf("N and T are not equal");
    return 0;
}

