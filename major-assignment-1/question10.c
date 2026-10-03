#include <stdio.h>
int main()
{
    int quantity;
    float value, gross;
    printf("how mant laptops did he sell");
    scanf("%d", &quantity);
    printf("value of each laptop= ");
    scanf("%f", &value);
    
    
    gross = 1500 + quantity*200 + (quantity*value)*0.02;
    printf("the gross salary is %.2f", gross);
}