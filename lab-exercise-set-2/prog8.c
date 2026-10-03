// 8752
// 4 digits
// 8^4 +7^4+5^4+2^4
// if 8^4 +7^4+5^4+2^4 ==8752 armstrong or its not an amstrong
#include <stdio.h>
#include <math.h>
int main()
{
    int n,digit=0,temp,remainder=0,initial,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("the given number is invalid");
        return 0;
    }
    temp=n;
    while(n!=0)
    {
        n=n/10;
        digit++;
    }
    n=temp;
    initial=n;
    while(initial!=0)
    {
        remainder=initial%10;
        initial=initial/10;
        sum += pow(remainder, digit);    
    }
    if(n==sum)
    {
        printf("it is an armstrong number");
    }
    else
    {
        printf("it is not an armstrong number");
    }
}