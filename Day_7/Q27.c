// WAP to recursive sum of digits 

#include<stdio.h>
//sod means sum of digit

int sod (int); // Declaration

int main () {
    int n;
    printf("enter no.:");
    scanf("%d",&n);

    printf("Sum of all digit of %d = %d",n,sod(n)); //Calling
    return 0;
}

int sod (int x)  // Definition
{
    if(x==0)
    {
        return (0) ;
    }

    else 
    {
        return ( (x%10) + sod(x/10) ); 
    }
}