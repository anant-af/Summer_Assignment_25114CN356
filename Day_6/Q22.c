// WAP to convert binary into decimal 

#include<stdio.h>
#include<math.h>
int main () {
    int dec[100], n, i, temp, r, sum;
    printf("enter binary no.:");
    scanf("%d",&n);
    temp=n;
    i=0 ;
    sum=0;

    while(n>0)
    {
        r = n%10 ;
        dec[i]=r * pow(2,i);
        sum = sum + dec[i];
        i++;
        n = n/10;
    }
    printf("DEcimal of %d binary no. = %d",temp,sum);
    return 0 ;
}