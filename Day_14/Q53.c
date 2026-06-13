// WAP to linear search 

#include<stdio.h>
int main () {
    int a[100], n, i, num, temp ;
    temp=0 ;
    printf("Enter no. of array element :");
    scanf("%d",&n);

    printf("Enter array element :");
    for(i=0 ; i<=(n-1) ; i++)
    {
        scanf("%d",&a[i]) ;
    }

    printf("Enter element to be search :");
    scanf("%d",&num) ;

    for(i=0 ; i<=(n-1) ; i++)
    {
        if(a[i]==num)
        {
            temp = 1 ;
            break ;
        }
    }
    if(temp==1)
    {
        printf("%d element found at %d index",num,i) ;
    }
    else
    {
        printf("%d element not found", num) ;
    }

    return 0 ;
}