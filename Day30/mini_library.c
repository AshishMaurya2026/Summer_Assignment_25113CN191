#include <stdio.h>

int main()
{
    int bookId[3], i;
    char bookName[3][50];

    for(i = 0; i < 3; i++)
    {
        printf("Enter Book ID and Name: ");
        scanf("%d %s", &bookId[i], bookName[i]);
    }

    printf("\nLibrary Records\n");

    for(i = 0; i < 3; i++)
    {
        printf("Book ID: %d  Book Name: %s\n",
               bookId[i], bookName[i]);
    }

    return 0;
}