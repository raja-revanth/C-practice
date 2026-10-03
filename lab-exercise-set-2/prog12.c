#include<stdio.h>
int main()
{
    int n,i,j;
    int a[100]={0};
    printf("enter the number of rows: ");
    scanf("%d",&n);
    a[0]=1;
    for(i=0;i<n;i++)
    {
        for(j=i;j>0;j--)
        {
            a[j]=a[j]+a[j-1];
        }
        for(j=0;j<=i;j++)
        {
            printf("%d ",a[j]);
        }
        printf("\n");    
    }
}