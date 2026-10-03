#include <stdio.h>

int main() {
    int num,i;
    int sum = 0;

    printf("Enter numbers one by one (enter 0 to stop):\n");
   while(i!=0)
   {
    printf("");
    scanf("%d",&i);
    sum+=i;
   }

    printf("Sum = %d\n", sum);

    return 0;
}
