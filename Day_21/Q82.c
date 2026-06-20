// WAP to reverse a string

#include<stdio.h>
int main () {
    char str[100] ;

    printf("Enter the string : ");
    gets(str);

    //reversing a string using string function
    strrev(str) ;

    printf("%s",str) ;

    return 0 ;
}