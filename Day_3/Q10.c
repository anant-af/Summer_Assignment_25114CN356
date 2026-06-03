// WAP to print prime no. in a range 

#include<stdio.h>
int main () {
    int i, j, start, end, prime ;
    printf("enter start and end no. range for prime no. =");
    scanf("%d%d",&start,&end);

    if(start<=1 && end<=1)
    {
        printf("enter +ve range number");
    }

    else
    {
        printf("Prime no. range from %d to %d : \n", start, end);
        for(i=start ; i<=end ; i++)
        {
            prime=1;
            for(j=2 ; j<=i/2 ; j++)
            {
                if(i%j==0)
                {
                    prime = 0;
                    break ;
                }
            }
            if(prime==1)
            {
                printf("%d\t",i);
            }
        }
    }
    return 0;


}