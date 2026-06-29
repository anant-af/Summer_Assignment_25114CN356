// WAP to develop complete mini project using arrays, strings and functions

#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

struct Student s[100];
int n = 0;

void addStudent()
{
    printf("Enter Roll No: ");
    scanf("%d", &s[n].roll);

    printf("Enter Name: ");
    scanf("%s", s[n].name);

    printf("Enter Marks: ");
    scanf("%f", &s[n].marks);

    n++;

    printf("Student added successfully.\n");
}

void displayStudents()
{
    int i;

    if(n == 0)
    {
        printf("No Records Found.\n");
        return;
    }

    printf("\nStudent Records:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRoll No : %d", s[i].roll);
        printf("\nName    : %s", s[i].name);
        printf("\nMarks   : %.2f\n", s[i].marks);
    }
}

void searchStudent()
{
    int i, roll;

    printf("Enter Roll No to search: ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            printf("\nStudent Found\n");
            printf("Roll No : %d\n", s[i].roll);
            printf("Name    : %s\n", s[i].name);
            printf("Marks   : %.2f\n", s[i].marks);
            return;
        }
    }

    printf("Student Not Found.\n");
}

void deleteStudent()
{
    int i, j, roll;

    printf("Enter Roll No to delete: ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            for(j = i; j < n - 1; j++)
            {
                s[j] = s[j + 1];
            }

            n--;

            printf("Student deleted successfully.\n");
            return;
        }
    }

    printf("Student Not Found.\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                deleteStudent();
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 5);

    return 0;
}