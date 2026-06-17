// WAP to remove duplicate from array

#include<stdio.h>
int main () {
    int a[100], n, i, j, dup  ;

    printf("Enter no. of array element :");
    scanf("%d",&n);

    printf("Enter array elements :");
    for(i=0 ; i<=(n-1) ; i++)
    {
        scanf("%d",&a[i]) ;
    }

    for(i=0 ; i<n ; i++)
    {
        dup=0 ;
        for(j=0 ; j<i ; j++)
        {
            if(a[i]==a[j])
            {
                dup=1 ;
                break ;
            }
        }

        if(dup==0)
        {
            printf("%d ",a[i]) ;
        }
    }
    return 0 ;
}