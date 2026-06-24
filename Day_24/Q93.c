// WAP to check string rotation 

#include<stdio.h>
#include<string.h>
int main () {
    char str1[200], str2[200], temp[400] ;

    printf("Enter 1st string : ");
    gets(str1) ;


    printf("Enter 2nd string : ");
    gets(str2) ;

    if(strlen(str1)!=strlen(str2))
    {
        printf("String is not a rotation");
    }

    else
    {
        strcpy(temp,str1);
        strcat(temp,str1);
        
        //strstr() is used to find substring inside a string and returns a null if not found
        if(strstr(temp,str2) != NULL)
        {
            printf("String is a rotation");
        }
        else
        {
            printf("String is not a rotation");
        }
    }

    return 0 ;

}