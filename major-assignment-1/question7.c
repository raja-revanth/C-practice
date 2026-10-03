#include<stdio.h>
int main()
{
 int course;
 float marks;
 printf("Enter course \n1.science\n2.commerce\n3.arts\n");
 scanf("%d",&course);
 printf("enter student marks");
 scanf("%f",&marks);
 switch(course)
 {
 case 1:
 case 2:
 if(marks>=75)
 {
    printf("grade A");
 }
 else if(60<=marks<=74)
 {
    printf("grade B");
 }
 else if(40<=marks<=59)
 {
    printf("grade C");
 }
 else if(marks<=35)
 {
    printf("fail");
 }
 else
 {
    printf("invalid input");
 }
 break;

 case 3:
 if(marks>=70)
 {
    printf("grade A");
 }
 else if(55<=marks<=69)
 {
    printf("grade B");
 }
 else if(35<=marks<=54)
 {
    printf("grade C");
 }
 else if(marks<=35)
 {
    printf("fail");
 }
 else
 {
    printf("invalid input");
 }
 break;
}
}