// WAP to multiply matrices

#include<stdio.h>
int main () {
    int a[100][100], b[100][100],c[100][100], i, j, k, r1, c1, r2, c2 ;

    printf("Enter rows and columns of 1st matrix :");
    scanf("%d%d",&r1,&c1) ;

    printf("Enter 1st matrix elements : ");
    for(i=0 ; i<r1 ; i++)
    {
        for(j=0 ; j<c1 ; j++)
        {
            scanf("%d",&a[i][j]) ;
        }    
    }

    printf("Enter rows and columns of 2nd matrix :");
    scanf("%d%d",&r2,&c2) ;
    printf("Enter 2nd matrix elements : ");
    for(i=0 ; i<r2 ; i++)
    {
        for(j=0 ; j<c2 ; j++)
        {
            scanf("%d",&b[i][j]) ;
        }    
    }

    if(c1==r2)
    {
        c[0][0]=0 ;
        for(i=0 ; i<r1 ; i++)
        {
            for(j=0 ; j<c2 ; j++)
            {
                for(k=0 ; k<c1 ; k++)
                {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j] ;
                }
            }
        }

        printf("Multiplication of given matrices : \n") ;
        for(i=0 ; i<r1 ; i++)
        {
            for(j=0 ; j<c2 ; j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }

    else
    {
        printf("Invalid order of given matrices");
    }

    return 0 ;
}