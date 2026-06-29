// WAP to create menu-driven array operations system

#include <stdio.h>

int main()
{
    int a[100], n, i;
    int choice, pos, value;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    do
    {
        printf("\n===== MENU-DRIVEN ARRAY OPERATIONS =====\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Search Element\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Array Elements: ");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;

            case 2:
                printf("Enter position (1-%d): ", n + 1);
                scanf("%d", &pos);

                printf("Enter value: ");
                scanf("%d", &value);

                if(pos >= 1 && pos <= n + 1)
                {
                    for(i = n; i >= pos; i--)
                    {
                        a[i] = a[i - 1];
                    }

                    a[pos - 1] = value;
                    n++;

                    printf("Element inserted successfully.\n");
                }
                else
                {
                    printf("Invalid Position.\n");
                }
                break;

            case 3:
                printf("Enter position (1-%d): ", n);
                scanf("%d", &pos);

                if(pos >= 1 && pos <= n)
                {
                    for(i = pos - 1; i < n - 1; i++)
                    {
                        a[i] = a[i + 1];
                    }

                    n--;

                    printf("Element deleted successfully.\n");
                }
                else
                {
                    printf("Invalid Position.\n");
                }
                break;

            case 4:
                printf("Enter element to search: ");
                scanf("%d", &value);

                for(i = 0; i < n; i++)
                {
                    if(a[i] == value)
                    {
                        printf("Element found at position %d\n", i + 1);
                        break;
                    }
                }

                if(i == n)
                {
                    printf("Element not found.\n");
                }

                break;

            case 5:
                printf("Thank you for using the Array Operations System.\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 5);

    return 0;
}