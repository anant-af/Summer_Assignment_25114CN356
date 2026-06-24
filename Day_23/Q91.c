// WAP to check anagram string

#include<stdio.h>
#include<string.h>
int main () {
    char str1[200], str2[200] ;
    int i, j ;
    char temp ;

    printf("Enter 1st string : ");
    gets(str1);

    printf("Enter 2nd string : ");
    gets(str2);

    if(strlen(str1) != strlen(str2))
    {
        printf("Given strings are not anagram");
    }
    else
    {
        for(i=0 ; i<strlen(str1)-1 ; i++)
        {
            for(j=i+1 ; j<strlen(str1) ; j++)
            {
                if(str1[i]>str1[j])
                {
                    temp = str1[i] ;
                    str1[i] = str1[j] ;
                    str1[j] = temp ;
                }

                if(str2[i]>str2[j])
                {
                    temp = str2[i] ;
                    str2[i] = str2[j] ;
                    str2[j] = temp ;
                }
            }
        }

        if(strcmp(str1,str2)==0)
        {
            printf("Strings are anagram");
        }
        else
        {
            printf("Strings are not anagram");
        }
    }

    return 0 ;
}