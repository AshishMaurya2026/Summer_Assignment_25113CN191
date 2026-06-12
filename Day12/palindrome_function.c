#include <stdio.h>

int isPalindrome(int num)
{
    int original = num, reverse = 0, digit;

    while(num != 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    return original == reverse;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPalindrome(num))
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}
