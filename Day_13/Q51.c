// WAP to find largest and smallest element 

#include<stdio.h>
int main () {
    int a[100], i, n, large, small ;

     printf("Enter no. of array element :");
     scanf("%d",&n);

     printf("Enter array element :");
     for(i=0 ; i<=(n-1) ; i++)
     {
        scanf("%d",&a[i]) ;
     }

     large=small=a[0] ;
     for(i=0 ; i<=(n-1) ; i++)
     {
        if(large<a[i])
        {
            large = a[i] ;
        }

        if(small>a[i])
        {
            small = a[i];
        }
     }
     printf("largest and smallest elements = %d and %d respectively",large,small) ;

     return 0 ;
}