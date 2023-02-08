/* Write your program after the comment
Write a program that reads input from user (Number)
If the number is Odd, display 'userInput is Odd'
If the number is even, display 'userInput is even'
If the number is zero, display 'This is zero'

NOTE: 'userInput' should be the number entered by the user.

*/
#include <stdio.h>

int main(void)
{
  int num;

  printf("Enter and integer: ");
  scanf("%d", &num);

  if (num % 2 == 1)
  {
    printf("userInput is Odd");
  }
  else if (num % 2 == 0)
  {
    printf("userInput is even");
  }
  else
  {
    printf("This is zero");
  }
  return (0);
}
