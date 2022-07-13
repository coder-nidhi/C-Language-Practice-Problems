#include <stdio.h>

int main()
{
    int s1, s2, s3, sum; 
  
    printf("Enter three angles of triangle: \n");  
	scanf("%d%d%d",&s1,&s2,&s3);

    sum = s1 + s2 + s3; 
 
    if(sum == 180 && s1!=0 && s2!=0 && s3!=0) 
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }
 
    
} 
