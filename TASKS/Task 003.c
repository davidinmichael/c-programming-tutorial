/* Write your program after the comment
Write a program that reads input from user (Number)
If the number is Odd, display 'userInput is Odd'
If the number is even, display 'userInput is even'
If the number is zero, display 'This is zero'

NOTE: 'userInput' should be the number entered by the user.

*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("You entered zero\n");
    }
    else if (n %2==0) {
        printf("You entered an even number\n");
    } else {
        printf("You entered an odd number\n");
    }
    return 0;
}
