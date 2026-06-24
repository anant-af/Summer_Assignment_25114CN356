// WAP to find first repeating character

#include<stdio.h>
int main () {
    char str[200] ;
    int i, j, count ;
    char ch ;

    printf("Enter the string : ");
    gets(str) ;

    for(i=0 ; str[i]!='\0' ; i++)
    {
        count=0 ;
        for(j=0 ; str[j]!='\0' ; j++)
        {
            if(str[i]==str[j])
            {
                count++ ;
            }
        }

        if(count>1)
        {
            ch=str[i] ;
            break ;
        }
    }

    if(ch !='\0')
    {
        printf("First repeating character = %c",ch);
    }
    else
    {
        printf("No repeating character found");
    }

    return 0 ;
}