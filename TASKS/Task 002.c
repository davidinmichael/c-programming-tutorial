/* Write your program after the comment
Write a program that asks and reads the score of a user
If the score is less than 80, display to the user that they
are not elgible to be enrolled.
If the score is greater than or equal 80, they can be enrolled.
*/



#include <stdio.h>

int main()
{
    int num;
    printf("Enter your score: ");
    scanf("%d",&num);

    if(num>=80)
        printf("You are eligbe to be enrolled");
    else
        {
        printf("You are not eligbe to be enrolled");
        }
    return 0;
}

