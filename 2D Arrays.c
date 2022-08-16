#include <stdio.h>

int main()
{
    int marks[2][3];
    
    marks [0] [0] = 98;
    marks [0] [1] = 80;
    marks [0] [2] = 91;
    
    marks [1] [0] = 66;
    marks [1] [1] = 89;
    marks [1] [2] = 93;
    
    printf("%d", marks [0] [0]);

    return 0;
}

