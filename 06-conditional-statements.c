/*
C if Statement
The syntax of the if statement in C programming is:

if (test expression) 
{
   // code
}

How if statement works?
The if statement evaluates the test expression inside the parenthesis ().

If the test expression is evaluated to true, statements inside the body of if are executed.
If the test expression is evaluated to false, statements inside the body of if are not executed.

Practice Program
Check if a number is negative
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    
    if (n < 0) 
    {
        printf("%d is a negative number\n", n);
    }

  


/*

C if...else Statement
The if statement may have an optional else block. The syntax of the if..else statement is:

if (test expression) {
    // run code if test expression is true
}
else {
    // run code if test expression is false
}

How if...else statement works?
If the test expression is evaluated to true,
statements inside the body of if are executed.
statements inside the body of else are skipped from execution.

If the test expression is evaluated to false,
statements inside the body of else are executed
statements inside the body of if are skipped from execution.

Practice Program
Check whether a number is odd or even
*/


    int p;
    printf("Enter a number\n");
    scanf("%d", &p);
    
    if (p % 2 == 0) 
    {
        printf("%d is an even number\n", p);
    }

    else
    {
        printf("%d is an odd number\n", p);
    }
return (0);
}

/*
C if...else Ladder
The if...else statement executes two different codes depending
upon whether the test expression is true or false. Sometimes,
a choice has to be made from more than 2 possibilities.

The if...else ladder allows you to check between multiple
test expressions and execute different statements.

Syntax of if...else Ladder
if (test expression1) {
   // statement(s)
}
else if(test expression2) {
   // statement(s)
}
else if (test expression3) {
   // statement(s)
}
.
.
else {
   // statement(s)
}

Practice Program
Program to relate two integers using ==, > or < symbol



=*=*=*=*=*=  Please explain this practice task  =*=*=*=*=*=*=



*/
