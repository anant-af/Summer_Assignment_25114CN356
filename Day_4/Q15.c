// WAP to check armstrong no.
 
#include<stdio.h>
#include<math.h>
int main () {
    int n, count, temp, r, s;
    count=0;
    printf("enter no.:");
    scanf("%d",&n);

    temp=n;
    while(temp>0)
    {
        count++;
        temp=temp/10;
    }

    temp=n;

    s=0;
    while(temp>0)
    {
        r=temp%10;
        s = s + (int)pow(r,count);
        temp=temp/10;
    }
    printf("s=%d\n",s);
    if(s==n)
    {
        printf("%d is armstrong no.\n",n);
    }

    else 
    {
        printf("%d is not armstrong no.",n);
    }
    return 0;
}