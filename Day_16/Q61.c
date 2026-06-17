// WAP to find missing no. in an array

#include<stdio.h>
int main () {
    int a[100], i, n, sum=0 , total, missing ;

    printf("Enter no. of array element :") ;
    scanf("%d",&n) ;

    printf("Enter array element from 1 to %d :", n ) ;
    for(i=0 ; i<(n-1) ; i++)
    {
        scanf("%d",&a[i]) ;
        sum=sum+a[i] ;
    }

    //using A.P method 
    total = (n*(n+1))/2 ;

    missing = total-sum ;
    printf("Missing no. = %d", missing) ;
    return 0 ;
    
}