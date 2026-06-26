// WAP to create quiz application

#include <stdio.h>
#include <stdlib.h>

int main() {
    int score = 0;
    char answer;

    // Question 1
    printf("Q1: What is the output of 5 % 2?\n");
    printf("A) 2  B) 1  C) 0  D) 5\n");
    printf("Your Answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Correct answer is B.\n");
    }

    // Question 2
    printf("\nQ2: Which keyword is used to create a function in C?\n");
    printf("A) func  B) function  C) void  D) main\n");
    printf("Your Answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Correct answer is C.\n");
    }

    // Question 3
    printf("\nQ3: What does 'printf' stand for?\n");
    printf("A) Print Format  B) Print Function  C) Print File  D) Print Format String\n");
    printf("Your Answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Correct answer is A.\n");
    }

    // Question 4
    printf("\nQ4: Which header file is required for standard input/output?\n");
    printf("A) conio.h  B) stdio.h  C) stdlib.h  D) string.h\n");
    printf("Your Answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Correct answer is B.\n");
    }

    // Question 5
    printf("\nQ5: What is the size of an 'int' typically?\n");
    printf("A) 1 byte  B) 2 bytes  C) 4 bytes  D) 8 bytes\n");
    printf("Your Answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Correct answer is C.\n");
    }

    // Final Result
    printf("\n=================================\n");
    printf("Final Score: %d / 5\n", score);
    if (score == 5) {
        printf("Congratulations! Perfect Score!\n");
    } else if (score >= 3) {
        printf("Good job! You passed.\n");
    } else {
        printf("Better luck next time!\n");
    }
    printf("=================================\n");

    return 0;
}   