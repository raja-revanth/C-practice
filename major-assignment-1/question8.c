#include<stdio.h>
int main(){
    float fare = 50,distance;
    int time;
    printf("enter distance of booking");
    scanf("%f",&distance);
    printf("enter hour of booking");
    scanf("%d",&time);
    if(distance<=10)
    {
        fare+=distance*12;
    }
    else if(10<distance<=25)
    {
        fare += 10*12+(distance-10)*10;
    }
    else if(25<distance)
    {
        fare += 10*12+15*10+(distance-25)*8;
    }
    if((time<=5)||(time==23)||(time==24))
    {
        fare+=fare*0.25;
        printf("your tatotal fare is %.2f",fare);
    }
    else
    {
        printf("your tatotal fare is %.2f",fare);
    }
}