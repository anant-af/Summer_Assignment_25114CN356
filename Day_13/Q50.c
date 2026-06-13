// WAP to find sum and average of array 

#include<stdio.h>
int main () {
    int a[100], n, i, sum ;
    double avg ;
    
    printf("Enter no. of array element :");
    scanf("%d",&n);

    printf("Enter array elements :");
    for(i=0 ; i<=(n-1) ; i++)
    {
        scanf("%d",&a[i]) ;
    }
    sum=0 ;
    for(i=0 ; i<=(n-1) ; i++)
    {
        sum = sum + a[i] ;
    }
    printf("Sum of an array = %d",sum);

    avg =(double)sum / n ;
    printf("\nAverage of an array = %.3lf",avg);

    return 0 ;

}