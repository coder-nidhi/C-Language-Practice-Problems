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
    printf("Student name = %s",s1.name);

    return 0;
}

