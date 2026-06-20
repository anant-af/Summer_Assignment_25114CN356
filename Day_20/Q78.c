// WAP to check symmetric matrix

#include<stdio.h>
int main () {
    int a[100][100], b[100][100], r, c, i, j, found=0 ;
    
    printf("Enter no. of rows and columns :");
    scanf("%d%d",&r,&c) ;

    printf("Enter matrix elements :\n");
    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<c ; j++)
        {
            scanf("%d",&a[i][j]) ;
        }    
    }

    // making transpose of the give matrix
    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<c ; j++)
        {
            b[i][j]=a[j][i] ;
        }
    }

    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<c ; j++)
        {
            if(a[i][j] != b[i][j])
            {
                found=1 ;
                break ;
            }
        }
        if(found==1)
        {
            break ;
        }
    }

    if(found==0)
    {
        printf("Given matrix is symmetric");
    }
    else
    {
        printf("Given matrix is not symmetric");
    }
    return 0 ;

}