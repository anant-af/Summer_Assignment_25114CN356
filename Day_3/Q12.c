// WAP to find LCM of two no.

#include<stdio.h>
int main () {
    int a,b,temp,x,y ;
    int GCD , LCM ;
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

    GCD=a ;
    LCM= (x*y)/GCD ;
    printf("LCM of %d and %d = %d",x,y,LCM);
    return 0 ;

}