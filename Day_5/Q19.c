// WAP to print factor no. 

#include<stdio.h>
int main() {
    int i, n;

    printf("enter no.:");
    scanf("%d",&n);

    printf("Factors of %d =",n);

    for(i=1 ; i<=n ; i++)
    {
        if(n%i==0)
        {
            printf(" ");
            printf("%d",i);
        }
    }

    return 0;
}