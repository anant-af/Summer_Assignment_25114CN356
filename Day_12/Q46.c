// WAP to  write function for armstrong no.

#include<stdio.h>
#include<math.h>

void armstrong (int) ; // Declaration

int main () {
    int n ;
    printf("Enter no.:");
    scanf("%d",&n);

    armstrong(n); // Calling
    return 0 ;
}

void armstrong (int x)  // Definition
{
    int count, r, num, s ;
    count = 0 ;
    num=x ;
    while(num>0)
    {
        count ++ ;
        num = num/10 ;
    }

    num = x ;
    s = 0 ;
    while(num >0)
    {
        r = num%10 ;
        s = s + (int)pow(r,count);
        num = num / 10 ;
    }

    if(s==x)
    {
        printf("%d is armstrong no.",x);
    }
    else 
    {
        printf("%d is not armstrong no.",x);
    }

}