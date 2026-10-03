#include <stdio.h>

int main()
{
    int sum = 0, n, num;
    int i = 1;
    printf("enter the maximum count n: \n");
    scanf("%d", &n);
    printf("Enter numbers one by one :\n");
    while (i <= n)
    {
        printf("");
        scanf("%d", &num);
        if (num < 0)
        {
            break;
        }
        sum += num;
        i++;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
