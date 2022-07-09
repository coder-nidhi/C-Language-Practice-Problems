#include<stdio.h>
 
int main() 
{
   int base, height;
   float area;
 
   printf("Enter the base : \n");
   scanf("%d", &base);
 
   printf("Enter the height : \n");
   scanf("%d", &height);
 
   area = 0.5 * base * height;
   printf("Area of right angle triangle : %f\n", area);
 
   return (0);
}
