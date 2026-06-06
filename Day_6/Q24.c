// WAP to find x^n without power 

#include<stdio.h>
int main () {
    int x, n, i, result;
    printf("enter no.:");
    scanf("%d",&x);

    printf("enter power :");
    scanf("%d",&n);

    result=1;
    for(i=1 ; i<=n ; i++)
    {
        result = result * x ;

    }
    printf("%d^%d = %d",x,n,result);
    return 0;

}