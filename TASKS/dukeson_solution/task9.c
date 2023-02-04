#include <stdio.h>

/* Write a function to find the Fibonacci series of a given number */
void print_fibo_series(int num)
{
        int temp;
        int swp_1 = 0, swp_2 = 1;
        int itr = 0;

        if (num >= 2)
        {
                printf("%d %d ", swp_1, swp_2);
                while (itr < num)
                {
                        temp = swp_1 + swp_2;
                        printf("%d ", temp);
                        swp_1 = swp_2;
                        swp_2 = temp;
                        ++itr;
                }
        } 
        else 
        {
                printf("%d", swp_1);
        }        
}

int main(void)
{
        int num = 0;

        printf("Enter the radius:\t");
        if (scanf("%i", &num))
        {
                printf("Fibonnaci series for %d = ", num);
                print_fibo_series(num);
        }
        return (0);
}