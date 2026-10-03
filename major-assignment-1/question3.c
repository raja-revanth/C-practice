#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a value ");
    scanf("%d",&a);
    printf("enter b value ");
    scanf("%d",&b);
    printf("enter c value ");
    scanf("%d",&c);
    printf("%d",(a==b)&&(b==c)?1:0);
    printf("\n%d",(a<0)||(b<0)||(c<0)?1:0);
    printf("\n%d",(a>b)&&(a>c)?1:0);
}