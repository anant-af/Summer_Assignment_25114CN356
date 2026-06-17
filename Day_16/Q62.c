// WAP to find maximum frequency element 

#include<stdio.h>
int main () {
   int a[100], n, i, j, count, maxElement, maxCount=0 ;

    printf("Enter no. of array element :");
    scanf("%d",&n);

    printf("Enter array elements :");
    for(i=0 ; i<=(n-1) ; i++)
    {
        scanf("%d",&a[i]) ;
    }

    for(i=0 ; i<n ; i++)
    {
        count=1 ;
        for(j=1+i ; j<n ; j++)
        {
            if(a[i]==a[j])
            {
                count++ ;
            }
        }

        if(count>maxCount)
        {
            maxCount=count ;
            maxElement=a[i] ;
        }
    }

    printf("Maximum frequency element = %d\n",maxElement) ;
    printf("Frequency = %d",maxCount) ;

    return 0 ;
}