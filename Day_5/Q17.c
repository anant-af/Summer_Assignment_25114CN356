// WAP to check a perfect no. 

#include<stdio.h>
int main () {
    int i, n, sum=0;
    printf("enetr no.:");
    scanf("%d",&n);

    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum +=i ;
        }
    }

    if(sum==n)
    {
        printf("%d is perfect no.",n);
    }

    else 
    {
        printf("%d is not a perfect no.",n);
    }

    return 0;
}