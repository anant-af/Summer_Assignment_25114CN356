// WAP to check whether a no. is prime

#include<stdio.h>
int main () {
    int i ,n ,prime ;
    printf("enter no.=");
    scanf("%d",&n);
    prime = 1;

    if(n<=1)
    {
        printf("%d is not prime no.",n);
    }

    else {
        for(i=2 ; i <= n/2 ; i++) 
        {
            if(n%i==0)
            {
                prime = 0;
                break ;
            }
        }

        if(prime==0)
        {
            printf("%d is not prime",n);
        }

        else 
        {
            printf("%d is prime",n);
        }

    }
    return 0;

}