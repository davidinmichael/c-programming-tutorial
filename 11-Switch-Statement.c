/*
    Switch Statement
The switch statement allows us to execute one code
block among many alternatives.

You can do the same thing with the if...else..if ladder.
However, the syntax of the switch statement is much easier
to read and write.

Syntax of switch...case

switch (expression)
​{
    case constant1:
      // statements
      break;

    case constant2:
      // statements
      break;
    .
    .
    .
    default:
      // default statements
}

Notes:

If we do not use the break statement, all statements
after the matching label are also executed.
The default clause inside the switch statement is optional.

Practice Program
Create a calculator
*/

#include <stdio.h>

int main()
{

    double n1, n2, result;
    char opp;
    
   
    scanf("%c", &opp);
    scanf("%lf %lf", &n1, &n2);
    
     /*if (opp != '*' && opp != '+' && opp != '%' && opp != '-')
    {
        printf("Enter a valid operator");
        scanf("%c", &opp);
    }*/

    
    switch (opp)
    {
        case '+':
            result = n1 + n2;
            printf("%lf", result);
        break;
        
        
        case '-':
            result = n1 - n2;
            printf("%lf", result);
        break;
        
        case '/':
            result = n1 / n2;
            printf("%lf", result);
        break;
        
        case '*':
            result = n1 * n2;
            printf("%lf", result);
        break;
        
        default:
            printf("Enter a valid operator");
    }

return (0);
}
