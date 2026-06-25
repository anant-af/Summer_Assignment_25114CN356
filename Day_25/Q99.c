// WAP to sort names alphabetically

#include<stdio.h>
#include<string.h>
int main () {
    char name[100][100], temp[200];
    int n, i, j ;

    printf("Enter no. of names : ");
    scanf("%d",&n);
    getchar() ;

    printf("Enter names : \n");
    for(i=0 ; i<n ; i++)
    {
        gets(name[i]);
    }

    for(i=0 ; i<n-1 ; i++)
    {
        for(j=1+i ; j<n ; j++)
        {
            if( strcmp(name[i],name[j]) > 0)
            {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);

            }
        }
    }
    printf("Names in alphabetical order : \n");
    for(i=0 ; i<n ; i++)
    {
        printf("%s\n",name[i]);
    }

    return 0 ;
}