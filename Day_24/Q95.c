// WAP to find longest word

#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], longest[200];
    int i, len = 0, maxLen = 0, start = 0, maxStart = 0;

    printf("Enter a sentence: ");
    gets(str);

    for(i = 0; ; i++)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            len++;
        }
        else
        {
            if(len > maxLen)
            {
                maxLen = len;
                maxStart = start;
            }

            len = 0;
            start = i + 1;
        }

        if(str[i] == '\0')
            break;
    }

    strncpy(longest, str + maxStart, maxLen);
    longest[maxLen] = '\0';

    printf("Longest word = %s", longest);

    return 0;
}