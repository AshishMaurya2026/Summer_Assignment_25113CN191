#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice, i = 0;

    printf("Enter string: ");
    scanf("%s", str);

    printf("1.Length\n2.Uppercase\n3.Reverse\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            while(str[i] != '\0')
                i++;

            printf("Length = %d", i);
            break;

        case 2:
            for(i = 0; str[i] != '\0'; i++)
            {
                if(str[i] >= 'a' && str[i] <= 'z')
                    str[i] -= 32;
            }

            printf("%s", str);
            break;

        case 3:
            for(i = strlen(str) - 1; i >= 0; i--)
                printf("%c", str[i]);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}