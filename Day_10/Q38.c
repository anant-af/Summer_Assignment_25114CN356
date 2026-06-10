// WAP to print reverse pyramid
/* *********
    *******
     *****
      ***
       *
*/

#include<stdio.h>
int main () {
    int i, j, space, n ;
    
    n=5 ; // here n is no. of rows

    for(i=n ; i>=1 ; i--)
    {
        for(space=1 ;  space<=(n-i) ; space++)
        {
            printf(" ");
        }
        for(j=1 ; j<=(2*i-1) ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0 ;
}