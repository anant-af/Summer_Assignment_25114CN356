// WAP to bubble sort 

#include<stdio.h>
int main () {
    int a[100], i, j, n, temp ;
    
    printf("Enter no. of array element :");
    scanf("%d",&n) ;

    printf("Enter its array elements : ");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]) ;
    }

    for(i=0 ; i<(n-1) ; i++)  // for no. of passes
    {
        for(j=0 ; j<(n-1-i) ; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j] ;
                a[j]=a[j+1] ;
                a[j+1]=temp ;
            }
        }
    }

    printf("The sorted array : ");
    for(i=0 ; i<n ; i++)
    {
        printf("%d ",a[i]) ;
    }
    return 0 ;
}