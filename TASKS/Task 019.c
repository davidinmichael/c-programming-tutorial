/*
  Write a function to convert temperature from Celsius to
  Fahrenheit and vice versa.  
*/
double cels_to_fah(double temp)
{
	return ((9.0 / 5.0) * temp + 32);
}

int main(void)
{
	double temp, fahr;

	printf("Enter the temperature in celsius: ");
	scanf("%lf", &temp);

	fahr = cels_to_fah(temp);
	printf("This is the temp in fahrenheit: %lf\n", fahr);
	return (0);
}
