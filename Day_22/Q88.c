// WAP to remove spaces from string 

#include<stdio.h>
int main () {
    char str[100] ;
    int i, j ;

    printf("Enter the string : ");
    gets(str) ;

    
    for(i=0 ; str[i]!='\0' ; i++)
    {
        if(str[i]!=' ')
        {
            str[j]=str[i] ;
            j++ ;    
        }   
    }
    str[j]='\0' ;
    printf("String after removing spaces : %s ",str);

    return 0 ;
} 