#include <stdio.h>

int main()
{
    char name[50];
    char phone[15];

    printf("Enter Contact Name: ");
    scanf("%s", name);

    printf("Enter Phone Number: ");
    scanf("%s", phone);

    printf("\nContact Details\n");
    printf("Name  : %s\n", name);
    printf("Phone : %s\n", phone);

    return 0;
}
