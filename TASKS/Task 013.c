/*Write your solution after the comment
Write a function that prints all natural numbers from n to 100,
followed by a new line.
That is n is your argument, it should print from any number
passed as argument till 100.
*/
#include<stdio.h>
void natuaral_num(int nat)
{
    int i;
    for (i = nat; i <= 100; i++) // start from the input
    {
        printf("%i ", i);
    }
    printf("\n");
}
int main(void)
{
    int n;

    printf("Printing of natural numbers. Choose a number!\n");
    scanf("%i", &n);
    natuaral_num(n);
}