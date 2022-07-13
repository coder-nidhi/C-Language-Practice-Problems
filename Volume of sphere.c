#include<stdio.h>
int main()
{
	float v,r;
	
	printf("Enter radius of the sphere: ");
	scanf("%f",&r);
	
    v=(4*22*r*r*r)/(7*3); 
    
	printf("Volume of sphere : %f\n",v);
	
	return 0;
}
