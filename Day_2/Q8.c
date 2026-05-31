
// WAP to check whether a no. is palindrome.
#include<stdio.h>
int main () {
    int n, r, num, rev ;

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
    if(rev==num)
    {
        printf("%d is palindrome", num);
    }
    else{
        printf("%d is not palindrome",num);
    }
    
    return 0; 

}




