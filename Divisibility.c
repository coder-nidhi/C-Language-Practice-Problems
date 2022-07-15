 #include<stdio.h>
 
int main()
{
  	int number;
 
  	printf("Enter any number to check whether it is divisible by 5 : \n");
  	scanf("%d", &number);
  
  	if ( number % 5 == 0 ) 
     	printf("Given number %d is divisible by 5", number);
 
  	else
    	printf("Given number %d is not divisible by 5", number);
 
  return 0;
}
