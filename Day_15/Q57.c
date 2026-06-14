// WAP to reverse an array 

#include<stdio.h>
int main () {
    int a[00], n, i, j, temp ;

    printf("Enter no. of array element :");
    scanf("%d",&n) ;

    printf("Enter array element :") ;
    for(i=0 ; i<=(n-1) ; i++ )
    {
        scanf("%d",&a[i]) ;
    }

    for(i=0,j=n-1 ; i<j ; i++,j--)
    {
        temp=a[i] ;
        a[i]=a[j] ;
        a[j]=temp ;
    }

    printf("The reversed array = ") ;
    for(i=0 ; i<=(n-1) ; i++)
    {
        printf("%d",a[i]) ;
    }

    return 0 ;

}