#include <stdio.h>

/*
  Write a function to convert temperature from Celsius to
  Fahrenheit and vice versa.  
*/

double farenheit_to_celius(double temp)
{
	double result;

	result = ((temp - 32) * 5) / 9;
	return (result);
}

double celius_to_farenheit(double temp)
{
	double result;

	result = (temp * 9 / 5) + 32;
	return (result);
}

int main(void)
{
	double num = 0;
	double fah_val;
	double cel_val;

	printf("Enter a Temperature in Celcius (*C):\t");
	if (scanf("%lf", &num) == 1)
	{
		fah_val = celius_to_farenheit(num);
		printf("\nConverting %.2f celcius to fahrenheit = %.2f\n", num, fah_val);

		cel_val = farenheit_to_celius(fah_val);
		printf("\nConverting %.2f fahrenheit to celcius = %.2f\n", fah_val, cel_val);
		return (0);
	}
	printf("\nYou did not enter a numeric  data.\n");
	return (1);
	
}