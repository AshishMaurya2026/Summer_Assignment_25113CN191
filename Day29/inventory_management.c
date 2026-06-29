#include <stdio.h>

int main()
{
    int id, quantity;
    char name[50];
    float price;

    printf("Enter Product ID: ");
    scanf("%d", &id);

    printf("Enter Product Name: ");
    scanf("%s", name);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Price: ");
    scanf("%f", &price);

    printf("\nInventory Details\n");
    printf("ID       : %d\n", id);
    printf("Name     : %s\n", name);
    printf("Quantity : %d\n", quantity);
    printf("Price    : %.2f\n", price);

    return 0;
}
