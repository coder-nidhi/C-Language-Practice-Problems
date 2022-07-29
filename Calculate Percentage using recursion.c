#include <stdio.h>

int calcPercentage(int science,int math, int sanskrit);

int main()
{
    int sci, maths, sansk;
    
    printf("Enter the marks of Science : ");
    scanf("%d", &sci);
    
    printf("Enter the marks of Maths :  ");
    scanf("%d", &maths);
    
    printf("Enter the marks of Sanskrit : ");
    scanf("%d", &sansk);
    
    printf("Percentage is : %d ", calcPercentage(sci, maths, sansk));
    
    return 0;
}

int calcPercentage(int science,int math, int sanskrit)
{
    return((science + math + sanskrit)/3);
    
}
