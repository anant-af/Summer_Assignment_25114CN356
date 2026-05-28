// WAP to calculate sum of first N natural numbers
#include<stdio.h>
int main () {
    int i,n,num ;
    printf("enter natural no.:");
    scanf("%d",&n);

    num=0;
    for(i=1;i<=n;i++)
    {
        num=num+i;
    }
    printf("Sum of first %d natural no.: %d",n,num);

    return 0;
    
}