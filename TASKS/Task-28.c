/*
Write a program to take input of how many students,
calculate the average marks of the class by using an array to store
the marks of each student and then using a loop to calculate the
sum and average of all the marks.
*/
#include <stdio.h>
#include <stdlib.h>
void sum_array_score(int *arr, int size)
{
        int itr = 0;
        int total_score = 0;

        printf("\nThe sum of the scores in the array [");
        for (itr = 0; itr < size; itr++)
        {
                printf("%d", arr[itr]);
                if (itr < (size - 1))
                        printf(", ");
                total_score += arr[itr];
        }
        printf("] is = %d", total_score);
}

void accept_arr(void)
{
        int size = 0, itr;
        static int arr[20];

        printf("How many numbers?:\t");
        if (scanf("%d", &size) == 1)
        {
                if (size <= 1)
                {
                        printf("Your array size cannot be lesser than 1.");
                        exit(1);
                }
                else if (size > 20)
                {
                        printf("Your array size cannot be more than 20.");
                        exit(1);
                }
                for (itr = 0; itr < size; itr++)
                {
                        printf("Enter a number:\t");
                        scanf("%i", &arr[itr]);
                }

                sum_array_score(arr, size);
        }
}

int main(void)
{
        accept_arr();

        return (0);
}