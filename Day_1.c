// Q1. WAP to calculate sum of first N natural numbers
#include<stdio.h>
int main () {
    int i,n,num ;
    printf("enter natural no.:");
    scanf("%d",&n);

    num=0;
    for(i=1;i<=n;i++)
    {
        num=num+i;
    }
    printf("Sum of first %d natural no.: %d",n,num);

    return 0;
    
}

// Q2. WAP to print multiplication table of a given no.
#include<stdio.h>
int main () {
    int i,n ;
    printf("enter no. for table= ");
    scanf("%d",&n);

    printf("Table of %d : \n ",n);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n ", n,i,(n*i) );
    }
    return 0;

}

// Q3.WAP to find factorial of a no. 
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

// Q4. WAP to count digits in a no. 
#include<stdio.h>
int main () {
    int n , num , count=0 ;
    printf("enter whole no.=");
    scanf("%d",&n);
    num = n;

    while(n>0)
    {
        count++;
        n = n/10 ;
    }
    printf("Total digit in %d = %d",num,count);

    return 0;
}
