// WAP to binary search 

#include<stdio.h>
int main () {
    int a[100], i, n, temp=0 , x, mid, low, high ;
    
    printf("Enter no. of array element :");
    scanf("%d",&n) ;
    // Binary search works only on sorted array 
    printf("Enter array elements in ascending order : ");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]) ;
    }

    printf("Enter element to search : ");
    scanf("%d",&x) ;

    low=0 ;
    high=n-1 ;
    while(low<=high)
    {
        mid=(low+high)/2 ;
        if(a[mid]==x)
        {
            temp=1 ;
            break ;
        }
        else if(a[mid]>x)
        {
            high=mid-1 ;
        }
        else
        {
            low=mid+1 ;
        }
    }

    if(temp==1)
    {
        printf("Element present at %d",mid+1) ;
    }
    else
    {
        printf("Unsuccessful search ") ;
    }

    return 0 ;
    
}
