// WAP to write function to find factorial

#include<stdio.h>

void factorial (int) ; // Declaration 

int main () {
    int n ; 
    printf("enter no.:");
    scanf("%d",&n);
    factorial(n); // Calling 

    return 0 ;
}

void factorial (int x) // Definition
{
    int fact , i ;
    fact = 1;

    if(x<0)
    {
        printf("Factorial of entered no can't exist");
    }
    else if (x==0)
    {
        printf("Factorial of %d = %d",x,fact);
    }

    else 
    {
        for(i=1 ; i<=x ; i++)
        {
            fact = fact*i ; 
        }
        printf("Factorial of %d = %d",x,fact);
    }
}