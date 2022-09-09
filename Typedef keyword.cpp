#include <iostream>
#include <string.h>
using namespace std;

typedef struct student{
    int roll;
    float cgpa;
    char name[100];
}stu;

typedef struct computerEngineeringstudent{
    int roll;
    float cgpa;
    char name[100];
}coe;

int main()
{
    coe s1;
    s1.roll = 222;
    s1.cgpa = 9.2;
    strcpy(s1.name, "Nidhi");
    
    printf("Student name is %s\n", s1.name);

    return 0;
}