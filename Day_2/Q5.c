// WAP to find sum of digit of a no.

#include<stdio.h>
int main () {
    int n, r, sum, num ;
    printf("enter no.=");
    scanf("%d",&n);
    num = n;
    sum=0;

    while(n>0)
    {
        r = n % 10 ;
        sum = sum + r ;
        n=n/10;
    }
    printf("Sum of digit of %d = %d",num , sum);

    return 0; 
} 
