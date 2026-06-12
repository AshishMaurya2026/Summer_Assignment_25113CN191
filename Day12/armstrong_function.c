#include <stdio.h>

int isArmstrong(int num)
{
    int original = num, digit, sum = 0;

    while(num != 0)
    {
        digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }

    return original == sum;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isArmstrong(num))
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}