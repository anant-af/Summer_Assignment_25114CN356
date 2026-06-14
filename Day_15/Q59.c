// WAP to rotate array right

#include<stdio.h>
int main () {
    int a[100], n, i, temp ;

    printf("Enter no. of array elements :");
    scanf("%d",&n);

    printf("Enter array elements :");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]) ;
    }

    temp=a[n-1] ;

    for(i=n-1 ; i>0 ; i--)
    {
        a[i]=a[i-1] ;
    }
    a[0]=temp ;
    
    printf("Array after right rotation :");
    for(i=0 ; i<n ; i++)
    {
        printf("%d",a[i]) ;
    }
    return 0 ;

}