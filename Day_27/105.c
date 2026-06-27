// WAP to create student record management system

#include <stdio.h>

struct student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct student s[100];
    int n, i, choice, search, found = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    do
    {
        printf("\n----- Student Record Management System -----");
        printf("\n1. Add Student Records");
        printf("\n2. Display Student Records");
        printf("\n3. Search Student by Roll Number");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                for(i = 0; i < n; i++)
                {
                    printf("\nEnter details of student %d\n", i + 1);

                    printf("Enter Roll Number: ");
                    scanf("%d", &s[i].roll);

                    printf("Enter Name: ");
                    scanf("%s", s[i].name);

                    printf("Enter Marks: ");
                    scanf("%f", &s[i].marks);
                }
                break;

            case 2:
                printf("\nStudent Records:\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nRoll Number : %d", s[i].roll);
                    printf("\nName        : %s", s[i].name);
                    printf("\nMarks       : %.2f\n", s[i].marks);
                }
                break;

            case 3:
                printf("Enter Roll Number to search: ");
                scanf("%d", &search);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(s[i].roll == search)
                    {
                        printf("\nStudent Found\n");
                        printf("Roll Number : %d\n", s[i].roll);
                        printf("Name        : %s\n", s[i].name);
                        printf("Marks       : %.2f\n", s[i].marks);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Student Record Not Found.\n");
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