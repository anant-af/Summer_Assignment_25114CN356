// WAP to create library management system

#include <stdio.h>

int main()
{
    int choice;
    int bookId = 101;
    char bookName[50] = "C Programming";
    int available = 1;

    do
    {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Display Book\n");
        printf("2. Issue Book\n");
        printf("3. Return Book\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nBook ID   : %d", bookId);
                printf("\nBook Name : %s", bookName);

                if(available)
                    printf("\nStatus    : Available\n");
                else
                    printf("\nStatus    : Issued\n");
                break;

            case 2:
                if(available)
                {
                    available = 0;
                    printf("Book issued successfully.\n");
                }
                else
                {
                    printf("Book is already issued.\n");
                }
                break;

            case 3:
                if(!available)
                {
                    available = 1;
                    printf("Book returned successfully.\n");
                }
                else
                {
                    printf("Book is already available.\n");
                }
                break;

            case 4:
                printf("Thank you for using the Library Management System.\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 4);

    return 0;
}