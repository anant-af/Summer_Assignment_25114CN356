// WAP to compress a string

#include<stdio.h>
int main () {
    char str[200] ;
    int i, count ;

    printf("Enter the string : ");
    gets(str);

    printf("After compressing a string : \n");
    for(i=0 ; str[i]!='\0' ; i++)
    {
        count=1 ;
        while(str[i]==str[i+1])
        {
            count++ ;
            i++ ;
        }

        printf("%c%d ",str[i],count) ;
    }

    return 0 ;
}