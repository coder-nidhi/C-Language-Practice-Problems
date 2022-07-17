#include <stdio.h>

int main()
{
    int arr[4] = {1, 3, 5, 7};
    printf("The address of first element of the array is %d \n", &arr[0]);
    printf("The address of second element of the array is %d \n", &arr[1]);
    printf("The address of third element of the array is %d \n", &arr[2]);
    printf("The address of fourth element of the array is %d \n", &arr[3]);

    return 0;
}

