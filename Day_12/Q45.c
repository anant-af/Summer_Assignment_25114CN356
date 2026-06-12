// WAP to write function for palindrome bo.

#include<stdio.h>

void palindrome(int) ; // Declaration

int main () {
    int n ;
    printf("Enter no.:");
    scanf("%d",&n);

    palindrome(n); // Calling

    return 0 ;
}

void palindrome (int x) // Definition
{
    int r, rev, num ;
    num=x ;
    rev=0 ;

    if(x<0)
    {
        printf("Please enter +ve no.");
    }

    else 
    {

        while(x>0)
        {
            r = x%10 ;
            rev = rev*10 + r ;
            x = x/10 ; 
        }

        if(rev==num)
        {
            printf("%d is palindrome no.",num);
        }
        else 
        {
            printf("%d is not palindrome no.",num);
        }
    }
        
}