#include <stdio.h>
int main()
{
    double arr[] = {1, 32, 36, 45, 58, 69, 70, 78,100};
    int n;
    
    n = sizeof(arr) / sizeof(arr[0]);
    printf("Size of the array is: %d\n", n);
    return 0;
}

