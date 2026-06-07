// WAP to recursive fibonacci

#include<stdio.h>

int fib (int) ; // declaration

int main () {
    int n, i ;
    printf("enter no. of term for fibonacci series : ");
    scanf("%d",&n);

    printf("fibonacci series upto %d=",n);
    for(i=1;i<=n;i++)
    {
        printf(" ");
        printf("%d",fib(i)); //calling
    }
    return 0;
}


int fib (int x) // Definition
{
    if(x==1)
    {
        return (0);
    }

    else if (x==2)
    {
        return (1);
    }

    else 
    {
          return  (fib(x-1) + fib(x-2)) ; 

    }

}