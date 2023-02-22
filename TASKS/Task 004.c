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

int main() {
    char n[50];
    int a;
//where n represents the name of user, while a represents the user's age
    printf("Enter Your name: \n");
    scanf("%s", n);
    printf("Enter your Age: \n");
    scanf("%d", &a);
    printf("Your name is %s and you are %d years old.\n", n, a);
    
      return 0;
}
