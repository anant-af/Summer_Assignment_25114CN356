// Q5. WAP to find sum of digit of a no.
#include<stdio.h>
int main () {
    int n, r, sum, num ;
    printf("enter no.=");
    scanf("%d",&n);
    num = n;
    sum=0;

    while(n>0)
    {
        r = n % 10 ;
        sum=sum+r;
        n=n/10;
    }
    printf("Sum of digit of %d = %d",num , sum);

    return 0; 
} 

// Q6. WAP to reverse a no.
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
        rev = rev*10+r ;
        n = n / 10 ;
    }
    printf("the reverse of %d = %d",num,rev);
    return 0;

}

// Q7.WAP to find the product of digits
#include<stdio.h>
int main () {
    int n, num, pro, r ;
    printf("enter no.=");
    scanf("%d",&n);
     num = n;
     pro = 1;

     while(n>0)
     {
        r=n%10 ;
        pro=pro*r ;
        n=n/10 ;
     }
     printf("the product of digits of %d = %d",num,pro);
     return 0 ;
}

// Q8.WAP to check whether a no. is palindrome.
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
        rev = rev*10+r ;
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




