// WAP to create no. guessing game

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main () {
    int num, guess, attempts=0 ;

    srand(time(0)) ;
    num = rand() % 100 + 1 ;

    printf("No. guessing game : \n");
    printf("Guess a no. between 1 and 100 \n");

    do
    {
        printf("Enter your guess : ");
        scanf("%d",&guess);

        attempts++ ;

        if(guess>num)
        {
            printf("Too High ! \n");
        }
        else if(guess<num)
        {
            printf("Too Low !\n");
        }
        else
        {
            printf("Congratulations ! You guessed the correct no. \n");
        }
    }while(guess != num) ;

    printf("Total Attempts = %d",attempts);
    
    return 0 ;
    
}