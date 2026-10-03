#include<stdio.h>
int main()
{
    int n,i;
    bool is_prime=true;
    printf("enter the number");
    scanf("%d",&n);
    if (n<=1)
    {
        is_prime=false;
        printf("it is not a prime number");
        return 0;
    }
    for(i=2;i<n^(1/2);i++)
    {
        if(n%i==0)
        {
            is_prime=false;
            printf("it is not a prime number");
            break;
        }
    }
    if(is_prime==true){
    printf("it is a prime number");

    }

}