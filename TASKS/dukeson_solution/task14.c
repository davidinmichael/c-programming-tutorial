#include <stdio.h>
#include <stdlib.h>

/* Create a program to find the average of a set of numbers. */


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

double get_average(int argc, char *argv[])
{
        int sum = 0;
        int count = 0;
        double avg = 0;

        sum = sum_array(argc, argv);
        count = argc - 1;
        avg = (double)sum / (double)count;
        return (avg);
}

int main(int argc, char *argv[])
{
        int i = 1;
        int count = 0;

        if (argc > 1)
        {
                count = argc - 1;
                printf("The sum of the array [");
                for (i = 1; i < argc; i++)
                {
                        printf("%d", atoi(argv[i]));
                        if (i < (argc - 1))
                                printf(", ");
                }
                printf("] = %d", sum_array(argc, argv));
                printf(" and the average of the %d numbers is %.2f.\n", count, get_average(argc, argv));
        }
        else
                printf("Please enter some numeric data along side your program name.");
        return (0);
}