// WAP to move zeroes to end 

#include<stdio.h>
int main () {
    int a[100], n, i, j, temp ;

    printf("Enter no. of array element :");
    scanf("%d",&n);

    printf("Enter array elements :");
    for(i=0 ; i<n ; i++) 
    {
        scanf("%d",&a[i]) ;
    }

    j=0 ;
    for(i=0 ; i<n ; i++)
    {
        if(a[i]!=0)
        {
            temp = a[i] ;
            a[i] = a[j] ;
            a[j] = temp ;
            j++ ;
        }
    }

    printf("Array after moving zeroes to end : ");
    for(i=0 ; i<n ; i++)
    {
        printf("%d ",a[i]) ;
    }

    return 0 ;
}