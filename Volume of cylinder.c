#include<stdio.h>  
  
int main()  
{  
    const float PI = 3.14;  
    float r, h, volume;  
  
    printf("Enter radius and height of the cylinder\n");  
    scanf("%f%f", &r, &h);  
  
    volume = PI * r * r * h;  
  
    printf("Volume of Cylinder is %f\n", volume);  
  
    return 0;  
}  
