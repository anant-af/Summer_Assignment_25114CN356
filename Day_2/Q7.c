// WAP to find the product of digits

#include<stdio.h>
int main () {
    int n, num, pro, r ;
    printf("enter no.=");
    scanf("%d",&n);
     num = n;
     pro = 1;

     while(n>0)
     {
        r = n % 10 ;
        pro = pro * r ;
        n=n/10 ;
     }
     printf("the product of digits of %d = %d",num,pro);
     return 0 ;
}
