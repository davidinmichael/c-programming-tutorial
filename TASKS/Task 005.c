/*
 Write a program in C to find the square of any number
using the function.
*/

float square()
{
  float x;
  printf("Enter the number %f");
  scanf("%f", &x);

  float square=x*x;
  printf("The square is %f",square);
 }

  int main()
  {

 square();


  return 0;
  }

