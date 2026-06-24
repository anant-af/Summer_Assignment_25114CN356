// WAP to find maximum occuring character

#include<stdio.h>
int main () {
    char str[200];
    int i, j, max=0 , count ;
    char maxch ;

    printf("Enter the string : ") ;
    gets(str) ;

    for(i=0 ; str[i]!='\0' ; i++)
    {
        count = 1 ;
        if(str[i]==' ' || str[i]=='\n')
        {
            continue ;
        }

        for(j=i+1 ; str[j]!='\0' ; j++)
        {
            
            if(str[i]==str[j])
            {
                count++ ;
            }

            if(count>max)
            {
                max=count ;
                maxch=str[i];
            }
        }
    }

    printf("Maximum occuring character = %c\n",maxch);
    printf("Frequency = %d",max);

    return 0 ;
}