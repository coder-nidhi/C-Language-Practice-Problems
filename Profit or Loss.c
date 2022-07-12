//To Calculate Profit or Loss 
#include<stdio.h>
 
int main()
{
  int unit_price, sales_amount, amount;
 
  	printf("Please enter the actual product cost : \n");
  	scanf("%d", &unit_price);
  
  	printf("Please enter the selling price :  \n");
  	scanf("%d", &sales_amount);
  
  	if (sales_amount > unit_price)
  	{
  		amount = sales_amount - unit_price;
  		printf("Profit Amount  =  %d\n", amount);
  	}
  	else if(unit_price > sales_amount)
    {
    	amount = unit_price - sales_amount;
  		printf("Loss Amount  =  %d\n", amount);
	}
  	else
    	printf("No Profit No Loss!\n");
 
  return 0;
}
