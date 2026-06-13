// WAP to input and display array 

#include<stdio.h>
int main () {
    int a[100], i, n ;

    printf("Enter no. of array elements :");
    scanf("%d",&n);

    printf("Enter array element :");
    for(i=0 ; i<=(n-1) ; i++)
    {
        scanf("%d",&a[i]) ;
    }

    printf("The array elements are :");
    for(i=0 ; i<=(n-1) ; i++)
    {
        printf("\n%d\n",a[i]);
    }

    return 0 ;
}