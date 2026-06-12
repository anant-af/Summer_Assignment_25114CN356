// WAP to write function for perfect no.

#include<stdio.h>

void perfect (int) ; // Declaration

int main () {
    int n ;
    printf("Enter no. :");
    scanf("%d",&n);

    perfect(n) ; // Calling
    return 0 ;
}

void perfect (int x) // Definition
{
    int i, sum ;
    sum = 0 ;

    for(i=1 ; i<=(x/2) ; i++)
    {
        if(x%i==0)
        {
            sum=sum+i ;
        }
    }
    if(sum==x)
    {
        printf("%d is perfect no.",x);
    }

    else 
    {
        printf("%d is not perfect no.",x);
    }

}
