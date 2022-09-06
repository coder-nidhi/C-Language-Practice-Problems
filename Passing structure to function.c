#include <stdio.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

void printInfo(struct student s1);

int main()
{
    struct student s1 = {1562, 9.3, "Nidhi"};
    printInfo(s1);
    
    return 0;
}

void printInfo(struct student s1){
    printf("    Student Info \n");
    
    printf("Student roll number : %d\n", s1.roll);
    printf("Student cgpa : %f\n", s1.cgpa);
    printf("Student name : %s\n", s1.name);
}
