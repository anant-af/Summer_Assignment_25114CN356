// WAP to count digits in a no.
 
#include<stdio.h>
int main () {
    int n , num , count=0 ;
    printf("enter whole no.=");
    scanf("%d",&n);
    num = n;

    while(n>0)
    {
        count++;
        n = n/10 ;
    }
    printf("Total digit in %d = %d",num,count);

    return 0;
}
