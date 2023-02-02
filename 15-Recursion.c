/*
A recursive function is a function that calls itself until a certain
condition is met. The condition is called the base case, and when it's
met, the function stops calling itself and returns a result.

Recursive functions are functions that call themselves. They are a way of
solving problems by breaking them down into smaller problems and solving
each small problem recursively until a base case is reached, at which
point the solutions to the smaller problems can be combined to solve the
original problem. Recursive functions can be used to solve many types of
problems, including mathematical problems, data structure problems, and
string manipulation problems, among others.

For example, consider a problem of calculating the factorial of a number.
Factorial of a number n is defined as n! = n * (n-1) * (n-2) * ... * 3 * 2 * 1.

Here's an implementation of the factorial function using recursion in C:
#include <stdio.h>

int factorial(int n) {
  if (n == 0) return 1; // base case
  return n * factorial(n-1); // recursive case
}

int main() {
  int n;
  printf("Enter a number to find its factorial: ");
  scanf("%d", &n);
  printf("The factorial of %d is %d\n", n, factorial(n));
  return 0;
}

In this example, the function factorial calls itself until the base
case n == 0 is met. The base case returns 1, and for all other cases,
the function returns n * factorial(n-1), where n-1 is the argument for
the next call to factorial.
*/