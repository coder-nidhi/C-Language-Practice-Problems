#include <stdio.h>

int main(void) 
{
int per;
	printf("Enter Percentage : \n");
	scanf("%d",&per);
	
	if(per >= 40)
		printf("Pass\n");
	else
		printf("Fail\n");
	return 0;
}
