/*Write your solution after the comment
Fizz-Buzz - Write a program that prints the numbers
from 1 to 100, followed by a new line. But for multiples
of three print Fizz instead of the number and for the
multiples of five print Buzz. For numbers which are
multiples of both three and five print FizzBuzz.
Your output should like this;
1 2 fizz 4 buzz fizz 7 8 fizz... and so on.
*/

#include <stdio.h>

void print_FizzBuzz()

	{
	int n;

	for(n=1; n<=100; n++)
	if(n%15==0)
	{
	printf("FizzBuzz");
	}
	else if(n%3==0)
	{
	printf("Fizz");
	}
	else if(n%5==0)
	{
	printf("Buzz");
	}
	else
	{
    	printf("%d ", n);
	}
	}

int main()
{
   print_FizzBuzz();
   return 0;
}

