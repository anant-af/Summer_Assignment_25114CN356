// WAP to create contact management system

#include <stdio.h>
#include <string.h>

int main()
{
    int choice;
    char name[50] = "";
    char phone[15] = "";

    do
    {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. View Contact\n");
        printf("3. Delete Contact\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice)
        {
            case 1:
                printf("Enter Name: ");
                gets(name);

                printf("Enter Phone Number: ");
                gets(phone);

                printf("Contact added successfully.\n");
                break;

            case 2:
                if(strlen(name) == 0)
                {
                    printf("No contact found.\n");
                }
                else
                {
                    printf("\nName : %s\n", name);
                    printf("Phone: %s\n", phone);
                }
                break;

            case 3:
                name[0] = '\0';
                phone[0] = '\0';
                printf("Contact deleted successfully.\n");
                break;

            case 4:
                printf("Thank you for using the Contact Management System.\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 4);

    return 0;
}