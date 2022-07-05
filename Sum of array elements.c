#include <stdio.h>

int main()
{
    int i,a[5],sum=0;
    printf("Enter array elements : \n");
    for(i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("Sum of array elements : \n");
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("%d", sum);

    return 0;
}

