// WAP to find diagonal sum

#include<stdio.h>
int main () {
    int a[100][100], rows, colmn, i, j, sum=0 ;
    
    printf("Enter no. of rows and columns :");
    scanf("%d%d",&rows,&colmn) ;

    printf("Enter matrix elements :\n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<colmn ; j++)
        {
            scanf("%d",&a[i][j]) ;
        }    
    }

    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<colmn ; j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j] ;
            }
        }
    }

    printf("Sum of diagonal of matrix = %d",sum);
    return 0 ;
}