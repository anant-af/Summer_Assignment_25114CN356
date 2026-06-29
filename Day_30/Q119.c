// WAP to create mini employee management systen

#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int n = 0, choice, i, id, found = 0;

    do
    {
        printf("\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &emp[n].id);

                printf("Enter Employee Name: ");
                scanf("%s", emp[n].name);

                printf("Enter Employee Salary: ");
                scanf("%f", &emp[n].salary);

                n++;

                printf("Employee added successfully.\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No employee records found.\n");
                }
                else
                {
                    printf("\nEmployee Records:\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("\nEmployee ID : %d", emp[i].id);
                        printf("\nName        : %s", emp[i].name);
                        printf("\nSalary      : %.2f\n", emp[i].salary);
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(emp[i].id == id)
                    {
                        printf("\nEmployee Found:\n");
                        printf("Employee ID : %d\n", emp[i].id);
                        printf("Name        : %s\n", emp[i].name);
                        printf("Salary      : %.2f\n", emp[i].salary);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Employee not found.\n");
                }

                break;

            case 4:
                printf("Thank you for using the Employee Management System.\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 4);

    return 0;
}