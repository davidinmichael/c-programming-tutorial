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

int main()
{
    for (int i = 1; i <= 100; ++i)
    {
        if (i % 15 == 0)
        {
            printf("FizzBuzz");
        }
        
        else if (i % 5 == 0)
        {
            printf("Buzz");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz");
        }
        else
        {
        printf("%d", i); 
        }
    printf("\n");
    }
return (0);    
}
