// WAP to find factorial of a no. 

#include<stdio.h>
int main () {
    int i,n,fact=1 ;
    printf("enter no.= ");
    scanf("%d",&n);

    if(n<0)
    {
        printf("enter +ve no.");
    }

    else if (n==0) 
    {
        printf("factorial of %d = %d",n,fact);
    }

    else {
        for(i=1;i<=n;i++)
        {
            fact = fact * i ;
        }
        printf("factorial of %d = %d", n,fact);
    }
    return 0;
}
