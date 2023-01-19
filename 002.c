#include        <stdio.h>

/*A program that asks and reads the score of a user
 * If the score is less than 80, display to the user that they are not elgible to be enrolled.
 * If the score is greater than or equal 80, they can be enrolled.
 */

#include <stdio.h>


int main()
{
    int user;
    int score = 80;

    printf("Enter your score: ");
    scanf("%c", &score);

    if(user < 80)
    {

    printf("Sorry, you are not eligible to be enrolled\n", score);
    scanf("%c", &score);

    }

    if(user => 80)
    {
        printf("Congratulations! You are eligible to be enrolled");
        scanf("%c", &score);
    }

    return (0);
}

