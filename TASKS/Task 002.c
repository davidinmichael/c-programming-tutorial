/* Write your program after the comment
Write a program that asks and reads the score of a user
If the score is less than 80, display to the user that they
are not elgible to be enrolled.
If the score is greater than or equal 80, they can be enrolled.
*/


#include <stdio.h>

int main() {
    int score;
    printf("Enter your score: ");
    if (scanf("%d", &score) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return;
    }
    if (score < 80) {
        printf("You are not eligible to be enrolled.\n");
    } else {
        printf("You can be enrolled.\n");
    }
    return 0;
}
