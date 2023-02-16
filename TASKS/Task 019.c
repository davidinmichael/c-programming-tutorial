/*
  Write a function to convert temperature from Celsius to
  Fahrenheit and vice versa.  
*/
#include <stdio.h>

float convert_Temperature(float temp, char unit) {
    if (unit == 'C') {
        return (temp * 9/5) + 32;
    } else if (unit == 'F') {
        return (temp - 32) * 5/9;
    } else {
        printf("Invalid unit. Use 'C' for Celsius or 'F' for Fahrenheit.\n");
        return 0;
    }
}
int main()
{
    char unit;
    float temp;
    printf("Enter your temperature: ");
    scanf("%f", &temp);
    printf("Indicate F or C: ");
    scanf(" %c", &unit);

    float Answer = convert_Temperature(temp, unit);
    printf("Answer: %f", Answer);
}
