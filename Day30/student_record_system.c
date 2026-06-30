#include <stdio.h>

int main()
{
    int roll[5], i;
    char name[5][50];
    float marks[5];

    for(i = 0; i < 5; i++)
    {
        printf("Enter Roll, Name and Marks: ");
        scanf("%d %s %f", &roll[i], name[i], &marks[i]);
    }

    printf("\nStudent Records\n");

    for(i = 0; i < 5; i++)
    {
        printf("Roll: %d  Name: %s  Marks: %.2f\n",
               roll[i], name[i], marks[i]);
    }

    return 0;
}