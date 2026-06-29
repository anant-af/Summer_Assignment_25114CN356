// WAP to create mini library system 

#include <stdio.h>

struct Book
{
    int id;
    char name[50];
    int available;
};

int main()
{
    struct Book b[100];
    int n = 0, choice, i, id, found = 0;

    do
    {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &b[n].id);

                printf("Enter Book Name: ");
                scanf("%s", b[n].name);

                b[n].available = 1;
                n++;

                printf("Book added successfully.\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No books available.\n");
                }
                else
                {
                    printf("\nBook Records:\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("\nBook ID : %d", b[i].id);
                        printf("\nBook Name : %s", b[i].name);

                        if(b[i].available)
                            printf("\nStatus : Available\n");
                        else
                            printf("\nStatus : Issued\n");
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to issue: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(b[i].id == id)
                    {
                        found = 1;

                        if(b[i].available)
                        {
                            b[i].available = 0;
                            printf("Book issued successfully.\n");
                        }
                        else
                        {
                            printf("Book is already issued.\n");
                        }
                        break;
                    }
                }

                if(found == 0)
                    printf("Book not found.\n");

                break;

            case 4:
                printf("Enter Book ID to return: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(b[i].id == id)
                    {
                        found = 1;

                        if(!b[i].available)
                        {
                            b[i].available = 1;
                            printf("Book returned successfully.\n");
                        }
                        else
                        {
                            printf("Book is already available.\n");
                        }
                        break;
                    }
                }

                if(found == 0)
                    printf("Book not found.\n");

                break;

            case 5:
                printf("Thank you for using the Mini Library System.\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 5);

    return 0;
}