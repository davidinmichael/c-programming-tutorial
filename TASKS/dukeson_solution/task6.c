#include <stdio.h>

/* Write a function to find the LCM (least common multiple) of two numbers */

int get_lcm(int num_one, int num_two)
{
	int biggest = (num_one > num_two) ? num_one : num_two;

	while (1)
	{
		if (((biggest % num_one) == 0) && ((biggest % num_two) == 0))
			return (biggest);
		biggest++;
	}
	return (0);
}

int main(void)
{
	int first = 0, second = 0;

        printf("Enter two (2) numbers separated with a space:\t");
        scanf("%i %i", &first, &second);
	printf("The LCM of %d and %d = %d\n", first, second, get_lcm(first, second));
	return (0);
}