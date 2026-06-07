// WAP to recursive factorial
#include<stdio.h>

int factorial (int) ; // declkaration

int main () {
    int n, fact;
    printf("enter no.:");
    scanf("%d",&n);

    if(n<0)
    {
        printf("factorial can't exist");
    }

    else
    {
        fact=factorial(n); // calling
        printf("factorial of %d = %d",n,fact);
    }
    return 0;
}
    
int factorial (int x) //Definition
{
    if(x==0)
    {
        return(1);
    }
    
    else
    {
        return ( x * factorial(x-1));    
    }
}