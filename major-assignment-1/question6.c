#include<stdio.h>
int main()
{
    float num1,num2,result;
    int choice;
    printf("enter first number");
    scanf("%f",&num1);
    printf("enter second number");
    scanf("%f",&num2);
    printf("chose what u want to perform\n 1.Addition\n 2.subtraction\n 3.multiplication\n 4.division\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        result=num1+num2;
        printf("%.2f",result);
        break;
    case 2:
        result=num1-num2;
        printf("%.2f",result);
        break;
    case 3:
        result=num1*num2;
        printf("%.2f",result);
        break;
    case 4:
        result=num1/num2;
        printf("%.2f",result);
        break;
    default:
        break;
    }
}