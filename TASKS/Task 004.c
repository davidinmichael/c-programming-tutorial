#include <stdio.h>
#include <stdlib.h>

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

int main(void)
{
        int age = 0;
        char name[100];

        printf("Enter Name:\t");
        scanf("%s", name);

        printf("Enter Age:\t");
        scanf("%d", &age);

        printf("Your name is %s and you are %d years old.", name, age);

        return (0);
}
