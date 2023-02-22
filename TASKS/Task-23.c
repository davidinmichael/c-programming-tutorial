/*
Create a program that uses pointers to find the maximum value stored
in an array.
*/
#include <stdio.h>

int main(void)
{
	int num[] = {12, 32, 2, 8, 10, 405, 7, 15, 35, 117};
	int max = 0, len = 0;
	int itr;
	int *ptr = num;

	len = sizeof(num) / sizeof(num[0]);
	max = num[0];
	for (itr = 1; itr < len; itr++)
	{
		printf("max: %d\tptr: %d\n", max, *(ptr + itr));
		if (*(ptr + itr) > max)
			max = *(ptr + itr);
	}
	printf("The biggest integer in the array is %d\n", max);
	return 0;
}
