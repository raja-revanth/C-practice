#include<stdio.h>
int main()
{
    float ppk, total, quantity;
    printf("enter price of 1kg rice:");
    scanf("%f",&ppk);
    printf("enter number of kgs of rice bought");
    scanf("%f",&quantity);
    total=ppk*quantity;
    printf("%.2f",total);
    total-=total*0.05;
    total+=total*0.02;
    printf("\n%.2f",total);
}