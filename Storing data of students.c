#include <stdio.h>
#include <string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student s1;
    s1.roll = 1123;
    s1.cgpa = 9.7;
    //s1.name = "nidhi";
    strcpy(s1.name, "nidhi");
    
    printf("Student name = %s\n", s1.name);
    printf("Student roll no. = %d\n", s1.roll);
    printf("Student name = %f\n", s1.cgpa);

    struct student s2;
    s2.roll = 1124;
    s2.cgpa = 8.9;
    //s2.name = "tulsi";
    strcpy(s2.name, "tulsi");
    
    printf("Student name = %s\n", s2.name);
    printf("Student roll no. = %d\n", s2.roll);
    printf("Student name = %f\n", s2.cgpa);

    struct student s3;
    s3.roll = 1125;
    s3.cgpa = 9.9;
    //s1.name = "ishan";
    strcpy(s3.name, "ishan");
    
    printf("Student name = %s\n", s3.name);
    printf("Student roll no. = %d\n", s3.roll);
    printf("Student name = %f\n", s3.cgpa);

}


