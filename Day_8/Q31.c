// WAP to print character triangle
/* A
   AB
   ABC
   ABCD
   ABCDE
   ......
*/

#include<stdio.h>
int main () {
    int i, j, n ;
    printf("enter no. of rows : ");
    scanf("%d",&n);

    for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=i ; j++)
        {
            printf(" ");
            printf("%c",(j+64)); // (as ASCII of A = 65)
        }
        printf("\n");
    }
    return 0 ;
} 