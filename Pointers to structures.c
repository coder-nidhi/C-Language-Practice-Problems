#include <stdio.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student s1 = {1562, 9.3, "Nidhi"};

    struct student *ptr = &s1;
    printf("Student roll number = %d\n", (*ptr).roll);
    
    return 0;
}


