#include <stdio.h>

int main()
{
    int a, b;
    
    printf("Enter a number a : ");
    scanf("%d", &a);
    
    printf("Enter power of a that is b : \n");
    scanf("%d", &b);
    
    int ans = 1;
    
    for(int i=1;i<=b;i++){
        ans = ans*a;
    }
    
    printf("Answer is : \n", ans);
    
    return 0;
}

