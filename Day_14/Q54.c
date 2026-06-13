// WAP to frequency of an element.

#include<stdio.h>
int main () {
    int a[100], n, i, num, count=0 ;

    printf("Enter no. of array element :");
    scanf("%d",&n);

    printf("Enter array elements :");
    for(i=0 ; i<=(n-1) ; i++)
    {
        scanf("%d",&a[i]) ;
    }

    printf("Enter element to find frequency :");
    scanf("%d",&num);

    for(i=0 ; i<=(n-1) ; i++)
    {
        if(a[i]==num)
        {
            count++ ;
        }
    }
    printf("Frequency od %d = %d",num,count);
    return 0 ;
}