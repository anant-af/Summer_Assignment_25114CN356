//WAP to find pair with given sum

#include<stdio.h>
int main () {
    int a[100], n, i, j, sum, found=0 ;

    printf("Enter no. of array element :");
    scanf("%d",&n);

    printf("Enter array elements :");
    for(i=0 ; i<=(n-1) ; i++)
    {
        scanf("%d",&a[i]) ;
    }

    printf("Enter required sum :");
    scanf("%d",&sum) ;

    for(i=0 ; i<n ; i++)
    {
        for(j=i+1 ; j<n ; j++)
        {
            if(a[i]+a[j]==sum)
            {
                printf("Pair presented = %d and %d \n ",a[i],a[j]) ;
                found=1 ;
            }
        }
    }
    if(found==0)
    {
        printf("Pair does not exist") ;
    }
    return 0 ;

}