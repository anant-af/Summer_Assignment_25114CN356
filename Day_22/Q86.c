// WAP to count words in a sentence

#include<stdio.h>
#include<string.h>

int main () {
    char str[100] ;
    int i , count=0 ;
    printf("Enter a sentence :");
    gets(str) ;

    for(i=0 ; str[i]!='\0' ; i++)
    {
        if(str[i]!=' ' && (str[i+1]==' ' || str[i+1]=='\0' || str[i+1]=='\n'))
        {
            count++ ;
        }
    }
    printf("Total words in a sentence = %d",count);

    

    return 0 ;
} 