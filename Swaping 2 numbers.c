#include <stdio.h>
int main()
{

int a, b;
    printf("Enter Value of a ");
    scanf("%d", &a);
    printf("\nEnter Value of b ");
    scanf("%d", &b);
 
    int temp = a;
    a = b;
    b = temp;
    
    printf("%d %d",a,b);

    return 0;
}

