// WAP to find intersection of an array

#include<stdio.h>
int main () {
    int a[100], b[100], i, j, n, m, k, found ;
    
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

    printf("intersection of an array : ") ;
    for(i=0 ; i<n ; i++)
    {
        found=0 ;
        for(k=0 ; k<i ; k++)
        {
            if(a[i]==a[k])
            {
                found=1 ;
                break ;
            }
        }
        if(found==1)
        {
            continue ;
        }

        for(j=0; j<m ; j++)
        {
            if(a[i]==b[j])
            {
              printf("%d ",a[i]) ;
              break ;
            }
        }
    }

    return 0 ;
}