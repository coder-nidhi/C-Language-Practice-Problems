#include<stdio.h>

int main()
{
	float base,height,area;
	
	printf("Enter base of parallelogram : \n");
	scanf("%f",&base);
	
	printf("Enter height of the parallelogram : \n");
	scanf("%f",&height);
	
	area=(base*height);
	
	printf("Area of parellelogram : %f\n",area);
	return 0;
}
