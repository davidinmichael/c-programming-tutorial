#include <stdio.h>

/*Write your solution after the comment
Write a function that prints all natural numbers from n to 100,
followed by a new line.
That is n is your argument, it should print from any number
passed as argument till 100.
*/

void natural_num_print(int arg)
{
        int count = 100;

        while (arg <= count)
        {
                printf("%d ", arg);
                arg++;
        }
        printf("\n");
}
int main(void)
{
        int num = 0;

        printf("Enter A Value:\t");
        if (scanf("%d", &num) == 1)
                natural_num_print(num);
        else
                printf("\nPlease enter a number.");

        return (0);
}