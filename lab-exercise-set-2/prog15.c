// revanth
// 0123456
// madam
// 01234

#include <stdio.h>

int main()
{
    char str[100];
    int i, length, palindrome = 1;

    printf("Enter a word: ");
    scanf("%s", str);

    length = strlen(str);

    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1)
        printf("%s is a palindrome.\n", str);
    else
        printf("%s is not a palindrome.\n", str);
}