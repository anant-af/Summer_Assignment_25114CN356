// WAP to create employee management system

#include <stdio.h>

struct employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct employee e[100];
    int n, i, choice, search, found = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    do
    {
        printf("\n----- Employee Management System -----");
        printf("\n1. Add Employee Records");
        printf("\n2. Display Employee Records");
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

                    printf("Enter Salary: ");
                    scanf("%f", &e[i].salary);
                }
                break;

            case 2:
                printf("\nEmployee Records:\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nEmployee ID : %d", e[i].id);
                    printf("\nName        : %s", e[i].name);
                    printf("\nSalary      : %.2f\n", e[i].salary);
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
                        printf("Name        : %s\n", e[i].name);
                        printf("Salary      : %.2f\n", e[i].salary);
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