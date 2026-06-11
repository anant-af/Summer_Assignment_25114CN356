// WAP to write function to find sum of two no. 

#include<stdio.h>

int sum (int , int) ; // Declaration

int main () {
    int a, b, result ;
    
    printf("enter two no. :");
    scanf("%d%d",&a,&b);

    result = sum(a,b) ; // Callimg 
    printf("Sum of %d and %d = %d",a,b,result);

    return 0 ;
} 

int sum (int x, int y)  // Definition 
{
    int z; 
    z = x+y ;

    return (z) ;
}