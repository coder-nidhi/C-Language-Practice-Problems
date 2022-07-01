#include <stdio.h>

int main()
{
   float principle,time, rate, SI;
   
    printf("Enter principle : \n");
    scanf("%f", &principle);
    
    printf("Enter principle : \n");
    scanf("%f", &time);
     
    printf("Enter principle : \n");
    scanf("%f", &rate);
    
    SI=principle*time*rate/100;
    
    printf("Simple Interest is %f", SI);
    
    return 0;
}

