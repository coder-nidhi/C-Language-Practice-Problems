#include <stdio.h>

int main()
{
    
    int i,j,temp,size;
   

    printf("Enter the size of array : \n");
    scanf("%d",&size);
    
    int a[size];
    printf("Enter array elements : \n");
    for(i=0;i<size;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("Array elements : \n");
    for(i=0;i<size;i++)
    {
        printf("%d  ", a[i]);
    }
    return 0;
}



