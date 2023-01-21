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

int main (void)
{
printf("This is a basic calculator [a sign b]\nwhere 'a' & 'b' are numbers and 'sign' is one of those [+, -, *, /, %%]: \n");
double a,b;
char sign;
printf("Enter number a : ");
scanf("%lf", &a);

printf("Enter number b : ");
scanf("%lf", &b);

printf("Enter the operaion you want to perform : ");
scanf(" %c", &sign);

switch(sign)
{
	case '+':
		printf("%.2lf %c %.2lf = %.2lf\n", a, sign, b, a + b);
		break;
	case '-':
		printf("%.2lf %c %.2lf = %.2lf\n", a, sign, b, a - b);
		break;
	case '*':
		printf("%.2lf %c %.2lf = %.2lf\n", a, sign, b, a * b);
		break;
	case '/':
		printf("%.2lf %c %.2lf = %.2lf\n", a, sign, b, a / b);
		break;
	case '%':
		printf("%.2lf %c %.2lf = %d\n", a, sign, b, (int) a % (int) b);
		break;

	default :
		printf("Error, please enter a correct operation\n");
}




return (0);
}

