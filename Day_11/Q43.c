// WAP to write function to check prime 
#include<stdio.h>

void prime (int) ; // Declaration

int main () {
    int n ;
    printf("enter no.:");
    scanf("%d",&n);

    prime(n) ; // Calling
    return 0 ;
}

void prime (int x) // Definition
{
    int prime1 = 1 , i ;

    if(x<=1)
    {
        printf("Prime can't exist");
    }

    else 
    {
        for(i=2 ; i<=(x/2) ; i++)
        {
            if(x%i==0)
            {
                prime1 = 0 ;
                break ;
            }
        }

        if(prime1==0)
        {
            printf("%d is not prime no.",x);
        }
        else 
        {
            printf("%d is prime no.",x);
        }
    }
}