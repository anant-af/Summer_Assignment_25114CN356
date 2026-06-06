// WAP to count set bits in a no.

// Set bits --> It is a bit whose value is 1 in binary representation of no.

#include<stdio.h>
int main () {
    int n, count, temp ;
    printf("enter no. :");
    scanf("%d",&n);
    temp = n ;
    count = 0;
    while(n>0)
    {
        if(n%2==1)
        {
            count++ ;
        }
        n = n/2 ;
    }
    printf("No. of set bits of %d decimal = %d",temp,count);
    return 0 ;
    
}