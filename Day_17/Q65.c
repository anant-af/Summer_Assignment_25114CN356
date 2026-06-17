// WAP to find merge of an arrays

#include<stdio.h>
int main () {
    int a[100], b[100], i, j, n, m ;

    printf("Enter no. of array element of 1st array :");
    scanf("%d",&n) ;

    printf("Enter its array elements : ");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]) ;
    }

    printf("Enter no. of array element of 2nd array :");
    scanf("%d",&m) ;

    printf("Enter its array elements : ");
    for(j=0 ; j<m ; j++)
    {
        scanf("%d",&b[j]) ;
    }

    // Now Merging array
    j=0 ;
    for(i=n ; i<(m+n) ; i++)
    {
        a[i]=b[j] ;
        j++ ;
    }

    // Printing merged array
    for(i=0 ; i<(m+n) ; i++)
    {
        printf("%d ",a[i]) ;
    }

    return 0 ;
}