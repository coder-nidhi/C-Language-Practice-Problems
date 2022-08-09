#include <stdio.h>

void doWork(int a, int b, int *sum, int *prod, int *avg);

int main()
{
    int a, b;
    printf("Enter the value of a and b : ");
    scanf("%d %d", &a, &b);
    
    int sum, prod, avg;
    doWork(a, b, &sum, &prod, &avg);
    
    printf("Sum = %d\nProd = %d\nAvg = %d", sum, prod, avg);

    return 0;
}

void doWork(int a, int b, int *sum, int *prod, int *avg){
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}
