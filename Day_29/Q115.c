// WAP to create menu-driven string operations system

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int choice;

    printf("Enter first string: ");
    gets(str1);

    do
    {
        printf("\n===== MENU-DRIVEN STRING OPERATIONS =====\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Copy String\n");
        printf("4. Concatenate Strings\n");
        printf("5. Compare Strings\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice)
        {
            case 1:
                printf("Length of string = %d\n", strlen(str1));
                break;

            case 2:
                strrev(str1);
                printf("Reversed String = %s\n", str1);
                break;

            case 3:
                strcpy(str2, str1);
                printf("Copied String = %s\n", str2);
                break;

            case 4:
                printf("Enter second string: ");
                gets(str2);

                strcat(str1, str2);
                printf("Concatenated String = %s\n", str1);
                break;

            case 5:
                printf("Enter second string: ");
                gets(str2);

                if(strcmp(str1, str2) == 0)
                    printf("Both strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 6:
                printf("Thank you for using the String Operations System.\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 6);

    return 0;
}