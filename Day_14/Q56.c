// WAP to find duplicate in an array

#include<stdio.h>
int main () {
    int a[100], n, i, j ;

    printf("Enter no. of array element :");
    scanf("%d",&n);

    printf("Enter array elements :");
    for(i=0 ; i<=(n-1) ; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Duplicate elements are : ");
    for(i=0 ; i<=(n-1) ; i++)
    {
        for(j=i+1 ; j<=(n-1) ; j++)
        {
            if(a[i]==a[j])
            {
                printf("%d ",a[i]);
                break ;
            }
        }
    }

    return 0;
}