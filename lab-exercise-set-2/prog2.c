#include<stdio.h>
int main()
{
    int num,i,sum;
    sum=0;
    printf("enter positive integer \n");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        printf("%d\n",i);
        sum+=i;
    }
    printf("The SUM is %d",sum);

}