// WAP to create ticket booking system 

#include <stdio.h>

int main()
{
    int choice, tickets = 50, book, cancel;

    do
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Check Available Tickets\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Available Tickets = %d\n", tickets);
                break;

            case 2:
                printf("Enter number of tickets to book: ");
                scanf("%d", &book);

                if(book <= tickets)
                {
                    tickets = tickets - book;
                    printf("Ticket booked successfully.\n");
                    printf("Remaining Tickets = %d\n", tickets);
                }
                else
                {
                    printf("Not enough tickets available.\n");
                }
                break;

            case 3:
                printf("Enter number of tickets to cancel: ");
                scanf("%d", &cancel);

                tickets = tickets + cancel;

                printf("Ticket cancelled successfully.\n");
                printf("Available Tickets = %d\n", tickets);
                break;

            case 4:
                printf("Thank you for using the Ticket Booking System.\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 4);

    return 0;
}