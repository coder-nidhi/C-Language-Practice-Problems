#include<stdio.h>
 
int main() {
 
 int a, b, c;
 printf("Enter the value for a:\n");
 scanf("%d", &a);
 
 printf("Enter the value for b:\n");
 scanf("%d", &b);
 
 printf("Enter the value for c:\n");
 scanf("%d", &c);
 
     if ((a > b) && (a > c)) 
    {
        printf("\n The big one is a= %d", a);
    } else if (b > c) 
{
 printf("\n The big one is b= %d", b);
} else 

{
 printf("\n The big one is c= %d", c);
}
 return 0;
}
