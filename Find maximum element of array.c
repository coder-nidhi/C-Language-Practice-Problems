#include <stdio.h>

int main()
{
  int a[100],size,i,max;
  
    printf("Enter the size of array : \n");
    scanf("%d",&size);
    printf("Enter the value in array : \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
     for(i=0;i<size;i++)
     {
         if(a[i]>max)
         {
             max=a[i];
         }
     }
     printf("Maximum value of array is %d", max);
     
    return 0;
}

