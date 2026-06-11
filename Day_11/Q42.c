// WAP to write function to find maximum

#include<stdio.h>
void max (int , int) ; // Declaration 

int main () {
    int a, b;

    printf("enter 1st no. :");
    scanf("%d",&a);
    printf("enter 2nd no. :");
    scanf("%d",&b);

    max(a,b); // Calling

    return 0 ;
}

void max (int x, int y) // Definition
{
    if(x>y)
    {
        printf("Maximum = %d",x);
    }
    else if (x<y)
    {
        printf("Maximum = %d",y);
    }
    else 
    {
        printf("Entered no. are equal");
    }

}