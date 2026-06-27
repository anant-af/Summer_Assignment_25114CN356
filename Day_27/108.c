// WAP to create marksheet generation system

#include <stdio.h>

struct student
{
    int roll;
    char name[50];
    float m1, m2, m3, total, percentage;
};

int main()
{
    struct student s[100];
    int n, i, choice, search, found = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    do
    {
        printf("\n----- Marksheet Generation System -----");
        printf("\n1. Add Student Marks");
        printf("\n2. Display Marksheet");
        printf("\n3. Search Student by Roll Number");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                for(i = 0; i < n; i++)
                {
                    printf("\nEnter details of Student %d\n", i + 1);

                    printf("Enter Roll Number: ");
                    scanf("%d", &s[i].roll);

                    printf("Enter Name: ");
                    scanf("%s", s[i].name);

                    printf("Enter Marks of Subject 1: ");
                    scanf("%f", &s[i].m1);

                    printf("Enter Marks of Subject 2: ");
                    scanf("%f", &s[i].m2);

                    printf("Enter Marks of Subject 3: ");
                    scanf("%f", &s[i].m3);

                    s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
                    s[i].percentage = s[i].total / 3;
                }
                break;

            case 2:
                printf("\nStudent Marksheet:\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nRoll Number : %d", s[i].roll);
                    printf("\nName        : %s", s[i].name);
                    printf("\nSubject 1   : %.2f", s[i].m1);
                    printf("\nSubject 2   : %.2f", s[i].m2);
                    printf("\nSubject 3   : %.2f", s[i].m3);
                    printf("\nTotal Marks : %.2f", s[i].total);
                    printf("\nPercentage  : %.2f%%\n", s[i].percentage);
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
                        printf("Subject 1   : %.2f\n", s[i].m1);
                        printf("Subject 2   : %.2f\n", s[i].m2);
                        printf("Subject 3   : %.2f\n", s[i].m3);
                        printf("Total Marks : %.2f\n", s[i].total);
                        printf("Percentage  : %.2f%%\n", s[i].percentage);

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