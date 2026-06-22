// WAP to check palindrome string

#include<stdio.h>
#include<string.h>
int main () {
    char str1[100], str2[100] ;
    
    printf("Enter the string : ");
    gets(str1) ;

    // Making a copy of a string in other string
    strcpy(str2,str1);

    //now reversing the string
    strrev(str1) ;

    if(strcmp(str1,str2)==0)
    {
        printf("%s is a palindrome",str2);
    }
    else
    {   
        printf("%s is not palindrome",str2);
    }

    return 0 ;
}