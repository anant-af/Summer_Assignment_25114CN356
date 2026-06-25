// WAP to find common characters in strings

#include<stdio.h>
int main () {
    char str1[200], str2[200] ;
    int i, j, flag ;

    printf("Enter !st string : ");
    gets(str1);

    printf("Enter 2nd string : ");
    gets(str2);

    printf("Common characters : ");
    for(i=0 ; str1[i]!='\0' ; i++)
    {
        flag=0 ;
        for(j=0 ; j<i ; j++)
        {
            if(str1[i]==str1[j])
            {
                flag=1 ;
                break ;
            }
        }
        if(flag==1)
        {
            continue ;
        }

        for(j=0 ; str2[j]!='\0' ; j++)
        {
            if(str1[i]==str2[j])
            {
                printf("%c",str1[i]);
                break ;
            }
        }

    }

    return 0 ;
}