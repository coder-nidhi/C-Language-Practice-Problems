#include <stdio.h>

int main()
{
    float km,meter;
    
    printf("Enter the distance in kilometers\n");
    scanf("%f", &km);
    
    meter = (km*1000);
    printf("%.2f km = %.2f meter", km, meter);
    
    return 0;
}

