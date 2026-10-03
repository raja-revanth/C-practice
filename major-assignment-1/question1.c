#include <stdio.h>
int main()
{   
    int a=-2;
    int roll;
    float height;
    char grade;
    double cgpa;

    printf("enter student roll number:");
    scanf("%d", &roll);

    printf("enter student height in meters:");
    scanf("%f", &height);

    printf("enter stuydent grade:");
    scanf(" %c", &grade);

    printf("enter student CGPA:");

    scanf("%lf", &cgpa);
    printf("\nroll number:%d\nHeight:%.2f\nGrade:%c\nCGPA:%.2lf", roll, height, grade, cgpa);
    return 0;
}