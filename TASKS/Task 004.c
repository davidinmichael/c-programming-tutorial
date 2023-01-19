/* Write your program after the comment
Write a program that asks and reads the following input from a use;
Your name
Your age
and then displays; Your name is 'name' and you are 'age' years old.

Example;
what is your name: David
How old are you?: 65

Output:
Your name is David and you are 65 years old.

*/

#include <stdio.h>

int main(void)
{
  char StrName[20];
  int age;
  
  printf("Enter your name: ");
  scanf("%s", &StrName);
  
  printf("Enter your age: ");
  scanf("%d", &age);
  
  printf("Your name is %s and you are %d years old\n);
         return;
         }
