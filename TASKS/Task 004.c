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

int main() 
{
char name[10];
int age;

printf("What is your name: ");
scanf("%s", name);
printf("How old are you? ");
scanf("%d", &age);
printf("Your name is %s, and your are %d years old",name,age);

return 0;
}
