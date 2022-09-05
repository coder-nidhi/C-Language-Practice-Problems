#include <stdio.h>
#include <string.h>

struct student 
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student ece[100];
    ece[0].roll = 1165;
    ece[0].cgpa = 7.9;
    strcpy(ece[0].name, "Nidhi");
    
    printf("Name = %s\n", ece[0].name);
    printf("cgpa = %f\n",ece[0].cgpa);
    printf("Roll number = %d\n",ece[0].roll);
    return 0;
}

