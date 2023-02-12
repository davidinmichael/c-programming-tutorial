#include <stdio.h>
/*
  Write a function to convert temperature from Celsius to
  Fahrenheit and vice versa.
*/

/**
 * temp_converter - Converts temperature from ⁰C to Fahrenheit and vice versa
 * @c: Temperature in ⁰C
 * @f: Temperature in F
 * Return: Void
 * Formula to convert from ⁰C to F = (⁰C * 9/5) + 32
 * Formula to convert from F to ⁰C = (F - 32) * 5/9
 */

void temp_converter(float c, float f)
{
	const float a = 1.8;  //Same as 9/5
	const int b = 32;
	float d;
	const float e = 0.56; // same as 5/9


	if (c)  //i.e if temperature in Celsius is given
	{
		d = c * a;
		f = d + b;
		printf("%.2f⁰C to Fahrenheit is: %.2fF\n", c, f);
	}
	else if (f)
	{
		d = f - b;
		c = d * e;

		printf("%.2fF to Celsius is: %.2fF\n", f, c); //i.e if temperature in Fahrenheit is given
	}
}

/**
 * main - tests the Temperature converter function.
 * Return: 0
 */

int main(void)
{
	float c;
	float f;

	temp_converter(c, 89.6);
	temp_converter(32, f);

}
