#include <stdio.h>
int main()
{
    int quantity, choice;
    float total_sales, gross, bonus, comm;
    printf("how mant products did he sell");
    scanf("%d", &quantity);
    printf("enter the total sales value ");
    scanf("%f", &total_sales);
    if (quantity <= 20)
    {
        bonus = quantity * 150;
    }
    else if (20 < quantity <= 40)
    {
        bonus = quantity * 200;
    }
    else if (40 < quantity)
    {
        bonus = quantity * 250;
    }
    printf("select what product did he sell\n1.Laptop\n2.Tablet\n3.Accessory\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        comm = total_sales * 0.02;
        break;
    case 2:
        comm = total_sales * 0.015;
        break;
    case 3:
        comm = total_sales * 0.01;
        break;
    }

    gross = 1500 + bonus + comm;
    printf("the gross salary is %.2f", gross);
}