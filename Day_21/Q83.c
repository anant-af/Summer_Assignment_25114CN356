// WAP to count vowels and consonants

#include<stdio.h>
int main () {
    char str[100] ;
    int i, vowel=0, cons=0 ;

    printf("Enter the string :");
    gets(str) ;

    for(i=0 ; str[i]!='\0' ; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')      
        {
            vowel++ ;
        }
        else
        {
            cons++ ;
        }    
    }

    printf("No. of vowel in the string = %d\n",vowel);
    printf("No. of consonants in the string = %d",cons);

    return 0 ;
}