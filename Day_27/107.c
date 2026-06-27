// WAP to create salary management system

#include <stdio.h>

struct employee
{
    int id;
    char name[50];
    float basic, hra, da, gross;
};

int main()
{
    struct employee e[100];
    int n, i, choice, search, found = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    do
    {
        printf("\n----- Salary Management System -----");
        printf("\n1. Add Employee Salary Details");
        printf("\n2. Display Salary Details");
        printf("\n3. Search Employee by ID");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                for(i = 0; i < n; i++)
                {
                    printf("\nEnter details of Employee %d\n", i + 1);

                    printf("Enter Employee ID: ");
                    scanf("%d", &e[i].id);

                    printf("Enter Employee Name: ");
                    scanf("%s", e[i].name);

                    printf("Enter Basic Salary: ");
                    scanf("%f", &e[i].basic);

                    printf("Enter HRA: ");
                    scanf("%f", &e[i].hra);

                    printf("Enter DA: ");
                    scanf("%f", &e[i].da);

                    e[i].gross = e[i].basic + e[i].hra + e[i].da;
                }
                break;

            case 2:
                printf("\nEmployee Salary Details:\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nEmployee ID : %d", e[i].id);
                    printf("\nName         : %s", e[i].name);
                    printf("\nBasic Salary : %.2f", e[i].basic);
                    printf("\nHRA          : %.2f", e[i].hra);
                    printf("\nDA           : %.2f", e[i].da);
                    printf("\nGross Salary : %.2f\n", e[i].gross);
                }
                break;

            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &search);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(e[i].id == search)
                    {
                        printf("\nEmployee Found\n");
                        printf("Employee ID : %d\n", e[i].id);
                        printf("Name         : %s\n", e[i].name);
                        printf("Basic Salary : %.2f\n", e[i].basic);
                        printf("HRA          : %.2f\n", e[i].hra);
                        printf("DA           : %.2f\n", e[i].da);
                        printf("Gross Salary : %.2f\n", e[i].gross);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Employee Record Not Found.\n");
                }
                break;

            case 4:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}