#include <stdio.h>
int main()
{
  int Integer;
  char Character;
  float InputFloat;
 
  printf("Please enter a character : \n");
  scanf("%c", &Character);
  
  printf("Please enter an integer value : \n");
  scanf("%d", &Integer);
  
  printf("Please enter float value :  ");
  scanf("%f", &InputFloat);    
  
  printf(" \n The Integer Value that you Entered is : %d", Integer);
  printf(" \n The Character that you Entered is : %c", Character);
  printf(" \n The Float Value that you Entered is : %f", InputFloat);
  
  return 0;
}
