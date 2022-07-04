#include <stdio.h>

int main()
{
    int i,a[5];
    printf("Enter array elements : ");
    
    for(i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Aray elements : \n");
    
    for(i=0;i<5;i++)
    {
       printf("%d ", a[i]);
    }
    return 0;
}

