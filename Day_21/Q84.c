// WAP to convert lowercase into uppercase

#include<stdio.h>
int main () {
    char str[100] ;
    int i ;

    printf("Enter the string :");
    gets(str) ;

    printf("Converting lowercase into uppercase : ");
    for(i=0 ; str[i]!='\0' ; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            printf("%c",(str[i]-32)) ;
        }
        else
        {
            printf("%c",str[i]);
        }
    }

    return 0 ;
} 