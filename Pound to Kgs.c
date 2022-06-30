#include <stdio.h>

int main()
{
    float pound,kg;
    
    printf("Enter in pound\n");
    scanf("%f", &pound);
    kg = (pound*0.453592);
    printf("%.5f pound = %.5f kg",pound,kg);
    
    return 0;
}




