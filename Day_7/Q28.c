// WAP to recursive reverse no.

#include<stdio.h>

int rev (int) ; // Declaration
int r = 0;

int main() {
    int n ;
    printf("enter no:");
    scanf("%d",&n);

    printf("Reverse of %d = %d",n,rev(n)); // Callimg
    return 0 ;
}

int rev (int x)
{
    if (x==0)
    {
        return (r) ;
    }

    else 
    {
        r=r*10+ x%10 ;
        return ( rev(x/10) ) ;
    }
}