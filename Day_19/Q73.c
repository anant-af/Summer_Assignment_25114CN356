// WAP to add matrices

#include<stdio.h>
int main () {
     int a[100][100], b[100][100], i, j, rows, colmn ;

    printf("Enter no. of rows and columns :");
    scanf("%d%d",&rows,&colmn) ;

    printf("Enter 1st matrix elements : ");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<colmn ; j++)
        {
            scanf("%d",&a[i][j]) ;
        }    
    }

    printf("Enter 2nd matrix elements : ");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<colmn ; j++)
        {
            scanf("%d",&b[i][j]) ;
        }    
    }

    printf("Sum of given matrices :\n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<colmn ; j++)
        {
            printf("%d ",(a[i][j] + b[i][j])) ;
        }
        printf("\n") ;
    }
    return 0 ;
}