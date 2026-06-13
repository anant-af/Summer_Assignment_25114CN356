// WAP to count even and odd element 

#include<stdio.h>
int main () {
    int a[100], n, i, even, odd ;
    
    printf("Enter no. of array element :");
    scanf("%d",&n);

    printf("Enter array elements :");
    for(i=0 ; i<=(n-1) ; i++)
    {
        scanf("%d",&a[i]) ;
    }

    even = odd = 0 ;
    for(i=0 ; i<=(n-1) ; i++)
    {
        if(a[i]%2 == 0)
        {
            even++ ;
        }

        else 
        {
            odd ++ ;
        }
    }

    printf("No. of even array elements = %d\n",even);
    printf("No. of odd array element = %d",odd) ;

    return 0 ;

}