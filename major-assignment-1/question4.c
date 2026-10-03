#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a value ");
    scanf("%d",&a);
    printf("enter b value ");
    scanf("%d",&b);
    printf("enter c value ");
    scanf("%d",&c);
    if((a<=0)||(b<=0)||(c<=0))
    {
        printf("invalid input");
    }
    else if((a<b+c)&&(b<a+c)&&(c<a+b))
    {
        if((a==b)&&(b==c))
        {
            printf("it is a eqilateral triangle");
        }
        else if((a!=b)&&(b!=c)&&(c!=a))
        {
            printf("it is a scalen triangle");
        }
        else
        {
            printf("it is an isosceles triangle");
        }
    }
    else
    {
        printf("it is not a triangle");
    }
}