// WAP to convert decimal into binary

#include<stdio.h>
int main () {
    int n, bin[100], i, j, temp;
    printf("enter no.:");
    scanf("%d",&n);
    i=0;
    temp=n;
    while(n>0)
    {
        bin[i] = n%2 ;
        i++;
        n=n/2 ;
    }

    printf("Binary of %d decimal : ",temp);
    for(j=i-1 ; j>=0 ; j--)
    {
        printf("%d", bin[j]);
    }

    return 0;
}