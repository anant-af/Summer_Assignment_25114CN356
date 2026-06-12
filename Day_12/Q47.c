// WAP to write function for fibonacci series

#include<stdio.h>

void fibonacci (int) ; // Declaration

int main () {
    int n ;
    printf("Enter no. of term :");
    scanf("%d",&n);

    fibonacci (n) ; // Calling
    return 0 ;
}

void fibonacci (int x) // Definition
{
    int a=0, b=1 , next, i ;
    printf("Fibonacci series of %d term : ");

    for(i=1 ; i<=x ; i++)
    {
        if(i==1)
        {
            next=a ;
        }
        else if (i==2)
        {
            next=b ;
        }
        else
        {
            next = a+b;
            a=b ;
            b=next ;
        }

        printf("%d ",next);
    }
}