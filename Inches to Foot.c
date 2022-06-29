#include <stdio.h>

int main()
{
    float inches, foot;
    
    printf("Enter the distance in inches\n");
    scanf("%f", &inches);
    
    foot = (inches*0.0833333);
    printf("%.5f inches = %.5f foot", inches, foot);
    
    return 0;
}


