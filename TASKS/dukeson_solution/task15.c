#include <stdio.h>
#include <stdlib.h>

/* Write a program that implements different mathematical functions such as 
finding the factorial of a number, 
calculating the power of a number, 
and finding the square root of a number. */

int get_factorial(int a)
{
        if (a == 0)
                return (1);
        if (a == 1)
                return (a);
        return (a * get_factorial(a - 1));
}

double get_power(int num, int pow)
{
        int itr;
        double pwr = 1.0;

        for (itr = pow; itr > 0; --itr)
                pwr *= (double)num;
        return (pwr); 
}

int get_square_root(int num)
{
        double sqrroot = 1;
        int itr = 0;
        while (1)
        {
                itr++;
                sqrroot = (num / sqrroot + sqrroot) / 2;
                if (itr == num + 1)
                        break;
        }
        return (sqrroot);
}

int accept_value(void)
{
        int num = 0;

        printf("Enter a number:\t");
        if (scanf("%d", &num) == 1)
                return (num);
        return (0);
}

int main(void)
{
        char *options = "Make a Choice:\n1 - [Factorial]\n2 - [Power]\n3 - [Square Root]\n";
        int first, response, second;

        printf("%s", options);
        if (scanf("%d", &response) == 1)
        {
                switch (response)
                {
                case 1:
                        first = accept_value();
                        printf("\nFactorial of %d! = %d\n", first, get_factorial(first));
                        break;
                case 2:
                        first = accept_value();
                        second = accept_value();
                        printf("\n%d raised to the power of %d = %.0f\n", first, second, get_power(first, second));
                        break;
                case 3:
                        first = accept_value();
                        printf("\nThe square root of %d = %d\n", first, get_square_root(first));
                        break;
                default:
                        printf("\nChoose from the options.\n");
                        break;
                }
        }
        else
                printf("\nNumeric data required.\n");
        return (0);
}