// WAP to find GCD of two no.

#include<stdio.h>
int main () {
    int a,b,temp,x,y ;
    printf("enter two no.: ");
    scanf("%d%d",&a,&b);
    x=a ;
    y=b ;
    while(b != 0) 
    {
        temp=b;
        b= a % b ;
        a=temp ;
    }
    printf("GCD of %d and %d = %d",x,y,a );

    return 0 ;

}