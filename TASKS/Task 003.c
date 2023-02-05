/* Write your program after the comment
Write a program that reads input from user (Number)
If the number is Odd, display 'userInput is Odd'
If the number is even, display 'userInput is even'
If the number is zero, display 'This is zero'

NOTE: 'userInput' should be the number entered by the user.

*/

#include <stdio.h>

int main(int number)
{
    printf("Please input number: ");
    scanf("%d", &number);

    if ((number % 2) == 0)
    {
        printf("Userinput is Even");
    }
    else
    {
        printf("Userinput is odd");
    }
    return (0);
}
