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
int num;

printf("Enter a number\n");
scanf("%d", &num);

   if (num >= 1)
   {
       if (num % 2 == 0)
       {
           printf("%d is Odd number", num);
       }
       else
       {
           printf("%d is Even number", num);
       }
   }
   else if (num == 0)
   {
       printf("This is zero");
   }
   else
   {
       printf("\"Error!\" Enter a positive number");
   }

return (0);
}
