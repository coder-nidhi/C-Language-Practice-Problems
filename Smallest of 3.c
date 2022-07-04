#include <stdio.h>
 
int main()
 
{
 
float n, m, t;
 
    printf("\nPlease enter 3 numbers: ");
 
    scanf("%f %f %f", &n, &m, &t);
 
    if(n<=m && n<=t)
    
        printf("The smallest number is %.3f", n);
 
      if(m<=n && m<=t)
 
         printf("The smallest number is %.3f", m);
 
      if(t<=n && t<=m)
 
         printf("The smallest number is %.3f", t);
 
      return 0;
 
}
