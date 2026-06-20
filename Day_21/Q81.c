// WAP to find string length without strlen()

#include<stdio.h>
int main () {
    char str[100] ;
    int i=0 ;

    printf("Enter the string : ");
    gets(str);

    while(str[i]!='\0')
    {
        i++;
    }
    printf("Length of the string = %d",i);
    return 0 ;

}