/*Write your solution after the comment
Write a function that prints all natural numbers from n to 100,
followed by a new line.
That is n is your argument, it should print from any number
passed as argument till 100.
*/
#include <stdio.h>
void nat()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for (n >=n; n<=100; n++)
    printf("%d\n", n);
}
int main()
{
    nat();
    return 0;
}
