#include<stdio.h>
int main(){
    int units,amount;
    printf("enter number of units consumed");
    scanf("%d",&units);
    if(units<=100)
    {
        amount=units*1.5;
        printf("%d",amount);
    }
    else if(units<=200)
    {
        amount=100*1.5+(units-100)*2.5;
        printf("%d",amount);
    }
    else if(units<=300)
    {
        amount=100*1.5+100*2.5+(units-200)*4;
        printf("%d",amount);
    }
    else if(units<=0)
    {
        printf("invalid input");
    }
    else
    {
        amount=100*1.5+100*2.5+100*4+(units-300)*6;
        printf("%d",amount);
    }
}