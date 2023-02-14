/*
Declare two integer variables and swap their values using a pointer.
*/
#include <stdio.h>

int add_arr(int *ptr, int n);

int main(void)
{
    int arr[4] = {10, 20, 30, 40};

    printf("The total of all the number is: %d", add_arr(arr, 4));
}
/** add_arr - sums up all the elements in the array and return the output
 *  @ptr: pointer to the array
 *  @n: number of elements in the array
 *  Return: sum
 */

int add_arr(int *ptr, int n)
{
    int i = 0;
    int sum = 0; // initialize to 0

    while (i < n)
    {
        sum += ptr[i]; // add value of pointer to sum
        i++;
    }
    return (sum);
}
