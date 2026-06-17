// WAP to find union of an arrays

#include<stdio.h>
int main () {
     int a[100], b[100], aUb[200], i, j, n, m, k=0, found ;

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
        aUb[k]=a[i] ;
        k++ ;
    }

    for(i=0 ; i<n ; i++)
    {
        found=0 ;
        for(j=0 ; j<m ; j++)
        {
            if(b[i]==(aUb[j]))
            {
                found=1 ;
                break ;
            }
        }

        if(found==0)
        {
            aUb[k]=b[i] ;
            k++ ;
        }
    }
    printf("Union of an arrays : ");
    for(i=0 ; i<k ; i++)
    {
        printf("%d ",aUb[i]) ;
    }
    return 0 ;
}