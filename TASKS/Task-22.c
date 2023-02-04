/*
Create a program that declares a pointer to an integer, assigns an
address to it, and outputs the value stored at the memory address
pointed by the pointer.
*/
#include <stdio.h>
int main(void)
{
	int num = 123;
	int *ptr = NULL;

	printf("Number is :\t%d\n", num);
	
	ptr = &num;

	printf("Value in the variable pointed to by the pointer is %d\n", *ptr);

	return (0);
}
