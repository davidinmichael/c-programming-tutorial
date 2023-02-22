#include <stdio.h>

#define PI 3.14159

/* Write a function to find the area of a circle */

double get_circle_area(int radius)
{
        if (radius > 0)
                return ((double)(PI * (radius * radius)));
	return (0.0);
}

int main(void)
{
	int rad = 0;

        printf("Enter the radius:\t");
        if (scanf("%i", &rad))
                printf("The area of a circle with radius of %d = %.2f\n", rad, get_circle_area(rad));
        return (0);
}