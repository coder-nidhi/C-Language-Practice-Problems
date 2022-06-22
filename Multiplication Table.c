#include<stdio.h>

int main()
{
    int number,ans,i;
    printf("Enter the number:");
    scanf("%d", &number);
    printf("Multiplication table of %d:\n",number);
    
    for(i=1;i<=10;i++)
    {
        printf("\n%d * %d = %d",number,i,number*i);
    }
    return 0;
}
