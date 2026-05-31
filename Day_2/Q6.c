// WAP to reverse a no.

#include<stdio.h>
int main () {
    int n, r, rev, num ;
    printf("enter no.=");
    scanf("%d",&n);

    rev = 0 ;
    num = n ;
    while(n>0)
    {
        r = n % 10 ;
        rev = rev * 10 + r ;
        n = n / 10 ;
    }
    printf("the reverse of %d = %d",num,rev);
    return 0;

}
