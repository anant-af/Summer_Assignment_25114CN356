//WAP to find nth fibonacci term

#include<stdio.h>
int main () {
    int i, n, a=0, b=1, next;
    printf("enter no. of term :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            next=a;
        }

        else if(i==2)
        {
            next=b;
        }

        else 
        {
            next=a+b;
            a=b;
            b=next;
        }
    }
    printf("%dth term of fibonacci series = %d",n,b);

    return 0;

}