#include <stdio.h>

int main()
{
    float mile,km;
    
    printf("Enter the distance in miles : \n");
    scanf("%f", &mile);
    
    km = (mile*1.60934);
    printf("%.2f mile = %.2f km", mile, km);
    
    return 0;
}

