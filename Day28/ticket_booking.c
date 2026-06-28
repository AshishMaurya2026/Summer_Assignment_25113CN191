#include <stdio.h>

int main()
{
    char name[50];
    int tickets;
    float price = 500, total;

    printf("Enter Passenger Name: ");
    scanf("%s", name);

    printf("Enter Number of Tickets: ");
    scanf("%d", &tickets);

    total = tickets * price;

    printf("\nBooking Details\n");
    printf("Passenger : %s\n", name);
    printf("Tickets   : %d\n", tickets);
    printf("Total Fare: %.2f", total);

    return 0;
}