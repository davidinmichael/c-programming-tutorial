#include <stdio.h>
#include <stdlib.h>
/*Write your solution after the comment
Write a function that adds two integers and prints
the result.
*/

int accept_value(char *chr)
{
        int var = 0;

        printf("Enter %s Value:\t", chr);
        if( scanf("%d", &var) == 1)
                return (var);
        else
                return (0);
}

void add_up()
{
        int sum = 0;
        int first; 
        int second;

        first = accept_value("First");
        second = accept_value("Second");
        sum = (first + second);
        printf("\nThe sum of %d + %d = %d.\n", first, second, sum);
}

int main(void)
{
        add_up();

        return (0);
}