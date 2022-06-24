#include <stdio.h>

int main()
{
    int a,b,c;
    float avg;
    
    
    printf("Enter any 3 random numbers : \n");
    
    scanf("%d %d %d", &a,&b,&c);
    
    avg=(a+b+c)/3;
    
    printf("\nAVERAGE: %0.2f",avg);
    
    

    return 0;
}

