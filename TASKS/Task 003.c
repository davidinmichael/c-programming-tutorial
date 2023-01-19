/* Write your program after the comment
Write a program that reads input from user (Number)
If the number is Odd, display 'userInput is Odd'
If the number is even, display 'userInput is even'
If the number is zero, display 'This is zero'

NOTE: 'userInput' should be the number entered by the user.

*/

#include <stdio.h>

int main()
    {
    int Number;

    printf("Enter your Number: ");
    scanf("%d",&Number);

    if(Number%2==0)
        {
            printf("Entered number is even\n");
    }
    else
        {

    printf("Entered number is odd\n");
       }
    return 0;
    }

