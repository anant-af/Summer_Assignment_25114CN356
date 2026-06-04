// WAP to check strong no.

#include<stdio.h>
int main () {
    int n,r,fact,sum,i,num;
    printf("enter no.:");
    scanf("%d",&n);

    num=n;
    sum=0;
    while(n>0)
    {
        r=n%10;
        fact=1;

        for(i=1;i<=r;i++)
        {
            fact=fact*i ;    
        }
        sum=sum+fact ;
        n=n/10;
    }

    if(sum==num)
    {
        printf("%d is strong no.",num);
    }

    else 
    {
        printf("%d is not strong no.",num);
    }
    return 0;
}