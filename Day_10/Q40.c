// WAP to print character pyramid
/*    A
     ABA
    ABCBA
   ABCDCBA
  ABCDEDCBA   
*/

#include<stdio.h>
int main () {
    int i, j, space, n ;
    n=5;

    
    for(i=1 ; i<=n ; i++)
    {
        
        for(space=1 ; space<=(n-i) ; space++)
        {
            printf(" ");
        }

        // printing increasing character
        for(j=1 ; j<=i ; j++)
        {
            printf("%c",(j+64));
        }

        // printing decreasing character
        for(j=i-1 ; j>=1 ; j--)
        {
            printf("%c",(j+64));
        }

        printf("\n");
    }
    return 0 ;
}