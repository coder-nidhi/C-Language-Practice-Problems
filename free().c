#include <stdio.h>

int main()
{
    int *ptr;
    int n;
    
    printf("Enter the value of n : ");
    scanf("%d",&n);
    
    ptr = (int*) calloc(n,sizeof(int));
    
    for(int i = 0;i<=n;i++)
    {
        printf("%d\n",ptr[i]);
    }
    
    free(ptr);
    
     ptr = (int*) calloc(2,sizeof(int));
    
    for(int i = 0;i<=n;i++)
    {
        printf("%d\n",ptr[i]);
    }
    
    return 0;
}


