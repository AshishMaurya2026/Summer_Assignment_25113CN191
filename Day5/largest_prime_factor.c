#include <stdio.h>

int main()
{
    int num, i, j, flag;
    int largest = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 2; i <= num; i++)
    {
        if(num % i == 0)
        {
            flag = 1;

            for(j = 2; j < i; j++)
            {
                if(i % j == 0)
                {
                    flag = 0;
                    break;
                }
            }

            if(flag)
                largest = i;
        }
    }

    printf("Largest Prime Factor = %d", largest);

    return 0;
}
