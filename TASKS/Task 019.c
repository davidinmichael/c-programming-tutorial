/*
  Write a function to convert temperature from Celsius to
  Fahrenheit and vice versa.  
*/

/*
  Write a function to convert temperature from Celsius to
  Fahrenheit and vice versa.  
*/
#include <stdio.h>


float fah_cel(float a)
{
    float sum = (a - 32) * 5/9;
    return sum;
}

float cel_fah(float c)
{
    float sum;
    sum = (c * 9/5) + 32;
    return sum;
}


int main()
{
    float num, result;
    printf("Enter the Fahrenheit number: ");
    scanf("%f", &num);
    result = fah_cel(num);
    
    float cel, result2, result3;
    printf("Enter Celsius: ");
    scanf("%f", &cel);
    
    result2 = cel_fah(cel);
    
    
    printf("%.1f'F = %.1f'C\n", num, result);
    printf("%.1f'C = %.1f'F\n", cel, result2);
    
    return (0);
}
