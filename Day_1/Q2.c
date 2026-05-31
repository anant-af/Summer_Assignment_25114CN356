// WAP to print multiplication table of a given no.

#include<stdio.h>
int main () {
    int i,n ;
    printf("enter no. for table= ");
    scanf("%d",&n);

    printf("Table of %d : \n ",n);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n ", n,i,(n*i) );
    }
    return 0;

}
