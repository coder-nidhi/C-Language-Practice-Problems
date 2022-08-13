#include <stdio.h>

int main()
{
    int marks[3];
    
    printf("Enter the marks of phy : ");
    scanf("%d", &marks[0]);
    
    printf("Enter the marks of chem : ");
    scanf("%d", &marks[1]);
    
    printf("Enter the marks of phy : ");
    scanf("%d", &marks[2]);
    
    printf("Physics = %d, Chemistry = %d, Math = %d", marks[0], marks[1], marks[2]);
    
    return 0;
}

