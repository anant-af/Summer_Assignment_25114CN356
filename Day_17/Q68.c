// WAP to find common elements from an arrays

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

    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<m ; j++)
        {
            if(a[i]==b[j])
            {
                printf("%d ",a[i]);
            }
        }
    }

    return 0 ;
}

// here Common means the element can be duplicated 