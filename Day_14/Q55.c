// WAP to find Second largest element. 

#include<stdio.h>
int main () {
    int a[100], n, i, large, sec_large ;

    printf("Enter no. of array element :");
    scanf("%d",&n);

    printf("Enter array element :");
    for(i=0 ; i<=(n-1) ; i++)
    {
        scanf("%d",&a[i]);
    }

    large=sec_large=a[0] ;
    for(i=1 ; i<=(n-1) ; i++)
    {
        if(a[i]>large)
        {
            sec_large=large ;
            large=a[i];
        }
        else if(a[i]>sec_large && a[i]!=large)
        {
            sec_large=a[i] ;
        }
    }
    printf("SEcond largest element = %d",sec_large) ;

    return 0 ;
}
