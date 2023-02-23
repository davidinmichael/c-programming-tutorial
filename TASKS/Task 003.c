/* Write your program after the comment
Write a program that reads input from user (Number)
If the number is Odd, display 'userInput is Odd'
If the number is even, display 'userInput is even'
If the number is zero, display 'This is zero'

NOTE: 'userInput' should be the number entered by the user.

*/

#include <stdio.h>

int main() {

int Number;

printf("Enter your number: ");
scanf("%d", &Number);

if (Number%2==0){
printf("%d is even");
}
else if (Number%2==1){
printf("%d is odd");
}
else if (Number==0){
printf("%d is zero");
}

  return 0;
}
