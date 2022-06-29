#include <stdio.h>

int main()
{
    float cm,inches;
    
    printf("Enter the distance in cm\n");
    scanf("%f", &cm);
    
    inches = (cm*0.393701);
    printf("%.5f cm = %.5f inches",cm, inches);
    
    return 0;
}



