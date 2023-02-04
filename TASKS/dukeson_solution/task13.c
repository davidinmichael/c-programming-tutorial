#include <stdio.h>
#include <stdlib.h>

/* Write a program to find the sum of all elements in an array. */


int sum_array(int argc, char *argv[])
{
        int i = 1;
        int sum = 0;

        for (i = 1; i <= argc; i++)
        {
                sum += atoi(argv[i]);
        }
        return (sum);
}

int main(int argc, char *argv[])
{
        int i = 1;
        if (argc > 1)
        {
                printf("The sum of the array [");
                for (i = 1; i < argc; i++)
                {
                        printf("%d", atoi(argv[i]));
                        if (i < (argc - 1))
                                printf(", ");
                }
                printf("] = %d", sum_array(argc, argv));
        }
        else
                printf("Please enter some numeric data along side your program name.");
        return (0);
}