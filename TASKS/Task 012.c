/*Write your solution after the comment
Write a function that adds two integers and prints
the result.
*/

#include <stdio.h>

void AddInt(int num, int num1)
{
    int sum = num + num1;
    
    printf("The sum of %d and %d = %d\n", num, num1, sum);
}

int main()
{
    int num1, num2;
    
    printf("Enter an integer: ");
    scanf("%d", &num1);
    printf("Enter another integer: ");
    scanf("%d", &num2);
    AddInt(num1, num2);
}
