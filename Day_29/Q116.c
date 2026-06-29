// WAP to create inventory management system 

#include <stdio.h>

int main()
{
    int choice;
    int itemId = 101;
    char itemName[50] = "Laptop";
    int quantity = 20, stock;

    do
    {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. View Item\n");
        printf("2. Add Stock\n");
        printf("3. Remove Stock\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nItem ID   : %d", itemId);
                printf("\nItem Name : %s", itemName);
                printf("\nQuantity  : %d\n", quantity);
                break;

            case 2:
                printf("Enter quantity to add: ");
                scanf("%d", &stock);

                quantity += stock;

                printf("Stock added successfully.\n");
                printf("Current Quantity = %d\n", quantity);
                break;

            case 3:
                printf("Enter quantity to remove: ");
                scanf("%d", &stock);

                if(stock <= quantity)
                {
                    quantity -= stock;
                    printf("Stock removed successfully.\n");
                    printf("Current Quantity = %d\n", quantity);
                }
                else
                {
                    printf("Insufficient Stock.\n");
                }
                break;

            case 4:
                printf("Thank you for using the Inventory Management System.\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 4);

    return 0;
}