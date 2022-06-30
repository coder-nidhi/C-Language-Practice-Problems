#include <stdio.h>

int main()
{
    float inches,meters;
    
    printf("Enter in inches\n");
    scanf("%f", &inches);
    meters = (inches*0.0254);
    
    printf("%.5f inches = %.5f meters",inches,meters);
    
    return 0;
}




