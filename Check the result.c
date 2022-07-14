#include <stdio.h>

int main() 
{

	int p;
	printf("Enter Percent : ");
	scanf("%d",&p);

	if(p >= 70)
		printf("\nDistinction");
	else if(p >= 60 && p<70)
		printf("\nFirst Class");
	else if(p >= 50 && p<60)
		printf("\nSecond Class");
	else if(p >= 40 && p<50)
		printf("\nPass");
	else
		printf("\nFail");

	return 0;
}
