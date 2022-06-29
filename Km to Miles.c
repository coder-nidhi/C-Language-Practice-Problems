#include <stdio.h>

int main()
{
    float km, miles;
    
    printf("Enter the distance in kilometers\n");
    scanf("%f", &km);
    
    miles = (km*0.621371);
    printf("%.2f km = %.2f miles", km, miles);
    
    return 0;
}

