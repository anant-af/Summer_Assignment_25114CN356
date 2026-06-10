// WAP to print no. pyramid 
/*     1
      121
     12321
    1234321
   123454321   
*/

#include<stdio.h>
int main () {
    int i, j, space, n ;
    
    n=5 ; // here n is no. of rows

    for(i=1 ; i<=n ; i++)
    {
        for(space=1 ; space <=(n-i) ; space++ )
        {
            printf(" ");
        }

        // for printing increasing no.
        for( j =1 ; j<=i ; j++)
        {
            printf("%d",j);
        } 

        // for printing decreasing no.
        for(j=i-1 ; j>=1 ; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}