// WAP to transpose matrix

#include<stdio.h>
int main () {
    int a[100][100], rows, colmn, i, j ;
    
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

    printf("Transpose of the matrix :\n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<colmn ; j++)
        {
            printf("%d ",a[j][i]) ;
        }
        printf("\n");
    }
    return 0 ;
}