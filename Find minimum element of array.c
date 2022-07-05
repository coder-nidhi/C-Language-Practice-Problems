#include <stdio.h>

int main()
{
  int a[100],size,i,min;
  
    printf("Enter the size of array : \n");
    scanf("%d",&size);
    printf("Enter the value in array : \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
     for(i=0;i<size;i++)
     {
         if(a[i]<min)
         {
             min=a[i];
         }
     }
     printf("Minimum value of array is %d", min);
     
    return 0;
}

